#include<iostream>
#include <cmath>
#include "TString.h"
#include "TTree.h"
#include "TChain.h"
#include "TCanvas.h"
#include "TH1.h"
#include "TH1F.h"
#include "TH1D.h"
#include "TF1.h"
#include <string>
#include <map>
#include <cmath>
#include <sstream>
#include <fstream>
#include <vector>
#include "TGraph.h"
#include "THStack.h"
#include "TLatex.h"
#include "TLegend.h"
#include "TFile.h"
#include "TTree.h"
#include "TChain.h"
#include "TMath.h"
#include "TROOT.h"
#include "TLegend.h"
#include "TAttMarker.h"
#include "TMultiGraph.h"
#include "TPad.h"
#include "THStack.h"
#include "TColor.h"
using namespace std;

void direct(){


  TH1D *h1=new TH1D ("h1","",20, 200, 1000);
  TH1D *h2=new TH1D ("h2","",200,250,300);
  TChain tr1("Events");
  tr1.Add("/eos/uscms/store/user/ddash/nano_samples/ana_samples_v1/qcd_smear_sf_2016_tree.root");
  //tr1.Add("/uscms/home/ddash/nobackup/mywork/qcd/CMSSW_9_4_10/src/AnalysisMethods/macros/run/mini_samples/qcd_smear_16_mini_tree.root");

  // TChain tr2("Events");
  // tr2.Add("");
  TCanvas *c1 = new TCanvas ("c1","",600,600);
  //tr1.Draw("pseudoResp >> h1","Pass_MET && Pass_NJets20 && Pass_trigger_MET && Pass_EventFilter && Pass_HT && Pass_JetID && Pass_dPhiQCDSF && Pass_CaloMETRatio && Stop0l_nVetoElecMuon == 0 && pseudoRespPassFilter == 1 && abs(trueRespFlv) == 5 && pseudoResp < 1 && pseudoRespCSV >0.6324"); 
  // tr1.Draw("trueRespraw >>h1","35.9*weight*truePUWeight*btagWeight*topptWeight*sdMVAWeight*resTopWeight*(met >= 250 && (passmetmht || ismc) && (origmet/calomet<5) && (passmetfilters || process==10) && ht >300 &&  j1chEnFrac>0.1 && j1chEnFrac<0.99 && (dphij1met<0.1 || dphij2met<0.1) && nvetolep==0 &&(pseudoRespPassFilter == 1) && abs(trueRespFlv) == 5 && pseudoResp < 1 && pseudoRespCSV >0.8838)","hist");//pseudoRespCSV >0.8838
  //tr1.Draw("met >>h1","35.9*weight*truePUWeight*btagWeight*topptWeight*sdMVAWeight*resTopWeight*(met >= 250 && met>250 && njets>=2 &&(passmetmht || ismc) && (origmet/calomet<5) && (passmetfilters || process==10) && ht >300 &&  j1chEnFrac>0.1 && j1chEnFrac<0.99 && ((mtcsv12met<175 && nsdtop==0 && nsdw==0 && nrestop==0) && (dphij1met>0.5 && dphij2met>0.15 && dphij3met>0.15)) && ak8isrpt>200 && dphiisrmet>2 && nsdtop==0 && nsdw==0 && nrestop==0 && metovsqrtht>10 && nbjets==0 && nivf==0 && ak8isrpt>500 && njets>=2 && njets<=5) ");
  //tr1.Draw("trueResp >> h1","35.9*1000*Stop0l_evtWeight*puWeight*BTagWeight*PrefireWeight*(Pass_MET && Pass_trigger_MET && Pass_EventFilter && Pass_HT && Pass_JetID && Pass_dPhiQCDSF && Stop0l_nVetoElecMuon == 0 && pseudoRespPassFilter == 1 && abs(trueRespFlv) == 5 && pseudoResp < 1 && pseudoRespCSV >0.6324)","hist");
  //tr1.Draw("(recojetpt/trueRespGenPT) >> h2","35.9*1000*Stop0l_evtWeight*puWeight*BTagWeight*PrefireWeight*(Pass_MET && Pass_trigger_MET && Pass_EventFilter && Pass_HT && Pass_JetID && Pass_CaloMETRatio  && (Pass_dPhiQCDSF && Stop0l_nVetoElecMuon == 0 && (pseudoRespPassFilter == 1)) && abs(trueRespFlv) == 5) && pseudoResp < 1","same");
  //tr1.Draw("trueResp >> h1","","");
  //  tr1.Draw("(recojetpt/trueRespGenPT) >> h2","","same");
  // TCanvas *c2 = new TCanvas ("c2","",600,600);
  // c2->cd();Pass_CaloMETRatio
  // h1->Draw("");
   h1->SetLineWidth(3);
   tr1.Draw("MET_pt >> h1","35815.2*Stop0l_evtWeight*Stop0l_trigger_eff_MET_loose_baseline*puWeight*BTagWeight*topTagWeight*wTagWeight*restopTagWeight*softbTagWeight*PrefireWeight*qcdRespTailWeight*(Pass_MET && Pass_NJets30 && Stop0l_ISRJetPt>=200 && Stop0l_nTop==0 && Stop0l_nW==0 && Stop0l_nResolved==0 && Stop0l_METSig>=10 && Pass_dPhiMETLowDM && Stop0l_nbtags>=2 && Stop0l_Mtb<175&& Stop0l_ISRJetPt>=300 && Stop0l_ISRJetPt<500 && Stop0l_Ptb>=140 && Stop0l_nJets>=7 && MET_pt < 300 && Pass_EventFilter && Pass_HT && Pass_JetID && Pass_CaloMETRatio && (run < 319077 || run==1) && Pass_trigger_MET)");
   //tr1.Draw("MET_pt >> h1","27987.8*Stop0l_evtWeight*puWeight*BTagWeight*Stop0l_trigger_eff_MET_loose_baseline_QCD*PrefireWeight*qcdRespTailWeight*(Pass_MET && (1==1) && Pass_EventFilter && Pass_JetID && Pass_LeptonVeto && Pass_CaloMETRatio && Pass_NJets30 && Pass_HT && Pass_dPhiQCD30 && Stop0l_nJets >=2 && Stop0l_nTop == 0 && Stop0l_nW == 0 && Stop0l_nResolved == 0 && Stop0l_Mtb < 175 && Stop0l_ISRJetPt >= 300 && Stop0l_METSig > 10 && (run < 319077 || run ==1) && Pass_trigger_MET)"); //minor sample
    //*BTagWeight*topTagWeight*wTagWeight*restopTagWeight*softbTagWeight*PrefireWeight
    // tr1.Draw("MET_pt >> h1","38.8296*1000*Stop0l_evtWeight*puWeight*BTagWeight*topTagWeight*restopTagWeight*wTagWeight*softbTagWeight*Stop0l_trigger_eff_MET_loose_baseline*MuSF*ElecSF*TaSF*(Pass_MET && Pass_NJets20 && Stop0l_nJets>=5 && Stop0l_nbtags>=1 && Stop0l_nbtags==2 && Stop0l_Mtb>175 && Stop0l_HT<1000 && MET_pt>250.00 && Pass_EventFilter && Pass_HT && Pass_JetID && Pass_CaloMETRatio  && Pass_exHEMVeto20 && Pass_trigger_MET && Stop0l_nVetoElecMuon == 1 && Stop0l_MtLepMET < 100 && ( ((Stop0l_Mtb<175 && Stop0l_nTop==0 && Stop0l_nW==0 &&Stop0l_nResolved==0) && Pass_dPhiMETLowDM) || (!(Stop0l_Mtb<175 && Stop0l_nTop==0 && Stop0l_nW==0 && Stop0l_nResolved==0) && Pass_dPhiMETHighDM) ))");
   // tr1.Draw("MET_pt >> h1","35.922*1000*Stop0l_evtWeight*puWeight*BTagWeight*PrefireWeight*(Pass_MET && Pass_NJets20 && Stop0l_ISRJetPt>300 && Stop0l_Mtb < 175 && Stop0l_nTop==0 && Stop0l_nW==0 && Stop0l_nResolved==0 && Stop0l_METSig>10 && Stop0l_nbtags==0 && Stop0l_nSoftb==0 && Stop0l_ISRJetPt>500 && Stop0l_nJets>=2 && Stop0l_nJets<=5 && Pass_EventFilter && Pass_HT && Pass_JetID && Pass_CaloMETRatio  && Pass_trigger_MET && ( ((Stop0l_Mtb<175 && Stop0l_nTop==0 && Stop0l_nW==0 && Stop0l_nResolved==0) && Pass_dPhiMETLowDM) || (!(Stop0l_Mtb<175 && Stop0l_nTop==0 && Stop0l_nW==0 && Stop0l_nResolved==0) && Pass_dPhiMETHighDM) ))"); //smear-error-sr-int
    cout << "events: " << h1->Integral() << endl;  
double s=0;
  double ss=0;
  int BootStraps[50] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,3,3,3};
  int nBootStraps = 50;
  // // create a random number generator
  // gRandom = new TRandom3();

  // // create a histogram                                                                                                                                                         
 // TH1F * hist = new TH1F("data", ";x;N", 100, 0.0, 100.0);

  // // fill in the histogram                                                                                                                                                       
  // //for (int i = 0; i < 1000; i++){
  // // hist->Fill(gRandom->Poisson(1.0));
  // // }
  // double randomNo = 0.0;
  /*
  for(unsigned int iBS = 1; iBS < nBootStraps; iBS++){
    //randomNo = gRandom->Poisson(1.0);
    s += h1->GetBinContent(1)*BootStraps[iBS];
    ss += pow((h1->GetBinContent(1)*BootStraps[iBS]),2);//(h1->GetBinContent(1)*gRandom->Poisson(1.0));
    std::cout << "Bin content: "<<h1->GetBinContent(1) << "and random value: " <<BootStraps[iBS] << endl;
    
  }
  std::cout << "sum s: "<< s << std::endl;
  std::cout << "sum SS: "<< ss << std::endl;
  std::cout << "nBootstraps: "<< nBootStraps << std::endl;


  double newError= ss/nBootStraps + s*s/pow(nBootStraps,3) - 2*s*s/pow(nBootStraps,2);
  cout << "Error new:" << sqrt(newError) << endl;
    
  double stdDev = TMath::Sqrt(nBootStraps*ss - (s*s/nBootStraps))/nBootStraps;
  // h->SetBinError(iB,stdDev);
  std::cout << "bootstrap error: " << stdDev << std::endl;
  */


  //TFile *MyFile = new TFile("Event.root","RECREATE");
  //h1->Write();
  //hist->Write();

  // h1->SetTitle("trueResp with cut and weight ;response value;events");
  // h1->SetLineColor(kBlack);
  // h1->SetLineWidth(3);
  // //h2->Draw("same");
  // // h2->SetLineColor(kRed);
  // // h2->SetLineWidth(3);
  // c1->SaveAs("trueResp_smear_sf2_nano.png");//cutwt_nob.png");

}
