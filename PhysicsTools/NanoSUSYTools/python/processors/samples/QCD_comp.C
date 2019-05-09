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
void stack_CR(){



  //  const Int_t bins=22;
  // Double_t edges[bins+1]={200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,2000,2200,2400,2600,2800,3000}; 

  TH1* qcd_CR = new TH1D("qcd_CR","",60,100,3000);
  TH1* nonqcd_CR = new TH1D("nonqcd_CR","",60,100,3000);
  TH1* data_CR = new TH1D("data_CR","",60,100,3000);
  TH1* norm_samp=new TH1D("norm_samp","",60,100,3000);
  TH1* qcd_norm = new TH1D("qcd_norm","",60,100,3000);
  TH1* data_norm = new TH1D("data_norm","",60,100,3000);
  TH1* znunu_CR= new TH1D("znunu_CR","",60,100,3000);
  TH1* tw_CR= new  TH1D("tw_CR","",60,100,3000);
  TH1* wjets_CR= new TH1D("wjets_CR","",60,100,3000);
  TH1* ttw_CR= new TH1D("ttw_CR","",60,100,3000);
  TH1* ttbar_CR= new TH1D("ttbar_CR","",60,100,3000);
  TH1* ttz_CR= new TH1D("ttz_CR","",60,100,3000);
 

 
  //  TH1* qcd_corr = new TH1D("qcd_data","",100,200,1500); 
 
  // TH1* qcd_CR = new TH1D("qcd_CR","",12,0,12);
  // TH1* nonqcd_CR = new TH1D("nonqcd_CR","",12,0,12);
  // TH1* data_CR = new TH1D("data_CR","",12,0,12);
  // TH1* norm_samp=new TH1D("norm_samp","",12,0,12);
  // TH1* qcd_norm = new TH1D("qcd_norm","",12,0,12);
  // TH1* data_norm = new TH1D("data_norm","",12,0,12);
  // TH1* znunu_CR= new TH1D("znunu_CR","",12,0,12);
  // TH1* tw_CR= new  TH1D("tw_CR","",12,0,12);                                                                                                                                                         
  // TH1* wjets_CR= new TH1D("wjets_CR","",12,0,12);                                                                                                                                                    
  // TH1* ttw_CR= new TH1D("ttw_CR","",12,0,12);                                                                                                                                                        
  // TH1* ttbar_CR= new TH1D("ttbar_CR","",12,0,12);                                                                                                                                                    
  // TH1* ttz_CR= new TH1D("ttz_CR","",12,0,12);        
 

  //  TString samples[5]={"qcdsmall_tree.root","nonQCD_tree.root","met_tree.root","noznzn_nonqcd_tree.root","znunu_tree.root"};
  TString samples[9]={"qcdsmall_tree.root","met_tree.root","ttbar_tree.root","tW_tree.root","ttW_tree.root","wjets_tree.root","znunu_tree.root","ttZ_tree.root","nonQCD_tree.root"};

  // TFile *file1 = new TFile("MC_data_CR.root", "RECREATE");


  for (Int_t j=0;j<9 ; j++){
    TFile *f1=new TFile(samples[j]);
    TTree *t1 =(TTree*)f1->Get("Events");
   

    UInt_t    run,lumi,event,process;
    Float_t weight,truePUWeight,PUScale2017,btagWeight,qcdRespTailWeight,topptWeight,lepvetoweightLM,lepselweightLM,lepvetoweightHM,lepselweightHM,leptnpweightLM,leptnpweightHM,isrWeight,sdMVAWeight,resTopWeight, ht,mht,dphij1met,dphij2met,dphij3met,dphij4met,origmet,calomet,genmet,j1chEnFrac, met,csvj1pt,csvj2pt,ak8isrpt,dphiisrmet,metovsqrtht,mtlepmet;
    Int_t npv,nivf,nvetolep,nvetotau,nsdtop, nsdw,nrestop,njets,nbjets,npromptgentau;
    Bool_t passjson,passmetmht,passmetfilters,passmetfilters2017,ismc;
    vector<unsigned char> *bootstrapWeight=0;

    t1->SetBranchStatus("*",0);
    t1->SetBranchStatus("weight",1);
    t1->SetBranchStatus("truePUWeight",1);
    t1->SetBranchStatus("btagWeight",1);
    t1->SetBranchStatus("qcdRespTailWeight",1);
    t1->SetBranchStatus("PUScale2017",1);
    t1->SetBranchStatus("topptWeight",1);
    t1->SetBranchStatus("lepvetoweightLM",1);
    t1->SetBranchStatus("lepselweightLM",1);
    t1->SetBranchStatus("leptnpweightLM",1);
    t1->SetBranchStatus("lepvetoweightHM",1);
    t1->SetBranchStatus("lepselweightHM",1);
    t1->SetBranchStatus("leptnpweightHM",1);
    t1->SetBranchStatus("isrWeight",1);
    t1->SetBranchStatus("sdMVAWeight",1);
    t1->SetBranchStatus("resTopWeight",1);
    t1->SetBranchStatus("ht",1);
    t1->SetBranchStatus("mht",1);
    t1->SetBranchStatus("dphij1met",1);
    t1->SetBranchStatus("dphij2met",1);
    t1->SetBranchStatus("dphij3met",1);
    t1->SetBranchStatus("origmet",1);
    t1->SetBranchStatus("calomet",1);
    t1->SetBranchStatus("j1chEnFrac",1);
    t1->SetBranchStatus("met",1);
    t1->SetBranchStatus("csvj1pt",1);
    t1->SetBranchStatus("ak8isrpt",1);
    t1->SetBranchStatus("npv",1);
    t1->SetBranchStatus("nvetolep",1);
    t1->SetBranchStatus("nvetotau",1);
    t1->SetBranchStatus("nsdtop",1);
    t1->SetBranchStatus("nsdw",1);
    t1->SetBranchStatus("nrestop",1);
    t1->SetBranchStatus("njets",1);
    t1->SetBranchStatus("nbjets",1);
    t1->SetBranchStatus("passjson",1);
    t1->SetBranchStatus("passmetmht",1);
    t1->SetBranchStatus("passmetfilters",1);
    t1->SetBranchStatus("passmetfilters2017",1);
    t1->SetBranchStatus("ismc",1);
    t1->SetBranchStatus("bootstrapWeight",1);
    t1->SetBranchStatus("lumi",1);
    t1->SetBranchStatus("event",1);
    t1->SetBranchStatus("dphiisrmet",1);
    t1->SetBranchStatus("metovsqrtht",1);
    t1->SetBranchStatus("nivf",1);
    t1->SetBranchStatus("npromptgentau",1);
    t1->SetBranchStatus("mtlepmet",1);

    t1->SetBranchAddress("weight",&weight);
    t1->SetBranchAddress("truePUWeight",&truePUWeight);
    t1->SetBranchAddress("PUScale2017",&PUScale2017);
    t1->SetBranchAddress("btagWeight",&btagWeight);
    t1->SetBranchAddress("qcdRespTailWeight",&qcdRespTailWeight);
    t1->SetBranchAddress("topptWeight",&topptWeight);
    t1->SetBranchAddress("lepvetoweightLM",&lepvetoweightLM);
    t1->SetBranchAddress("lepselweightLM",&lepselweightLM);
    t1->SetBranchAddress("lepvetoweightHM",&lepvetoweightHM);
    t1->SetBranchAddress("lepselweightHM",&lepselweightHM);
    t1->SetBranchAddress("leptnpweightLM",&leptnpweightLM);
    t1->SetBranchAddress("leptnpweightHM",&leptnpweightHM);
    t1->SetBranchAddress("isrWeight",&isrWeight);
    t1->SetBranchAddress("sdMVAWeight",&sdMVAWeight);
    t1->SetBranchAddress("resTopWeight",&resTopWeight);
    t1->SetBranchAddress("ht",&ht);
    t1->SetBranchAddress("mht",&mht);
    t1->SetBranchAddress("dphij1met",&dphij1met);
    t1->SetBranchAddress("dphij2met",&dphij2met);
    t1->SetBranchAddress("dphij3met",&dphij3met);
    t1->SetBranchAddress("origmet",&origmet);
    t1->SetBranchAddress("calomet",&calomet);
    t1->SetBranchAddress("j1chEnFrac",&j1chEnFrac);
    t1->SetBranchAddress("met",&met);
    t1->SetBranchAddress("csvj1pt",&csvj1pt);
    t1->SetBranchAddress("ak8isrpt",&ak8isrpt);
    t1->SetBranchAddress("npv",&npv);
    t1->SetBranchAddress("nvetolep",&nvetolep);
    t1->SetBranchAddress("nvetotau",&nvetotau);
    t1->SetBranchAddress("nsdtop",&nsdtop);
    t1->SetBranchAddress("nsdw",&nsdw);
    t1->SetBranchAddress("nrestop",&nrestop);
    t1->SetBranchAddress("njets",&njets);
    t1->SetBranchAddress("nbjets",&nbjets);
    t1->SetBranchAddress("passjson",&passjson);
    t1->SetBranchAddress("passmetmht",&passmetmht);
    t1->SetBranchAddress("passmetfilters",&passmetfilters);
    t1->SetBranchAddress("passmetfilters2017",&passmetfilters2017);
    t1->SetBranchAddress("ismc",&ismc);
    t1->SetBranchAddress("bootstrapWeight",&bootstrapWeight);
    t1->SetBranchAddress("lumi",&lumi);
    t1->SetBranchAddress("event",&event);
    t1->SetBranchAddress("dphiisrmet",&dphiisrmet);
    t1->SetBranchAddress("metovsqrtht",&metovsqrtht);
    t1->SetBranchAddress("nivf",&nivf);
    t1->SetBranchAddress("npromptgentau",&npromptgentau);
    t1->SetBranchAddress("mtlepmet",&mtlepmet);




    const Double_t lumistr=38.867;

   Double_t a,b,c,d;
    Int_t nentries =(Int_t)t1->GetEntries();
   
    cout <<" no of entries of " << j<< ".root " << nentries << endl ;
    for(Int_t i=0; i < nentries; i++){
           t1->GetEntry(i);
	   
	   //	   if(njets<5 || nbjets<1){  a=leptnpweightLM*lepvetoweightLM;  b=leptnpweightLM;}
	   //  if(njets>=5 && nbjets>=2){  c=leptnpweightHM*lepvetoweightHM; d=leptnpweightHM;}


	   Double_t weightvar= lumistr * weight*truePUWeight*btagWeight;
	   Double_t qweightvar= lumistr * weight*truePUWeight*btagWeight*qcdRespTailWeight;

	   Double_t selvar=lumistr * weight *truePUWeight*btagWeight;  //*topptWeight*sdMVAWeight*resTopWeight*(leptnpweightLM*(njets<5 || nbjets<1) + leptnpweightHM*(njets>=5 && nbjets>=1));
	   Double_t qselvar=lumistr * weight *truePUWeight*btagWeight*qcdRespTailWeight;  //*topptWeight*sdMVAWeight*resTopWeight*qcdRespTailWeight*(leptnpweightLM*(njets<5 || nbjets<1) + leptnpweightHM*(njets>=5 && nbjets>=1));

	   //    if(met>250 && njets>=2 &&  (passmetfilters || process==10) && j1chEnFrac>0.1 && j1chEnFrac<0.99 &&  (origmet/calomet<5)  && (passmetmht || ismc) && ( (dphij1met < .1) || (dphij2met < .1) || (dphij3met < .1) ) && nvetolep==0 && (nvetotau==0 || (ismc && npromptgentau>0)) )
	   if(met>250 && njets >= 2 && ht > 200 && (passmetfilters || process==10) && j1chEnFrac>0.1 && j1chEnFrac<0.99 &&  (origmet/calomet<5)  && (passmetmht || ismc) &&  ( (dphij1met < .1) || (dphij2met < .1)|| (dphij3met < .1))  )     
 {

        if(j==0) { qcd_CR->Fill(ht,qweightvar);}
	if(j==1){data_CR->Fill(ht,1);}
	if(j==2){ttbar_CR->Fill(ht,weightvar);}
        if(j==3){tw_CR->Fill(ht,weightvar);}
	if(j==4){ttw_CR->Fill(ht,weightvar);}
	if(j==5){wjets_CR->Fill(ht,weightvar);}
	if(j==6){znunu_CR->Fill(ht,weightvar);}
	if(j==7){ttz_CR->Fill(ht,weightvar);}
	if(j==8){nonqcd_CR->Fill(ht,weightvar);}
      }
        
    // if(met>250 && njets>=2 &&  (passmetfilters || process==10) && j1chEnFrac>0.1 && j1chEnFrac<0.99 &&  (origmet/calomet<5) && (passmetmht || ismc) && dphij1met>0.5 && dphij2met>0.15 && dphij3met>0.15 && nvetolep>0 && mtlepmet<100)
    //   {
    // 	if(j==0  && (!(lumi==40062 && event==91000735))){qcd_norm->Fill(ht,qselvar);}
    // 	if(j==2){data_norm->Fill(ht,1);}
    // 	if(j==3) {norm_samp->Fill(ht,selvar);}
    //   }

    }
  }
    
  /*
  
CONTROL REGION  TH1D* normtotal_samp=(TH1D*)norm_samp->Clone("normtotal_samp");
  normtotal_samp->Add(qcd_norm); 

   TH1D* normfac=(TH1D*)data_norm->Clone("normfac");
   normfac->Divide(normtotal_samp);  

   TH1D* norm_corrsamp=(TH1D*)nonqcd_CR->Clone("norm_corrsamp");
   norm_corrsamp->Multiply(normfac);

   TH1D* nonqcd_total = (TH1D*)norm_corrsamp->Clone("nonqcd_total");                                                                                                     nonqcd_total->Add(znunu_CR);                      
   
   TH1D* qcd_corr =(TH1D*)qcd_norm->Clone("qcd_corr");
   qcd_corr->Multiply(normfac);
SetLabelSize(textsize);

     TH1D* frac1=(TH1D*)nonqcd_total->Clone("frac1");
     frac1->Divide(data_CR);



     TH1D* corrfac=new TH1D("corrfac","",1000,200,3000);
    Int_t bin= frac1->GetNbinsX(); 
    for(Int_t k=0;k<bin ; k++){ 
      corrfac->SetBinContent(k,(1-(frac1->GetBinContent(k))));   
 
 }
   TH1D* qcd_data=(TH1D*)data_CR->Clone("qcd_data");
     qcd_data->Multiply(corrfac);

*/   
     //  file1->Write(); 


   
}
