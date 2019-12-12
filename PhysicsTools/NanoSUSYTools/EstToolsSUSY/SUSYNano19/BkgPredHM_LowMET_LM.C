/*
 * Znunu.C
 *
 *  Created on: Sep 23, 2015
 *      Author: hqu
 */

#include <fstream>

#include "LowMET_LM_Parameters.hh"
//#include "LowMET_Parameters.hh"

#include "../EstMethods/QCDEstimator.hh"

using namespace EstTools;

void BkgPredHM_LowMET_LM(){
  auto start = chrono::steady_clock::now();

  auto qcdcfg = qcdConfig();
  QCDEstimator q(qcdcfg);
  q.runBootstrapping = false;
  q.pred();
  q.printYields();


  vector<std::string> bkgnames  = {"qcd_pred"};
  vector<TString> bkglabels = {"QCD"};
  vector<TString> datalabel = {"Data"};

  auto convert = [&bkgnames](const ToyCombination &c, vector<TH1*> &hists, vector<TGraphAsymmErrors*> &graphs){
    for(const auto &s : bkgnames){
      hists.push_back(convertToHist(c.getPrediction(s), s, ";Search Region;Events"));
      graphs.push_back(convertToGraphAsymmErrors(c.getPrediction(s), s+"_gr", ";Search Region;Events"));
    }
    graphs.push_back(convertToGraphAsymmErrors(c.getPrediction(), "pred_total_gr", ";Search Region;Events"));
  };

  ToyCombination lc;
  lc.addBackground("qcd_pred",          &q.yields.at("_DATA"), &q.yields.at("_TF"));
  lc.combine();

  vector<TH1*> altpred;
  vector<TGraphAsymmErrors*> altgraphs;
  convert(lc, altpred, altgraphs);

  auto sigcfg = sigConfig();
  BaseEstimator s(sigcfg);
  s.calcYields();

  auto hdata = convertToHist(s.yields.at("data-sr"),"data",";Search Region;Events");

  auto plot = [&](const vector<TH1*> &vpred, const vector<TGraphAsymmErrors*> &vgraphs,TString outputBase) {
    // plot pred and data
    prepHists(vpred, false, false, true);
    prepHists({hdata}, false, false, false, {kBlack});

 
 
    auto leg = prepLegends(vpred, bkglabels, "F");
    appendLegends(leg, {hdata}, datalabel, "LP");
 
    leg->SetTextSize(0.03);
//    leg->SetNColumns(2);
    leg->SetY1NDC(leg->GetY2NDC() - 0.2);
    auto c = drawStackAndRatio(vpred, hdata, leg, true, "N_{obs}/N_{exp}", 0.001, 2.999, 0, -1, {}, nullptr, {});
    c->SetTitle(outputBase);
    c->SetCanvasSize(800, 600);
    c->Print(s.config.outputdir+"/" + outputBase +".pdf");
    c->Print(s.config.outputdir+"/" + outputBase +".C");
    c->Print(s.config.outputdir+"/" + outputBase +"_canvas.root");

    TFile *output = new TFile(s.config.outputdir+"/" + outputBase +".root", "RECREATE");
    for (auto *h : vpred) h->Write();
    for (auto *g : vgraphs) g->Write();
    hdata->Write();
    output->Close();
  };

  plot(altpred, altgraphs, "std_pred_trad");


  cout << "\n\n Traditional \n";
  for (const auto &b : lc.bkgs){
    s.printVec(lc.getPrediction(b.first),b.first);
  }
  s.printVec(lc.getPrediction(),"total_bkg");
  cout << "\n Summary Traditional \n";
  s.printSummary({q.yields.at("_pred")}, s.yields.at("data-sr"));


  auto end = chrono::steady_clock::now();
  auto diff = end - start;
  cout << chrono::duration <double> (diff).count() << " s" << endl;

}
