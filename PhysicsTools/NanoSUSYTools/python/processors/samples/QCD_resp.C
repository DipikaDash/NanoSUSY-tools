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
void QCD_resp(){
//int main(){
  const Int_t nbins1=6;
  Double_t xbins1[nbins1+1]={0,0.1,0.3,0.5,0.7,0.8,1.0};

  TH1* resp= new TH1D("resp","",nbins1,xbins1);
  TH1* resp1= new TH1D("resp1","",nbins1,xbins1);
  TH1* data= new TH1D("data","",nbins1,xbins1);
  TH1* nonQCD= new TH1D("nonQCD","",nbins1,xbins1);
  TH1* QCDL= new TH1D("QCDL","",nbins1,xbins1);
  TH1* QCDbs= new TH1D("QCDbs","",nbins1,xbins1);
  TH1* QCDbg= new TH1D("QCDbg","",nbins1,xbins1);

  TH2D* resp2 = new TH2D("resp2","",10,0,1,10,0,1);
  TH2D* resp3 = new TH2D("resp3","",10,0,1,10,0,1);
 
  //TString inputdir="/eos/uscms/store/user/lpcsusyhad/Stop_production/QCD_smearing/QCD_SF/2016/";
  TString inputdir="/eos/uscms/store/user/ddash/nanoAOD/ana_samplesv1/";
 TString samples[3]={inputdir+"data_2016_sf2_tree.root",inputdir+"qcd_smearw_2016_tree.root",inputdir+"ttbarplusw_2016_sf2_tree.root"};

 //TFile *f1 = new TFile(inputdir+"qcd_smear_2016_sf1_tree.root");
 for (Int_t j=0;j<3 ; j++){
   TFile *f1=new TFile(samples[j]);


    TTree *t1 =(TTree*)f1->Get("Events");
    //   cout << "root file name"<< line.c_str()<< endl;
    Float_t pseudoResp,pseudoRespCSV,trueResp,Stop0l_evtWeight,puWeight,BTagWeight,ISRWeight,qcdRespTailWeight;
   Int_t trueRespFlv;
   Bool_t Pass_QCDCR,pseudoRespPassFilter,Pass_CaloMETRatio;
    t1->SetBranchStatus("*",0);
    // t1->SetBranchStatus("Jet_jetID",1);
    t1->SetBranchStatus("pseudoResp",1);
    t1->SetBranchStatus("pseudoRespCSV",1);
    t1->SetBranchStatus("trueResp",1);
    t1->SetBranchStatus("trueRespFlv",1);
    t1->SetBranchStatus("pseudoRespPassFilter",1);
    t1->SetBranchStatus("Stop0l_evtWeight",1);
    t1->SetBranchStatus("puWeight",1);
    t1->SetBranchStatus("BTagWeight",1);
    t1->SetBranchStatus("ISRWeight",1);
    t1->SetBranchStatus("Pass_QCDCR",1);
    t1->SetBranchStatus("Pass_CaloMETRatio",1);
    t1->SetBranchStatus("qcdRespTailWeight",1);

    t1->SetBranchAddress("pseudoResp",&pseudoResp);
    t1->SetBranchAddress("pseudoRespCSV",&pseudoRespCSV);
    t1->SetBranchAddress("trueResp",&trueResp);
    t1->SetBranchAddress("trueRespFlv",&trueRespFlv);
    t1->SetBranchAddress("pseudoRespPassFilter",&pseudoRespPassFilter);
    t1->SetBranchAddress("Stop0l_evtWeight",&Stop0l_evtWeight);
    t1->SetBranchAddress("puWeight",&puWeight);
    t1->SetBranchAddress("BTagWeight",&BTagWeight);
    t1->SetBranchAddress("ISRWeight",&ISRWeight);
    t1->SetBranchAddress("Pass_QCDCR",&Pass_QCDCR);
    t1->SetBranchAddress("Pass_CaloMETRatio",&Pass_CaloMETRatio);
    t1->SetBranchAddress("qcdRespTailWeight",&qcdRespTailWeight);

    const Double_t lumistr=38.867;
    double count=0;
   Double_t a,b,c,d;
    Long_t nentries =(Long_t)t1->GetEntries();

    for(Long_t i=0; i < nentries; i++){
           t1->GetEntry(i);
	   double wgtvar = 35.9*1000*Stop0l_evtWeight*puWeight*BTagWeight;

	   double wgtvarq = 35.9*1000*Stop0l_evtWeight*puWeight*BTagWeight*qcdRespTailWeight;
    if(Pass_QCDCR && pseudoRespPassFilter==1 && Pass_CaloMETRatio){
      if((j==0 || j==2) && pseudoRespCSV >=0.6){data->Fill(pseudoResp);nonQCD->Fill(pseudoResp,wgtvar);}
      if(j==1){   
      if (pseudoRespCSV >=0.6 && abs(trueRespFlv) !=5){
	QCDL->Fill(pseudoResp,wgtvar);}
	   if (pseudoRespCSV >=0.6324  && abs(trueRespFlv) == 5 && trueResp <0.5){
             QCDbs->Fill(pseudoResp,wgtvarq);}
	   if (pseudoRespCSV >=0.6324  && abs(trueRespFlv) == 5 && trueResp >0.5){
             QCDbg->Fill(pseudoResp,wgtvarq);}}
	   //	   resp2->Fill(pseudoRespCSV,pseudoResp);
	   //  resp3->Fill(pseudoRespCSV,trueResp);
    }
    }
 }
    // TCanvas *c1= new TCanvas("c1","c1",800,800);
    // c1->cd();
    // resp->Draw();
    // resp->SetLineColor(kRed);
    // resp->SetLineWidth(3);
    // resp->SetTitle("pseudoresp value (pseudoRespCSV >=0.494 && trueResp <0.5 && abs(trueRespFlv) == 5);pseudoResp;events");

    // TCanvas *c2= new TCanvas("c2","c2",800,800);
    // c2->cd();
    // resp1->Draw();
    // resp1->SetLineColor(kRed);
    // resp1->SetLineWidth(3);
    // resp1->SetTitle("pseudoresp value (pseudoRespCSV >=0.494 && pseudoResp <0.5 && abs(trueRespFlv) == 5);trueResp;events");

    // TCanvas *c3= new TCanvas("c3","c3",800,800);
    // c3->cd();
    // resp2->Draw("colz");
    // resp2->SetTitle("psedoRespCSV vs pseudoResp;pseudoRespCSV;pseudoResp");
    // resp2->SetStats(kFALSE);

    // TCanvas *c4= new TCanvas("c4","c4",800,800);
    // c4->cd();
    // resp3->Draw("colz");
    // resp3->SetTitle("psedoRespCSV vs trueResp;pseudoRespCSV;trueResp");
    // resp3->SetStats(kFALSE);

 TCanvas *c1=new TCanvas("c1","comparison",600,600);                                                                                                                                
 c1->cd();                                                                                                                                                                          
 //c1->SetLogy();                                                                                                                                                                     
 THStack *stack=new THStack("stack","stackplots");                                                                                                                                  
 TPad *pad1 = new TPad("pad1", "pad1", 0, 0.3, 0.9,0.9);                                                                                                                          
 pad1->Draw();                                                                                                                                                                      
 pad1->cd();                                                                                                                                                                        
 pad1->SetBottomMargin(0.1);                                                                                                                                                        
 // pad1->SetLogy();                                                                                                                                                                   
 //     stack->GetYaxis()->SetMaximum( 100000);                                                                                                                                     
 data->SetAxisRange(0,20000,"y");                                                                                                                                            
 stack->Add(nonQCD);                                                                                                                                                              
 stack->Add(QCDL);                                                                                                                                                              
 stack->Add(QCDbs);                                                                                                                                                              
 stack->Add(QCDbg);                                                                                                                                                              
 nonQCD->SetFillColor(38);                                                                                                                                                        
 QCDL->SetFillColor(kMagenta);                                                                                                                                                  
 QCDbs->SetFillColor(kCyan);                                                                                                                                                     
 QCDbg->SetFillColor(30);                                                                                                                                                          
 TH1D* all_MC=(TH1D*)nonQCD->Clone("all_MC");                                                                                                                                     
 all_MC->Add(QCDL);                                                                                                                                                               
 all_MC->Add(QCDbs);                                                                                                                                                             
 all_MC->Add(QCDbg);
 // double all_MCevents,data_events;                                                                                                                                                 
 //all_MCevents=all_MC->Integral();
 //double x;                                                                                                                                                  
 //x=all_MCevents/data_events;                                                                                                                                                       
 //data->Scale(x);                                                                                                                                                                 
 data->Draw("HIST");
 stack->Draw("HISTsame");                                                                                                                                                            
//data->Draw("E1same");                                                                                                                                                           
 data->SetMarkerColor(kBlack);                                                                                                                                                   
 data->SetMarkerStyle(20);                                                                                                                                                       
 data->SetMarkerSize(1);                                                                                                                                                         
 data->SetTitle("stack plot of pseudo resp;pseudoresp;no of events");                                                                                                              
 TLegend *leg = new TLegend(.7,.7,.85,.95,"");                                                                                                                                           
 leg->SetFillColor(0);                                                                                                                                                                 
 leg->AddEntry(nonQCD,"nonQCD","f");                                                                                                                                                   
 leg->AddEntry(QCDL,"Light QCD","f");   
 leg->AddEntry(QCDbs,"b QCD resp <0.5","f");
 leg->AddEntry(QCDbg,"b QCD resp >0.5","f");
 leg->Draw();
 c1->cd();                                                                                                                                                                             
 TPad *pad2 = new TPad("pad2", "pad2", 0, 0.15,0.9, 0.3);                                                                                   
 pad2->Draw();                                                                                                            
 pad2->cd();                                                                                    
 pad2->SetTopMargin(0.1);                                                                                                                      
 pad2->SetBottomMargin(0);                                                                                                       
 TH1D *hratio = (TH1D*)data->Clone("hratio");
hratio->Divide(all_MC);                                                                                                                              
hratio->SetMarkerStyle(20);                                                                                                                           
hratio->SetMarkerSize(1);                                                                                                                            
hratio->SetAxisRange(0,2,"y");                                                                                                                       
hratio->Draw("E1same");                                                                                                                                hratio->GetYaxis()->SetLabelSize(0.07);                                                                                                              
TLine *line = new TLine(0,1,1,1);                                                                                                                    
line->SetLineColor(kRed);                                                                                                                            
line->Draw("same");                    
} 

