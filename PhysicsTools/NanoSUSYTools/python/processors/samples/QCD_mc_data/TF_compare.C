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

void TF_compare(TString table="TF_lm.txt"){

  gStyle->SetOptStat(111111);

  TH1D *h1 =new TH1D ("h1","",53,0.5,53.5);
  TH1D *h2 =new TH1D ("h2","",53,0.5,53.5);
  TH1D *h3 =new TH1D ("h3","",53,0.5,53.5);
  TH1D *h4 =new TH1D ("h4","",53,0.5,53.5);
  TH1D *h5 =new TH1D ("h5","",53,0.5,53.5);

  // TH2D *h3 =new TH2D ("h3","",10,0.5,10.5,10,0.5,10.5);
    string line;
    int bin;
    double run2,six,seven,eightN,eightD;
 
    ifstream fin(table.Data());
    if(fin.is_open()){
      while(fin.good()){
	getline(fin, line);
	if( line.find("#")!=string::npos ) continue;
	stringstream stream(line);
	stream >> bin >> run2 >> six >> seven >> eightN >> eightD;
	if( !fin.good() ) continue;
	h1->SetBinContent(bin,run2);
	h2->SetBinContent(bin,six);
	h3->SetBinContent(bin,seven);
	h4->SetBinContent(bin,eightN);
	h5->SetBinContent(bin,eightD);
      }
    }
    
    TCanvas *c =new TCanvas("c","",1000,600);
    c->cd();
    TPad *pad1 = new TPad("pad1", "pad1", 0, 0.3, 1,1.0);
    pad1->Draw();
    pad1->cd();
    pad1->SetTopMargin(0.2);
    pad1->SetBottomMargin(0); //upper and lower pad are joined                                                                
    pad1->SetLogy();                                         
    pad1->SetLeftMargin(0.08);
    pad1->SetRightMargin(0.05);
    h1->Draw("LP");
    h1->SetMarkerStyle(20);
    h2->SetMarkerStyle(20);
    h3->SetMarkerStyle(20);
    h4->SetMarkerStyle(20);
    h5->SetMarkerStyle(20);
    h1->SetMarkerColor(kBlack);
    //h1->SetLineWidth(3);
     h1->SetLineColor(kBlack);
     h2->SetLineColor(kRed);
     h3->SetLineColor(kBlue);
     h4->SetLineColor(kGreen);
     h5->SetLineColor(49);
    //h1->SetAxisRange(0,1,"y");    
    h2->Draw("LPsame");
    h3->Draw("LPsame");
    h4->Draw("LPsame");
    h5->Draw("LPsame");
    //h2->SetLineWidth(3);
    h2->SetMarkerColor(kRed);
    // h3->SetLineWidth(3);
    h3->SetMarkerColor(kBlue);
    //h4->SetLineWidth(3);
    h4->SetMarkerColor(kGreen);
    h5->SetMarkerColor(49);
    h1->GetYaxis()->SetTitle("TF ratio");
    //pad1->SetLogy();
    // TLine *line2 = new TLine(0.5,1,53.5,1);
    // line2->SetLineColor(kGreen);
    // line2->SetLineWidth(3);
    // line2->Draw("same");

    TLegend *leg = new TLegend(.6,.7,.8,.9,"");
    leg->SetFillColor(0);
    leg->AddEntry(h1,"run2","l");
    leg->AddEntry(h2,"2016","l");
    leg->AddEntry(h3,"2017","l");
    leg->AddEntry(h4,"2018 preHEM","l");
    leg->AddEntry(h5,"2018 postHEM","l");
    //leg->AddEntry(h4,"mc","l");
    leg->Draw();
    c->cd();
    TPad *pad2 = new TPad("pad2", "pad2", 0, 0.0,1, 0.3);
    //pad2->SetGrid();
    //pad2->SetTicks(2,2);                                                                                                                                                          
    pad2->SetTopMargin(0);
    pad2->SetBottomMargin(0.2);
    pad2->SetLeftMargin(0.08);
    pad2->SetRightMargin(0.05);
    pad2->Draw();
    pad2->cd();
    gStyle->SetOptStat(0);
    //pad2->SetTopMargin(0.1);                                                                                                                                                     
    // pad2->SetBottomMargin(0);                                                                                                                                              
    TH1D *hratio = (TH1D*)h1->Clone("hratio");
    //hratio->Sumw2();
    hratio->Divide(h2);
    TH1D *hratio1 = (TH1D*)h1->Clone("hratio1");
    hratio1->Divide(h3);
    TH1D *hratio2 = (TH1D*)h1->Clone("hratio2");
    hratio2->Divide(h4);
    TH1D *hratio3 = (TH1D*)h1->Clone("hratio3");
    hratio3->Divide(h5);
    hratio->SetTitle("");
    hratio->SetMarkerStyle(20);
    hratio->SetMarkerSize(1);
    hratio->GetXaxis()->SetTitle("bins[53]");
    hratio->GetYaxis()->SetTitle("");
    hratio->GetXaxis()->SetTitleFont(100);
    hratio->SetAxisRange(0.5,1.5,"y");
    hratio->GetYaxis()->SetLabelSize(0.1);
    hratio->GetXaxis()->SetLabelSize(0.1);
    hratio->GetXaxis()->SetLabelFont(42);
    hratio->GetYaxis()->SetLabelFont(42);
    hratio->Draw("P");
    hratio1->Draw("Psame");
    hratio2->Draw("Psame");
    hratio3->Draw("Psame");
    hratio->SetMarkerColor(kRed);
    hratio1->SetMarkerColor(kBlue);
    hratio2->SetMarkerColor(kGreen);
    hratio3->SetMarkerColor(49);
    TLine *line1 = new TLine(0.5,1,53.5,1);
    line1->SetLineColor(kCyan);
    line1->SetLineWidth(3);
    line1->Draw("same");
    c->SaveAs("transfer_factor.png");



}
