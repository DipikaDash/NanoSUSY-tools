#include "../EstMethods/QCDEstimator_total.hh"

#include "SRParameters.hh"

using namespace EstTools;


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
vector<Quantity> QCDPred();
void plotQCDCR_total();
void QCDEstimator_total(){
  //QCDPred();
   plotQCDCR_total();
}

vector<Quantity> QCDPred(){
  auto config = qcdConfig();

  QCDEstimator z(config);

  z.runBootstrapping = false;
  z.splitTF = SPLITTF;

  z.pred();
  z.naiveTF();
  z.printYields();

  std::map<TString,int> digits;
  digits["_DATA"] = 0; // indicate it's data for proper formatting
  digits["_QCDTF_CR_to_SR_noextrap"] = -3;
  digits["_QCDTF_SR_extrap"] = -3;

  z.printYieldsTableLatex({"_DATA", "_TF", "_pred"}, labelMap, "yields_qcd_lm_run2.tex","lm", digits); //LM
  if(z.splitTF){
    z.printYieldsTableLatex({"_DATA","_TF", "_QCDTF_CR_to_SR_noextrap", "_QCDTF_SR_extrap", "_pred"}, labelMap, "yields_qcd_hm_run2.tex","hm", digits);
  }else{
    z.printYieldsTableLatex({"_DATA","_TF", "_pred"}, labelMap, "yields_qcd_hm_run2.tex","hm", digits);
  }
  auto h1_data=convertToHist(z.yields.at("data-cr"),"Data in CR",";Control region;# met events");
  auto h1_QCD=convertToHist(z.yields.at("QCD_data"),"QCD in CR",";Control region;# met events");
  auto h1_nonQCD=convertToHist(z.yields.at("otherbkgs"),"nonQCD in CR",";Control region;# met events");
  prepHists({h1_data,h1_QCD,h1_nonQCD}, false, false, false, {kBlack,kGreen,kAzure});
  auto leg = prepLegends({}, {""}, "l");
  appendLegends(leg, {h1_data}, {"Data "}, "l");
  appendLegends(leg, {h1_nonQCD}, {"nonQCD"}, "f");
  appendLegends(leg, {h1_QCD}, {"QCD"}, "f");
  leg->SetTextSize(0.03);
  leg->SetY1NDC(leg->GetY2NDC() - 0.2);
  TCanvas* c = nullptr;
  c=drawStackAndRatio({h1_nonQCD,h1_QCD},h1_data,leg,true,"ratio",0,2,0,-1);
  c->SetTitle("data vs Background in CR");
  c->Print(z.config.outputdir+"validation_run2.png");
  c->Print(z.config.outputdir+"validation_run2.C");

  return z.yields.at("_pred");
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void plotQCDCR(){
  auto config = qcdConfig();
  config.catMaps = config.crCatMaps;

  BaseEstimator z(config.outputdir);
  z.setConfig(config);

  z.plotDataMC({"ttbar-cr", "wjets-cr", "tW-cr", "ttW-cr", "znunu-cr", "qcd-withveto-cr"}, "data-cr", false);

}

void plotQCDCR_total(){
  auto config = qcdConfig();
  config.catMaps = config.crCatMaps;

  BaseEstimator z(config.outputdir);
  z.setConfig(config);
   vector<TString> mc_samples ={"ttbar-16-cr","ttbar-17BtoE-cr","ttbar-17F-cr","ttbar-18preHEM-cr","ttbar-18postHEM-cr","wjets-16-cr","wjets-17BtoE-cr","wjets-17F-cr","wjets-18preHEM-cr","wjets-18postHEM-cr","znunu-16-cr","znunu-17BtoE-cr","znunu-17F-cr","znunu-18preHEM-cr","znunu-18postHEM-cr","minor-16-cr","minor-17BtoE-cr","minor-17F-cr","minor-18preHEM-cr","minor-18postHEM-cr","qcd-withveto-16-cr","qcd-withveto-17BtoE-cr","qcd-withveto-17F-cr","qcd-withveto-18preHEM-cr","qcd-withveto-18postHEM-cr"};
   vector<TString> data_sample = {"data-16-cr","data-17BtoE-cr","data-17F-cr","data-18preHEM-cr","data-18postHEM-cr"};
  //  vector<TString> mc_samples ={"ttbar-16-norm","ttbar-17BtoE-norm","ttbar-17F-norm","ttbar-18preHEM-norm","ttbar-18postHEM-norm","wjets-16-norm","wjets-17BtoE-norm","wjets-17F-norm","wjets-18preHEM-norm","wjets-18postHEM-norm","minor-16-norm","minor-17BtoE-norm","minor-17F-norm","minor-18preHEM-norm","minor-18postHEM-norm","qcd-16-norm","qcd-17BtoE-norm","qcd-17F-norm","qcd-18preHEM-norm","qcd-18postHEM-norm"};
  // vector<TString> data_sample = {"data-16-norm","data-17BtoE-norm","data-17F-norm","data-18preHEM-norm","data-18postHEM-norm"};

  for (auto category : z.config.categories){
    const auto &cat = z.config.catMaps.at(category);
    std::function<void(TCanvas*)> plotextra = [&](TCanvas *c){ c->cd(); drawTLatexNDC(cat.label, 0.2, 0.72); };
    z.plotDataMC(cat.bin, mc_samples, data_sample, cat, false, "", false, &plotextra);
  }

}
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void plotQCDInclusive(){
  auto config = qcdConfig();

  TString QCDCR_LM = "Stop0l_nJets>=2 && Pass_trigger_MET && Stop0l_ISRJetPt>=300 && Stop0l_Mtb < 175 && Stop0l_nTop==0 && Stop0l_nW==0 && Stop0l_nResolved==0 && Stop0l_METSig>10";
  TString QCDCR_HM = "Stop0l_nJets>=5 && Stop0l_nbtags>=1 ";
  config.sel = baseline;

  config.categories.clear();
  config.catMaps.clear();
  config.categories.push_back("dummy");
  config.catMaps["dummy"] = Category::dummy_category();

  TString region = "";
  BaseEstimator z(config.outputdir);
  z.setConfig(config);

  vector<TString> mc_samples = {"ttbar-16-cr", "ttbar-17BtoE-cr", "ttbar-17F-cr", "ttbar-18preHEM-cr", "ttbar-18postHEM-cr", "wjets-16-cr", "wjets-17BtoE-cr", "wjets-17F-cr", "wjets-18preHEM-cr", "wjets-18postHEM-cr","znunu-16-cr", "znunu-17BtoE-cr", "znunu-17F-cr", "znunu-18preHEM-cr", "znunu-18postHEM-cr", "minor-16-cr", "minor-17BtoE-cr", "minor-17F-cr", "minor-18preHEM-cr", "minor-18postHEM-cr","qcd-withveto-16-cr","qcd-withveto-17BtoE-cr","qcd-withveto-17F-cr","qcd-withveto-18preHEM-cr","qcd-withveto-18postHEM-cr"};
  vector<TString> mc_samples_16 = {"ttbar-16-cr", "wjets-16-cr", "znunu-16-cr", "minor-16-cr","qcd-withveto-16-cr"};
  vector<TString> mc_samples_17BtoE = {"ttbar-17BtoE-cr", "wjets-17BtoE-cr", "znunu-17BtoE-cr", "minor-17BtoE-cr","qcd-withveto-17BtoE-cr"};
  vector<TString> mc_samples_17F = {"ttbar-17F-cr", "wjets-17F-cr", "znunu-17F-cr", "minor-17F-cr","qcd-withveto-17F-cr"};
  vector<TString> mc_samples_18preHEM = {"ttbar-18preHEM-cr", "wjets-18preHEM-cr", "znunu-18preHEM-cr", "minor-18preHEM-cr","qcd-withveto-18preHEM-cr"};
  vector<TString> mc_samples_18postHEM = {"ttbar-18postHEM-cr", "wjets-18postHEM-cr", "znunu-18postHEM-cr", "minor-18postHEM-cr","qcd-withveto-18postHEM-cr"};

  vector<TString> data_sample = {"data-16-cr","data-17BtoE-cr","data-17F-cr","data-18preHEM-cr","data-18postHEM-cr"};
  // TString data_sample = "data-run2-cr";
  TString data_sample_16 = "data-16-cr";
  TString data_sample_17BtoE = "data-17BtoE-cr";
  TString data_sample_17F = "data-17F-cr";
  TString data_sample_18preHEM = "data-18preHEM-cr";
  TString data_sample_18postHEM = "data-18postHEM-cr";


  //vector<TString> mc_samples = {"ttbar-cr", "wjets-cr", "minor-cr","qcd-cr"};
  //TString data_sample = "data-cr";

  map<TString, BinInfo> varDict {
    {"met",       BinInfo("MET_pt", "#slash{E}_{T}", 20, 200, 1000, "GeV")},
      // {"ht",        BinInfo("Stop0l_HT",  "H_{T}", 30, 0, 3000, "GeV")},
      // {"njets",     BinInfo("Stop0l_nJets", "N_{j}", 12, -0.5, 11.5)},
      // {"nPV",     BinInfo("PV_npvsGood", "N_{PV}", 60, -0.5, 60.5)},
      // {"nbjets",    BinInfo("Stop0l_nbtags",  "N_{B}^{medium}", 5, -0.5, 4.5)},
      // 	      {"ptb",   BinInfo("Stop0l_Ptb", "p_{T}(b_{1}) [GeV]", 10, 20, 1000)}

  };


  std::function<void(TCanvas*)> plotextra;
  for (auto &var : varDict){
    z.resetSelection();
    // z.setSelection(QCDCR_LM, "cr_lm", "");
    // plotextra   = [&](TCanvas *c){ c->cd(); drawTLatexNDC("Run2 QCDCR LM", 0.2, 0.72); };
    // z.plotDataMC(var.second, mc_samples, data_sample, Category::dummy_category(), false, "", true, &plotextra);
    // z.setSelection(QCDCR_HM, "cr_hm", "");
    // plotextra   = [&](TCanvas *c){ c->cd(); drawTLatexNDC("Run2 QCDCR HM", 0.2, 0.72); };
    // z.plotDataMC(var.second, mc_samples, data_sample, Category::dummy_category(), false, "", true, &plotextra);

    // z.setSelection(QCDCR_LM, "cr_lm_16", "");
    // plotextra   = [&](TCanvas *c){ c->cd(); drawTLatexNDC("16 QCDCR LM", 0.2, 0.72); };
    // z.plotDataMC(var.second, mc_samples_16, data_sample_16, Category::dummy_category(), false, "", true, &plotextra);
    // z.setSelection(QCDCR_HM, "cr_hm_16", "");
    // plotextra   = [&](TCanvas *c){ c->cd(); drawTLatexNDC("16 QCDCR HM", 0.2, 0.72); };
    // z.plotDataMC(var.second, mc_samples_16, data_sample_16, Category::dummy_category(), false, "", true, &plotextra);
   
    z.setSelection(QCDCR_LM, "cr_lm_17BtoE", "");
    plotextra   = [&](TCanvas *c){ c->cd(); drawTLatexNDC("17BtoE QCDCR LM", 0.2, 0.72); };
    z.plotDataMC(var.second, mc_samples_17BtoE, data_sample_17BtoE, Category::dummy_category(), false, "", true, &plotextra);
    z.setSelection(QCDCR_HM, "cr_hm_17BtoE", "");
    plotextra   = [&](TCanvas *c){ c->cd(); drawTLatexNDC("17BtoE QCDCR HM", 0.2, 0.72); };
    z.plotDataMC(var.second, mc_samples_17BtoE, data_sample_17BtoE, Category::dummy_category(), false, "", true, &plotextra);

    z.setSelection(QCDCR_LM, "cr_lm_17F", "");
    plotextra   = [&](TCanvas *c){ c->cd(); drawTLatexNDC("17F QCDCR LM", 0.2, 0.72); };
    z.plotDataMC(var.second, mc_samples_17F, data_sample_17F, Category::dummy_category(), false, "", true, &plotextra);
    z.setSelection(QCDCR_HM, "cr_hm_17F", "");
    plotextra   = [&](TCanvas *c){ c->cd(); drawTLatexNDC("17F QCDCR HM", 0.2, 0.72); };
    z.plotDataMC(var.second, mc_samples_17F, data_sample_17F, Category::dummy_category(), false, "", true, &plotextra);

    z.setSelection(QCDCR_LM, "cr_lm_18preHEM", "");
    plotextra   = [&](TCanvas *c){ c->cd(); drawTLatexNDC("18preHEM QCDCR LM", 0.2, 0.72); };
    z.plotDataMC(var.second, mc_samples_18preHEM, data_sample_18preHEM, Category::dummy_category(), false, "", true, &plotextra);
    z.setSelection(QCDCR_HM, "cr_hm_18preHEM", "");
    plotextra   = [&](TCanvas *c){ c->cd(); drawTLatexNDC("18preHEM QCDCR HM", 0.2, 0.72); };
    z.plotDataMC(var.second, mc_samples_18preHEM, data_sample_18preHEM, Category::dummy_category(), false, "", true, &plotextra);

    z.setSelection(QCDCR_LM, "cr_lm_18postHEM", "");
    plotextra   = [&](TCanvas *c){ c->cd(); drawTLatexNDC("18postHEM QCDCR LM", 0.2, 0.72); };
    z.plotDataMC(var.second, mc_samples_18postHEM, data_sample_18postHEM, Category::dummy_category(), false, "", true, &plotextra);
    z.setSelection(QCDCR_HM, "cr_hm_18postHEM", "");
    plotextra   = [&](TCanvas *c){ c->cd(); drawTLatexNDC("18postHEM QCDCR HM", 0.2, 0.72); };
    z.plotDataMC(var.second, mc_samples_18postHEM, data_sample_18postHEM, Category::dummy_category(), false, "", true, &plotextra);
    
    }


}



// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
