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
void test_nano(){
//int main(){
  TH1* hist= new TH1D("hist","",20,0,20);
   TString inputdir="/eos/uscms/store/user/ddash/nanoAOD/ana_samplesv1/";
  //TString samples[2]={inputdir+"qcd_orig_2018_tree.root",inputdir+"qcd_smear_2018_tree.root"};

   TFile *f1 = new TFile(inputdir+"ttbar_2016_tree.root");


  //  for (Int_t j=0;j<2 ; j++){
  //  TFile *f1=new TFile(samples[j]);
  // ifstream ifile("../Data_MET_2018_PeriodB_PostHEM.txt",std::ifstream::in);
  //string line;
  //std::getline(ifile,line);
  //while (std::getline(ifile,line)){
  // TFile *f1 = new TFile(line.c_str());                                                                                                                   
    TTree *t1 =(TTree*)f1->Get("Events");
    // cout << "root file name"<< line.c_str()<< endl;
    ULong64_t       event;
    UInt_t nJet,run;
    Int_t njet_j30;
    Float_t MET_phi,MET_pt,MET_sumEt,Stop0l_HT,PrefireWeight,Stop0l_evtWeight,puWeight,BTagWeight,ISRWeight,Stop0l_trigger_eff_MET_loose_baseline,ht_30;

    Bool_t Pass_JetID,Pass_CaloMETRatio,Pass_trigger_MET,Pass_EventFilter,Pass_ElecVeto,Pass_MuonVeto,Pass_LeptonVeto,Pass_NJets20,Pass_MET,Pass_HT,Pass_QCDCR,Pass_QCDCR_lowDM,Pass_QCDCR_highDM,Jet_Stop0l,Pass_exHEMVeto30,Pass_deltaPhi0p3;
    vector<unsigned char> *bootstrapWeight=0;
    Float_t Jet_dPhiMET[27]; Float_t Jet_phi[27]; Float_t Jet_pt[27]; Float_t Jet_eta[27];
    t1->SetBranchStatus("*",0);
    // t1->SetBranchStatus("Jet_jetID",1);
    t1->SetBranchStatus("run",1);
    t1->SetBranchStatus("event",1);
    t1->SetBranchStatus("njet_j30",1);
    t1->SetBranchStatus("nJet",1);
    // t1->SetBranchStatus("Jet_pt",1);
    // t1->SetBranchStatus("Jet_eta",1);
    // t1->SetBranchStatus("Jet_phi",1);
    // t1->SetBranchStatus("MET_pt",1);
    t1->SetBranchStatus("ht_30",1);
    t1->SetBranchStatus("Stop0l_evtWeight",1);
    t1->SetBranchStatus("puWeight",1);
    t1->SetBranchStatus("BTagWeight",1);
    t1->SetBranchStatus("ISRWeight",1);
    t1->SetBranchStatus("PrefireWeight",1);
    t1->SetBranchStatus("Pass_JetID",1);
    t1->SetBranchStatus("Pass_EventFilter",1);
    t1->SetBranchStatus("Pass_LeptonVeto",1);
    t1->SetBranchStatus("Pass_NJets20",1);
    t1->SetBranchStatus("Pass_MET",1);
    t1->SetBranchStatus("Pass_HT",1);
     t1->SetBranchStatus("Pass_QCDCR",1);
     t1->SetBranchStatus("Pass_QCDCR_lowDM",1);
     t1->SetBranchStatus("Pass_CaloMETRatio",1);
     t1->SetBranchStatus("Pass_trigger_MET",1);
    // t1->SetBranchStatus("Jet_Stop0l",1);
    // t1->SetBranchStatus("Stop0l_HT",1);                                                                                      
    // t1->SetBranchStatus("Jet_dPhiMET",1);                                                                                  
    //t1->SetBranchStatus("Jet_jetID",1);
     t1->SetBranchStatus("Pass_exHEMVeto30",1);
     t1->SetBranchStatus("Pass_deltaPhi0p3",1);
                                                                                                      
    // t1->SetBranchAddress("Jet_jetID",&Jet_jetID);
    t1->SetBranchAddress("nJet",&nJet);
    t1->SetBranchAddress("run",&run);
    t1->SetBranchAddress("event",&event);
    t1->SetBranchAddress("njet_j30",&njet_j30);
    t1->SetBranchAddress("ht_30",&ht_30);
    // t1->SetBranchAddress("Jet_eta",&Jet_eta);
    // t1->SetBranchAddress("Jet_pt",&Jet_pt);
    // t1->SetBranchAddress("Jet_phi",&Jet_phi);
    // t1->SetBranchAddress("MET_pt",&MET_pt);
   t1->SetBranchAddress("Stop0l_evtWeight",&Stop0l_evtWeight);
    t1->SetBranchAddress("puWeight",&puWeight);
    t1->SetBranchAddress("BTagWeight",&BTagWeight);
    t1->SetBranchAddress("ISRWeight",&ISRWeight);
    t1->SetBranchAddress("PrefireWeight",&PrefireWeight);
    
    t1->SetBranchAddress("Pass_JetID",&Pass_JetID);
    t1->SetBranchAddress("Pass_EventFilter",&Pass_EventFilter);
    t1->SetBranchAddress("Pass_LeptonVeto",&Pass_LeptonVeto);
    t1->SetBranchAddress("Pass_NJets20",&Pass_NJets20);
    t1->SetBranchAddress("Pass_MET",&Pass_MET);
    t1->SetBranchAddress("Pass_HT",&Pass_HT);
     t1->SetBranchAddress("Pass_QCDCR",&Pass_QCDCR);
    // t1->SetBranchAddress("Jet_Stop0l",&Jet_Stop0l);
    // t1->SetBranchAddress("Stop0l_HT",&Stop0l_HT);
    // t1->SetBranchAddress("Jet_dPhiMET",&Jet_dPhiMET);
     t1->SetBranchAddress("Pass_CaloMETRatio",&Pass_CaloMETRatio);
     t1->SetBranchAddress("Pass_trigger_MET",&Pass_trigger_MET);
     t1->SetBranchAddress("Pass_QCDCR_lowDM",&Pass_QCDCR_lowDM);
     t1->SetBranchAddress("Pass_exHEMVeto30",&Pass_exHEMVeto30);
     t1->SetBranchAddress("Pass_deltaPhi0p3",&Pass_deltaPhi0p3);



    const Double_t lumistr=35.9;
    double count=0;
   Double_t a,b,c,d;
    Long_t nentries =(Long_t)t1->GetEntries();

    for(Long_t i=0; i < nentries; i++){
           t1->GetEntry(i);

	   Double_t weightvar= lumistr* 1000 * Stop0l_evtWeight * puWeight * BTagWeight*PrefireWeight*ISRWeight;
	   if(Pass_MET && Pass_EventFilter && Pass_NJets20 && Pass_HT && Pass_JetID && Pass_CaloMETRatio &&  Pass_deltaPhi0p3  && Pass_trigger_MET && Pass_LeptonVeto){
	   // if((Pass_QCDCR && Pass_CaloMETRatio && Pass_trigger_MET )){// && Pass_exHEMVeto30){
	   // if ((run == 317087 && event==417947154) || (run ==317182 && event==355521895) || (run==317435 && event==1209847457) || (run==317527 && event==2083821519) ||(run==317649 && event==777811869) || (run==317650 && event==692192416)){
	      //cout << "1"<< endl;
	     hist->Fill(nJet,weightvar);
	     //cout << "run : " << run << "  event:  " << event << "  weight: "<< 35.9*1000*Stop0l_evtWeight*puWeight*BTagWeight*PrefireWeight  << endl;
	      //  ISRWeightcout << "root file name"<< line.c_str()<< endl;    
count++;
	    }
   
    }
    cout << "total events are: "<< hist->Integral() << endl;
}

