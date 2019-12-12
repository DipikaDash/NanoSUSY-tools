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
void tree_validation_17_18(){


  TH1D *qcd_pred =new TH1D("qcd_pred","",19,0,19);

  TFile *output = new TFile("LowMET_LM_17BE/sig30/std_pred_trad.root", "update");
  float values[19]={982.04,45.28,21.42,4.61,120.37,53.05,16.91,32.15,3.81,0.0,4.10,0.0,0.80,0.14,0.38,35.26,1.86,0.53,0.00};
  float errors[19]={17.69,4.77,2.17,1.83,10.43,5.82,2.24,5.11,1.05,0.0,0.95,0.0,0.41,0.05,0.25,1.37,0.58,0.07,0.0};
  output->Delete("qcd_pred;1");
  for (int i=1;i < 20 ;i++){
    qcd_pred->SetBinContent(i,values[i-1]);
    qcd_pred->SetBinError(i,errors[i-1]);

  }
  qcd_pred->SetMarkerStyle(20);
  qcd_pred->SetMarkerColor(kGreen);
  qcd_pred->Write();
  output->Close();
}

 
