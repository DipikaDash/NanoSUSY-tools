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
void QCD_yields(){

  // TH1* data_CR = new TH1D("data_CR","",60,100,3000);
  // TH1* norm_samp=new TH1D("norm_samp","",60,100,3000);
  // TH1* qcd_norm = new TH1D("qcd_norm","",60,100,3000);
  // TH1* data_norm = new TH1D("data_norm","",60,100,3000);
  // TH1* znunu_CR= new TH1D("znunu_CR","",60,100,3000);
  // TH1* tw_CR= new  TH1D("tw_CR","",60,100,3000);
  // TH1* wjets_CR= new TH1D("wjets_CR","",60,100,3000);
  // TH1* ttw_CR= new TH1D("ttw_CR","",60,100,3000);
  // TH1* ttbar_CR= new TH1D("ttbar_CR","",60,100,3000);
  // TH1* ttz_CR= new TH1D("ttz_CR","",60,100,3000);


Tstring inputdir = "/eos/uscms/store/user/ddash/nanoAOD/ana_samples/" 
  TString samples[9]={inputdir+"data_2016_tree.root",inputdir+"qcd_orig_2016_tree.root",inputdir+"ttbar_2016_tree.root",inputdir+"wjet_2016_tree.root",inputdir+"znunu_2016_tree.root",inputdir+"minor_2016_tree.root",inputdir+"rare_2016_tree.root"};

  // TFile *file1 = new TFile("MC_data_CR.root", "RECREATE");


  for (Int_t j=0;j<2 ; j++){
    TFile *f1=new TFile(samples[j]);
    TTree *t1 =(TTree*)f1->Get("Events");

    UInt_t nJet;
    Int_t run;
    Float_t MET_phi,MET_pt,MET_sumEt,Stop0l_HT,Stop0l_evtWeight,puWeight,BTagWeight,ISRWeight,Stop0l_trigger_eff_MET_loose_baseline;

    Bool_t Pass_JetID,Pass_EventFilter,Pass_ElecVeto,Pass_MuonVeto,Pass_LeptonVeto,Pass_NJets20,Pass_MET,Pass_HT,Pass_QCDCR,Pass_QCDCR_lowDM,Pass_QCDCR_highDM,Jet_Stop0l;
    vector<unsigned char> *bootstrapWeight=0;
    Float_t Jet_dPhiMET[27]; Float_t Jet_phi[27]; Float_t Jet_pt[27]; Float_t Jet_eta[27];
    t1->SetBranchStatus("*",0);
    // t1->SetBranchStatus("Jet_jetID",1);
    t1->SetBranchStatus("nJet",1);
    t1->SetBranchStatus("Jet_pt",1);
    t1->SetBranchStatus("Jet_eta",1);
    t1->SetBranchStatus("Jet_phi",1);
    t1->SetBranchStatus("MET_pt",1);
    t1->SetBranchStatus("Stop0l_evtWeight",1);
    t1->SetBranchStatus("puWeight",1);
    t1->SetBranchStatus("BTagWeight",1);
    t1->SetBranchStatus("ISRWeight",1);
    t1->SetBranchStatus("Pass_JetID",1);
    t1->SetBranchStatus("Pass_EventFilter",1);
    t1->SetBranchStatus("Pass_LeptonVeto",1);
    t1->SetBranchStatus("Pass_NJets20",1);
    t1->SetBranchStatus("Pass_MET",1);
    t1->SetBranchStatus("Pass_HT",1);
    t1->SetBranchStatus("Pass_QCDCR",1);
    //  t1->SetBranchStatus("Jet_Stop0l",1);
    t1->SetBranchStatus("Stop0l_HT",1);                                                                                      
    t1->SetBranchStatus("Jet_dPhiMET",1);                                                                                  
    t1->SetBranchStatus("Stop0l_trigger_eff_MET_loose_baseline",1);                                                                                 
    //t1->SetBranchStatus("Jet_jetID",1);                                                                                                                                                                                           

    // t1->SetBranchAddress("Jet_jetID",&Jet_jetID);
    t1->SetBranchAddress("nJet",&nJet);
    t1->SetBranchAddress("Jet_eta",&Jet_eta);
    t1->SetBranchAddress("Jet_pt",&Jet_pt);
    t1->SetBranchAddress("Jet_phi",&Jet_phi);
    t1->SetBranchAddress("MET_pt",&MET_pt);
    t1->SetBranchAddress("Stop0l_evtWeight",&Stop0l_evtWeight);
    t1->SetBranchAddress("puWeight",&puWeight);
    t1->SetBranchAddress("BTagWeight",&BTagWeight);
    t1->SetBranchAddress("ISRWeight",&ISRWeight);
    t1->SetBranchAddress("Pass_JetID",&Pass_JetID);
    t1->SetBranchAddress("Pass_EventFilter",&Pass_EventFilter);
    t1->SetBranchAddress("Pass_LeptonVeto",&Pass_LeptonVeto);
    t1->SetBranchAddress("Pass_NJets20",&Pass_NJets20);
    t1->SetBranchAddress("Pass_MET",&Pass_MET);
    t1->SetBranchAddress("Pass_HT",&Pass_HT);
    t1->SetBranchAddress("Pass_QCDCR",&Pass_QCDCR);
    // t1->SetBranchAddress("Jet_Stop0l",&Jet_Stop0l);
    t1->SetBranchAddress("Stop0l_HT",&Stop0l_HT);
    t1->SetBranchAddress("Jet_dPhiMET",&Jet_dPhiMET);
    t1->SetBranchAddress("Stop0l_trigger_eff_MET_loose_baseline",&Stop0l_trigger_eff_MET_loose_baseline);




    const Double_t lumistr=38.867;

   Double_t a,b,c,d;
    Long_t nentries =(Long_t)t1->GetEntries();
   
    cout <<" no of entries of " << j<< ".root " << nentries << endl ;
    for(Int_t i=0; i < nentries; i++){
           t1->GetEntry(i);
	   
	   Double_t weightvar= lumistr* 1000 * Stop0l_trigger_eff_MET_loose_baseline * Stop0l_evtWeight * puWeight * BTagWeight * ISRWeight;
	   // Double_t qweightvar= lumistr * weight*truePUWeight*btagWeight*qcdRespTailWeight;

	   if( Pass_MET  && Pass_NJets20 && Pass_JetID  && Pass_EventFilter && Pass_HT && Pass_LeptonVeto && (Jet_dPhiMET[0] <0.1 || Jet_dPhiMET[1] <0.1 || Jet_dPhiMET[2] <0.1) )     
 {
   if(j==0) {ht_ori->Fill(MET_pt,weightvar);}
   if(j==1){ht_sme->Fill(MET_pt,weightvar);}

      }
   
    }
  }
    


  TCanvas *c1=new TCanvas("c1","comparison",600,600);                                                                                                
  c1->cd();                                                                                                                                            
  c1->SetLogy();                                                                                                                                    
  TPad *pad1 = new TPad("pad1", "pad1", 0, 0.3, 0.9,0.9);                                                                                          
  pad1->Draw();                                                                                                                                    
  pad1->cd();                                                                                                                                      
  pad1->SetBottomMargin(0.1);                                                                                                                     
  pad1->SetLogy();
  ht_ori->Draw("");
  ht_sme->Draw("same");
  ht_ori->SetLineWidth(3);
  ht_sme->SetLineWidth(3);
  ht_ori->SetLineColor(kBlack);
  ht_sme->SetLineColor(kRed);
  ht_ori->SetTitle("comparison of QCD original and smeared events;met;# events");
  ht_ori->GetYaxis()->SetRangeUser(0.1,100000000);
  ht_ori->Scale(1/ht_ori->Integral());
  ht_sme->Scale(1/ht_sme->Integral());
  TLegend *leg = new TLegend(.7,.7,.8,.9,"");                                                                                                      
  leg->SetFillColor(0);
  leg->AddEntry(ht_ori,"original","l");                                                                                                               
  leg->AddEntry(ht_sme,"smeared","l");    
  leg->Draw("same");                                                                                                                               
  //  gROOT->LoadMacro("tdrstyle.C");                                                                                                                  
  // setTDRStyle();                                                                                                                                   
 // gROOT->LoadMacro("CMS_lumi.C");                                                                                                               
 bool  writeExtraText = true;                                                                                                                          
  TString extraText  = "preliminary Simulation";                                                                                                     
TString lumi_sqrtS = "35.867.1 fb^{-1}(13 TeV)";                                                                                                   
  //  MS_lumi( c1,0,0 );                                                                                                                             
  c1->cd();                                                                                                                                        
 TPad *pad2 = new TPad("pad2", "pad2", 0, 0.15,0.9, 0.3);                                                                                         
  pad2->Draw();                                                                                                                                     
  pad2->cd();                                                                                                                                       
  pad2->SetTopMargin(0.1);                                                                                                                          
  pad2->SetBottomMargin(0);                                                                                                                        
  TH1D *hratio = (TH1D*)ht_ori->Clone("hratio");                                                                                                   
  hratio->Divide(ht_sme);                                                                                                                         
  hratio->SetMarkerStyle(20);                                                                                                                      
  hratio->SetMarkerSize(1);                                                                                                                       
  hratio->SetAxisRange(0,2,"y");                                                                                                                   
  hratio->Draw("E1same");                                                                                                                          
  hratio->GetYaxis()->SetLabelSize(0.2);                                                                                                           
  TLine *line = new TLine(0,1,6000,1);                                                                                                             
  line->SetLineColor(kRed);                                                                                                                       
  line->Draw("same");                        

}
