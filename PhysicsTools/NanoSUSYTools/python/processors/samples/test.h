//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Apr 30 23:16:55 2019 by ROOT version 6.12/07
// from TTree Events/Events
// found on file: /eos/uscms/store/user/ddash/nanoAOD/ana_samples/qcd_orig_2016_tree.root
//////////////////////////////////////////////////////////

#ifndef test_h
#define test_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class test {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   UInt_t          run;
   UInt_t          luminosityBlock;
   ULong64_t       event;
   Float_t         btagWeight_CSVV2;
   Float_t         btagWeight_CMVA;
   Float_t         CaloMET_phi;
   Float_t         CaloMET_pt;
   Float_t         CaloMET_sumEt;
   Float_t         genWeight;
   UInt_t          nPSWeight;
   Float_t         PSWeight[1];   //[nPSWeight]
   UInt_t          nJet;
   Float_t         Jet_CvsB[27];   //[nJet]
   Float_t         Jet_CvsL[27];   //[nJet]
   Float_t         Jet_area[27];   //[nJet]
   Float_t         Jet_btagCSVV2[27];   //[nJet]
   Float_t         Jet_btagDeepB[27];   //[nJet]
   Float_t         Jet_btagDeepC[27];   //[nJet]
   Float_t         Jet_btagDeepFlavB[27];   //[nJet]
   Float_t         Jet_chEmEF[27];   //[nJet]
   Float_t         Jet_chHEF[27];   //[nJet]
   Float_t         Jet_chHadMult[27];   //[nJet]
   Float_t         Jet_elEF[27];   //[nJet]
   Float_t         Jet_elMult[27];   //[nJet]
   Float_t         Jet_eta[27];   //[nJet]
   Float_t         Jet_hfEMEF[27];   //[nJet]
   Float_t         Jet_hfHadEF[27];   //[nJet]
   Float_t         Jet_mass[27];   //[nJet]
   Float_t         Jet_muEF[27];   //[nJet]
   Float_t         Jet_muMult[27];   //[nJet]
   Float_t         Jet_neEmEF[27];   //[nJet]
   Float_t         Jet_neHEF[27];   //[nJet]
   Float_t         Jet_neHadMult[27];   //[nJet]
   Float_t         Jet_phEF[27];   //[nJet]
   Float_t         Jet_phMult[27];   //[nJet]
   Float_t         Jet_phi[27];   //[nJet]
   Float_t         Jet_pt[27];   //[nJet]
   Float_t         Jet_qgAxis1[27];   //[nJet]
   Float_t         Jet_qgAxis2[27];   //[nJet]
   Float_t         Jet_qgl[27];   //[nJet]
   Float_t         Jet_qgptD[27];   //[nJet]
   Float_t         Jet_rawFactor[27];   //[nJet]
   Float_t         Jet_bRegCorr[27];   //[nJet]
   Float_t         Jet_bRegRes[27];   //[nJet]
   Int_t           Jet_jetId[27];   //[nJet]
   Int_t           Jet_nConstituents[27];   //[nJet]
   Int_t           Jet_nElectrons[27];   //[nJet]
   Int_t           Jet_nMuons[27];   //[nJet]
   Int_t           Jet_puId[27];   //[nJet]
   Int_t           Jet_qgMult[27];   //[nJet]
   Float_t         MET_MetUnclustEnUpDeltaX;
   Float_t         MET_MetUnclustEnUpDeltaY;
   Float_t         MET_phi;
   Float_t         MET_pt;
   Float_t         MET_sumEt;
   Int_t           genTtbarId;
   Int_t           Jet_genJetIdx[27];   //[nJet]
   Int_t           Jet_hadronFlavour[27];   //[nJet]
   Int_t           Jet_partonFlavour[27];   //[nJet]
   Float_t         MET_fiducialGenPhi;
   Float_t         MET_fiducialGenPt;
   UChar_t         Jet_cleanmask[27];   //[nJet]
   Bool_t          L1simulation_step;
   Float_t         Jet_corr_JEC[27];   //[nJet]
   Float_t         Jet_corr_JER[27];   //[nJet]
   Int_t           Stop0l_nSoftb;
   Float_t         Jet_dPhiMET[27];   //[nJet]
   Float_t         Stop0l_Mtb;
   Float_t         Stop0l_METSig;
   Bool_t          Jet_Stop0l[27];   //[nJet]
   Bool_t          Jet_btagStop0l[27];   //[nJet]
   Float_t         Stop0l_HT;
   Float_t         Stop0l_Ptb;
   Int_t           Stop0l_nJets;
   Int_t           Stop0l_nbtags;
   Int_t           Stop0l_nTop;
   Int_t           Stop0l_nW;
   Int_t           Stop0l_nResolved;
   Int_t           Stop0l_ISRJetIdx;
   Float_t         Stop0l_ISRJetPt;
   Bool_t          Pass_JetID;
   Bool_t          Pass_CaloMETRatio;
   Bool_t          Pass_EventFilter;
   Bool_t          Pass_ElecVeto;
   Bool_t          Pass_MuonVeto;
   Bool_t          Pass_IsoTrkVeto;
   Bool_t          Pass_LeptonVeto;
   Bool_t          Pass_NJets20;
   Bool_t          Pass_MET;
   Bool_t          Pass_HT;
   Bool_t          Pass_dPhiMET;
   Bool_t          Pass_dPhiMETLowDM;
   Bool_t          Pass_dPhiMETHighDM;
   Bool_t          Pass_Baseline;
   Bool_t          Pass_highDM;
   Bool_t          Pass_lowDM;
   Bool_t          Pass_QCDCR;
   Bool_t          Pass_QCDCR_highDM;
   Bool_t          Pass_QCDCR_lowDM;
   Bool_t          Pass_LLCR;
   Bool_t          Pass_LLCR_highDM;
   Bool_t          Pass_LLCR_lowDM;
   Bool_t          Pass_HEMVeto20;
   Bool_t          Pass_HEMVeto30;
   Bool_t          Pass_exHEMVeto20;
   Bool_t          Pass_exHEMVeto30;
   Bool_t          Pass_trigger_MET;
   Bool_t          Pass_trigger_muon;
   Bool_t          Pass_trigger_electron;
   Bool_t          Pass_trigger_photon;
   Float_t         Stop0l_trigger_eff_MET_loose_baseline;
   Float_t         Stop0l_trigger_eff_MET_loose_baseline_down;
   Float_t         Stop0l_trigger_eff_MET_loose_baseline_up;
   Float_t         Stop0l_trigger_eff_MET_low_dm;
   Float_t         Stop0l_trigger_eff_MET_low_dm_down;
   Float_t         Stop0l_trigger_eff_MET_low_dm_up;
   Float_t         Stop0l_trigger_eff_MET_high_dm;
   Float_t         Stop0l_trigger_eff_MET_high_dm_down;
   Float_t         Stop0l_trigger_eff_MET_high_dm_up;
   Float_t         Stop0l_trigger_eff_MET_low_dm_QCD;
   Float_t         Stop0l_trigger_eff_MET_low_dm_QCD_down;
   Float_t         Stop0l_trigger_eff_MET_low_dm_QCD_up;
   Float_t         Stop0l_trigger_eff_MET_high_dm_QCD;
   Float_t         Stop0l_trigger_eff_MET_high_dm_QCD_down;
   Float_t         Stop0l_trigger_eff_MET_high_dm_QCD_up;
   Float_t         Stop0l_trigger_eff_Electron_pt;
   Float_t         Stop0l_trigger_eff_Electron_pt_down;
   Float_t         Stop0l_trigger_eff_Electron_pt_up;
   Float_t         Stop0l_trigger_eff_Electron_eta;
   Float_t         Stop0l_trigger_eff_Electron_eta_down;
   Float_t         Stop0l_trigger_eff_Electron_eta_up;
   Float_t         Stop0l_trigger_eff_Muon_pt;
   Float_t         Stop0l_trigger_eff_Muon_pt_down;
   Float_t         Stop0l_trigger_eff_Muon_pt_up;
   Float_t         Stop0l_trigger_eff_Muon_eta;
   Float_t         Stop0l_trigger_eff_Muon_eta_down;
   Float_t         Stop0l_trigger_eff_Muon_eta_up;
   Float_t         Stop0l_trigger_eff_Photon_pt;
   Float_t         Stop0l_trigger_eff_Photon_pt_down;
   Float_t         Stop0l_trigger_eff_Photon_pt_up;
   Float_t         Stop0l_trigger_eff_Photon_eta;
   Float_t         Stop0l_trigger_eff_Photon_eta_down;
   Float_t         Stop0l_trigger_eff_Photon_eta_up;
   Float_t         Stop0l_trigger_eff_Zee_pt;
   Float_t         Stop0l_trigger_eff_Zee_pt_down;
   Float_t         Stop0l_trigger_eff_Zee_pt_up;
   Float_t         Stop0l_trigger_eff_Zmumu_pt;
   Float_t         Stop0l_trigger_eff_Zmumu_pt_down;
   Float_t         Stop0l_trigger_eff_Zmumu_pt_up;
   Float_t         Stop0l_evtWeight;
   Float_t         Jet_jecUncertTotal[27];   //[nJet]
   Float_t         puWeight;
   Float_t         BTagWeight;
   Float_t         ISRWeight;
   Float_t         nISRJets;
   Float_t         PrefireWeight;
   Float_t         dphij1met;
   Float_t         dphij2met;
   Float_t         dphij3met;
   Float_t         dphij4met;
   Bool_t          Pass_HEM20;
   Bool_t          Pass_HEM30;
   Int_t           nJetPass;
   Float_t         JetPass_pt[18];   //[nJetPass]
   Float_t         JetPass_eta[18];   //[nJetPass]
   Float_t         JetPass_phi[18];   //[nJetPass]
   Float_t         JetPass_mass[18];   //[nJetPass]

   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_luminosityBlock;   //!
   TBranch        *b_event;   //!
   TBranch        *b_btagWeight_CSVV2;   //!
   TBranch        *b_btagWeight_CMVA;   //!
   TBranch        *b_CaloMET_phi;   //!
   TBranch        *b_CaloMET_pt;   //!
   TBranch        *b_CaloMET_sumEt;   //!
   TBranch        *b_genWeight;   //!
   TBranch        *b_nPSWeight;   //!
   TBranch        *b_PSWeight;   //!
   TBranch        *b_nJet;   //!
   TBranch        *b_Jet_CvsB;   //!
   TBranch        *b_Jet_CvsL;   //!
   TBranch        *b_Jet_area;   //!
   TBranch        *b_Jet_btagCSVV2;   //!
   TBranch        *b_Jet_btagDeepB;   //!
   TBranch        *b_Jet_btagDeepC;   //!
   TBranch        *b_Jet_btagDeepFlavB;   //!
   TBranch        *b_Jet_chEmEF;   //!
   TBranch        *b_Jet_chHEF;   //!
   TBranch        *b_Jet_chHadMult;   //!
   TBranch        *b_Jet_elEF;   //!
   TBranch        *b_Jet_elMult;   //!
   TBranch        *b_Jet_eta;   //!
   TBranch        *b_Jet_hfEMEF;   //!
   TBranch        *b_Jet_hfHadEF;   //!
   TBranch        *b_Jet_mass;   //!
   TBranch        *b_Jet_muEF;   //!
   TBranch        *b_Jet_muMult;   //!
   TBranch        *b_Jet_neEmEF;   //!
   TBranch        *b_Jet_neHEF;   //!
   TBranch        *b_Jet_neHadMult;   //!
   TBranch        *b_Jet_phEF;   //!
   TBranch        *b_Jet_phMult;   //!
   TBranch        *b_Jet_phi;   //!
   TBranch        *b_Jet_pt;   //!
   TBranch        *b_Jet_qgAxis1;   //!
   TBranch        *b_Jet_qgAxis2;   //!
   TBranch        *b_Jet_qgl;   //!
   TBranch        *b_Jet_qgptD;   //!
   TBranch        *b_Jet_rawFactor;   //!
   TBranch        *b_Jet_bRegCorr;   //!
   TBranch        *b_Jet_bRegRes;   //!
   TBranch        *b_Jet_jetId;   //!
   TBranch        *b_Jet_nConstituents;   //!
   TBranch        *b_Jet_nElectrons;   //!
   TBranch        *b_Jet_nMuons;   //!
   TBranch        *b_Jet_puId;   //!
   TBranch        *b_Jet_qgMult;   //!
   TBranch        *b_MET_MetUnclustEnUpDeltaX;   //!
   TBranch        *b_MET_MetUnclustEnUpDeltaY;   //!
   TBranch        *b_MET_phi;   //!
   TBranch        *b_MET_pt;   //!
   TBranch        *b_MET_sumEt;   //!
   TBranch        *b_genTtbarId;   //!
   TBranch        *b_Jet_genJetIdx;   //!
   TBranch        *b_Jet_hadronFlavour;   //!
   TBranch        *b_Jet_partonFlavour;   //!
   TBranch        *b_MET_fiducialGenPhi;   //!
   TBranch        *b_MET_fiducialGenPt;   //!
   TBranch        *b_Jet_cleanmask;   //!
   TBranch        *b_L1simulation_step;   //!
   TBranch        *b_Jet_corr_JEC;   //!
   TBranch        *b_Jet_corr_JER;   //!
   TBranch        *b_Stop0l_nSoftb;   //!
   TBranch        *b_Jet_dPhiMET;   //!
   TBranch        *b_Stop0l_Mtb;   //!
   TBranch        *b_Stop0l_METSig;   //!
   TBranch        *b_Jet_Stop0l;   //!
   TBranch        *b_Jet_btagStop0l;   //!
   TBranch        *b_Stop0l_HT;   //!
   TBranch        *b_Stop0l_Ptb;   //!
   TBranch        *b_Stop0l_nJets;   //!
   TBranch        *b_Stop0l_nbtags;   //!
   TBranch        *b_Stop0l_nTop;   //!
   TBranch        *b_Stop0l_nW;   //!
   TBranch        *b_Stop0l_nResolved;   //!
   TBranch        *b_Stop0l_ISRJetIdx;   //!
   TBranch        *b_Stop0l_ISRJetPt;   //!
   TBranch        *b_Pass_JetID;   //!
   TBranch        *b_Pass_CaloMETRatio;   //!
   TBranch        *b_Pass_EventFilter;   //!
   TBranch        *b_Pass_ElecVeto;   //!
   TBranch        *b_Pass_MuonVeto;   //!
   TBranch        *b_Pass_IsoTrkVeto;   //!
   TBranch        *b_Pass_LeptonVeto;   //!
   TBranch        *b_Pass_NJets20;   //!
   TBranch        *b_Pass_MET;   //!
   TBranch        *b_Pass_HT;   //!
   TBranch        *b_Pass_dPhiMET;   //!
   TBranch        *b_Pass_dPhiMETLowDM;   //!
   TBranch        *b_Pass_dPhiMETHighDM;   //!
   TBranch        *b_Pass_Baseline;   //!
   TBranch        *b_Pass_highDM;   //!
   TBranch        *b_Pass_lowDM;   //!
   TBranch        *b_Pass_QCDCR;   //!
   TBranch        *b_Pass_QCDCR_highDM;   //!
   TBranch        *b_Pass_QCDCR_lowDM;   //!
   TBranch        *b_Pass_LLCR;   //!
   TBranch        *b_Pass_LLCR_highDM;   //!
   TBranch        *b_Pass_LLCR_lowDM;   //!
   TBranch        *b_Pass_HEMVeto20;   //!
   TBranch        *b_Pass_HEMVeto30;   //!
   TBranch        *b_Pass_exHEMVeto20;   //!
   TBranch        *b_Pass_exHEMVeto30;   //!
   TBranch        *b_Pass_trigger_MET;   //!
   TBranch        *b_Pass_trigger_muon;   //!
   TBranch        *b_Pass_trigger_electron;   //!
   TBranch        *b_Pass_trigger_photon;   //!
   TBranch        *b_Stop0l_trigger_eff_MET_loose_baseline;   //!
   TBranch        *b_Stop0l_trigger_eff_MET_loose_baseline_down;   //!
   TBranch        *b_Stop0l_trigger_eff_MET_loose_baseline_up;   //!
   TBranch        *b_Stop0l_trigger_eff_MET_low_dm;   //!
   TBranch        *b_Stop0l_trigger_eff_MET_low_dm_down;   //!
   TBranch        *b_Stop0l_trigger_eff_MET_low_dm_up;   //!
   TBranch        *b_Stop0l_trigger_eff_MET_high_dm;   //!
   TBranch        *b_Stop0l_trigger_eff_MET_high_dm_down;   //!
   TBranch        *b_Stop0l_trigger_eff_MET_high_dm_up;   //!
   TBranch        *b_Stop0l_trigger_eff_MET_low_dm_QCD;   //!
   TBranch        *b_Stop0l_trigger_eff_MET_low_dm_QCD_down;   //!
   TBranch        *b_Stop0l_trigger_eff_MET_low_dm_QCD_up;   //!
   TBranch        *b_Stop0l_trigger_eff_MET_high_dm_QCD;   //!
   TBranch        *b_Stop0l_trigger_eff_MET_high_dm_QCD_down;   //!
   TBranch        *b_Stop0l_trigger_eff_MET_high_dm_QCD_up;   //!
   TBranch        *b_Stop0l_trigger_eff_Electron_pt;   //!
   TBranch        *b_Stop0l_trigger_eff_Electron_pt_down;   //!
   TBranch        *b_Stop0l_trigger_eff_Electron_pt_up;   //!
   TBranch        *b_Stop0l_trigger_eff_Electron_eta;   //!
   TBranch        *b_Stop0l_trigger_eff_Electron_eta_down;   //!
   TBranch        *b_Stop0l_trigger_eff_Electron_eta_up;   //!
   TBranch        *b_Stop0l_trigger_eff_Muon_pt;   //!
   TBranch        *b_Stop0l_trigger_eff_Muon_pt_down;   //!
   TBranch        *b_Stop0l_trigger_eff_Muon_pt_up;   //!
   TBranch        *b_Stop0l_trigger_eff_Muon_eta;   //!
   TBranch        *b_Stop0l_trigger_eff_Muon_eta_down;   //!
   TBranch        *b_Stop0l_trigger_eff_Muon_eta_up;   //!
   TBranch        *b_Stop0l_trigger_eff_Photon_pt;   //!
   TBranch        *b_Stop0l_trigger_eff_Photon_pt_down;   //!
   TBranch        *b_Stop0l_trigger_eff_Photon_pt_up;   //!
   TBranch        *b_Stop0l_trigger_eff_Photon_eta;   //!
   TBranch        *b_Stop0l_trigger_eff_Photon_eta_down;   //!
   TBranch        *b_Stop0l_trigger_eff_Photon_eta_up;   //!
   TBranch        *b_Stop0l_trigger_eff_Zee_pt;   //!
   TBranch        *b_Stop0l_trigger_eff_Zee_pt_down;   //!
   TBranch        *b_Stop0l_trigger_eff_Zee_pt_up;   //!
   TBranch        *b_Stop0l_trigger_eff_Zmumu_pt;   //!
   TBranch        *b_Stop0l_trigger_eff_Zmumu_pt_down;   //!
   TBranch        *b_Stop0l_trigger_eff_Zmumu_pt_up;   //!
   TBranch        *b_Stop0l_evtWeight;   //!
   TBranch        *b_Jet_jecUncertTotal;   //!
   TBranch        *b_puWeight;   //!
   TBranch        *b_BTagWeight;   //!
   TBranch        *b_ISRWeight;   //!
   TBranch        *b_nISRJets;   //!
   TBranch        *b_PrefireWeight;   //!
   TBranch        *b_dphij1met;   //!
   TBranch        *b_dphij2met;   //!
   TBranch        *b_dphij3met;   //!
   TBranch        *b_dphij4met;   //!
   TBranch        *b_Pass_HEM20;   //!
   TBranch        *b_Pass_HEM30;   //!
   TBranch        *b_nJetPass;   //!
   TBranch        *b_JetPass_pt;   //!
   TBranch        *b_JetPass_eta;   //!
   TBranch        *b_JetPass_phi;   //!
   TBranch        *b_JetPass_mass;   //!

   test(TTree *tree=0);
   virtual ~test();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef test_cxx
test::test(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/eos/uscms/store/user/ddash/nanoAOD/ana_samples/qcd_orig_2016_tree.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/eos/uscms/store/user/ddash/nanoAOD/ana_samples/qcd_orig_2016_tree.root");
      }
      f->GetObject("Events",tree);

   }
   Init(tree);
}

test::~test()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t test::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t test::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void test::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("luminosityBlock", &luminosityBlock, &b_luminosityBlock);
   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("btagWeight_CSVV2", &btagWeight_CSVV2, &b_btagWeight_CSVV2);
   fChain->SetBranchAddress("btagWeight_CMVA", &btagWeight_CMVA, &b_btagWeight_CMVA);
   fChain->SetBranchAddress("CaloMET_phi", &CaloMET_phi, &b_CaloMET_phi);
   fChain->SetBranchAddress("CaloMET_pt", &CaloMET_pt, &b_CaloMET_pt);
   fChain->SetBranchAddress("CaloMET_sumEt", &CaloMET_sumEt, &b_CaloMET_sumEt);
   fChain->SetBranchAddress("genWeight", &genWeight, &b_genWeight);
   fChain->SetBranchAddress("nPSWeight", &nPSWeight, &b_nPSWeight);
   fChain->SetBranchAddress("PSWeight", PSWeight, &b_PSWeight);
   fChain->SetBranchAddress("nJet", &nJet, &b_nJet);
   fChain->SetBranchAddress("Jet_CvsB", Jet_CvsB, &b_Jet_CvsB);
   fChain->SetBranchAddress("Jet_CvsL", Jet_CvsL, &b_Jet_CvsL);
   fChain->SetBranchAddress("Jet_area", Jet_area, &b_Jet_area);
   fChain->SetBranchAddress("Jet_btagCSVV2", Jet_btagCSVV2, &b_Jet_btagCSVV2);
   fChain->SetBranchAddress("Jet_btagDeepB", Jet_btagDeepB, &b_Jet_btagDeepB);
   fChain->SetBranchAddress("Jet_btagDeepC", Jet_btagDeepC, &b_Jet_btagDeepC);
   fChain->SetBranchAddress("Jet_btagDeepFlavB", Jet_btagDeepFlavB, &b_Jet_btagDeepFlavB);
   fChain->SetBranchAddress("Jet_chEmEF", Jet_chEmEF, &b_Jet_chEmEF);
   fChain->SetBranchAddress("Jet_chHEF", Jet_chHEF, &b_Jet_chHEF);
   fChain->SetBranchAddress("Jet_chHadMult", Jet_chHadMult, &b_Jet_chHadMult);
   fChain->SetBranchAddress("Jet_elEF", Jet_elEF, &b_Jet_elEF);
   fChain->SetBranchAddress("Jet_elMult", Jet_elMult, &b_Jet_elMult);
   fChain->SetBranchAddress("Jet_eta", Jet_eta, &b_Jet_eta);
   fChain->SetBranchAddress("Jet_hfEMEF", Jet_hfEMEF, &b_Jet_hfEMEF);
   fChain->SetBranchAddress("Jet_hfHadEF", Jet_hfHadEF, &b_Jet_hfHadEF);
   fChain->SetBranchAddress("Jet_mass", Jet_mass, &b_Jet_mass);
   fChain->SetBranchAddress("Jet_muEF", Jet_muEF, &b_Jet_muEF);
   fChain->SetBranchAddress("Jet_muMult", Jet_muMult, &b_Jet_muMult);
   fChain->SetBranchAddress("Jet_neEmEF", Jet_neEmEF, &b_Jet_neEmEF);
   fChain->SetBranchAddress("Jet_neHEF", Jet_neHEF, &b_Jet_neHEF);
   fChain->SetBranchAddress("Jet_neHadMult", Jet_neHadMult, &b_Jet_neHadMult);
   fChain->SetBranchAddress("Jet_phEF", Jet_phEF, &b_Jet_phEF);
   fChain->SetBranchAddress("Jet_phMult", Jet_phMult, &b_Jet_phMult);
   fChain->SetBranchAddress("Jet_phi", Jet_phi, &b_Jet_phi);
   fChain->SetBranchAddress("Jet_pt", Jet_pt, &b_Jet_pt);
   fChain->SetBranchAddress("Jet_qgAxis1", Jet_qgAxis1, &b_Jet_qgAxis1);
   fChain->SetBranchAddress("Jet_qgAxis2", Jet_qgAxis2, &b_Jet_qgAxis2);
   fChain->SetBranchAddress("Jet_qgl", Jet_qgl, &b_Jet_qgl);
   fChain->SetBranchAddress("Jet_qgptD", Jet_qgptD, &b_Jet_qgptD);
   fChain->SetBranchAddress("Jet_rawFactor", Jet_rawFactor, &b_Jet_rawFactor);
   fChain->SetBranchAddress("Jet_bRegCorr", Jet_bRegCorr, &b_Jet_bRegCorr);
   fChain->SetBranchAddress("Jet_bRegRes", Jet_bRegRes, &b_Jet_bRegRes);
   fChain->SetBranchAddress("Jet_jetId", Jet_jetId, &b_Jet_jetId);
   fChain->SetBranchAddress("Jet_nConstituents", Jet_nConstituents, &b_Jet_nConstituents);
   fChain->SetBranchAddress("Jet_nElectrons", Jet_nElectrons, &b_Jet_nElectrons);
   fChain->SetBranchAddress("Jet_nMuons", Jet_nMuons, &b_Jet_nMuons);
   fChain->SetBranchAddress("Jet_puId", Jet_puId, &b_Jet_puId);
   fChain->SetBranchAddress("Jet_qgMult", Jet_qgMult, &b_Jet_qgMult);
   fChain->SetBranchAddress("MET_MetUnclustEnUpDeltaX", &MET_MetUnclustEnUpDeltaX, &b_MET_MetUnclustEnUpDeltaX);
   fChain->SetBranchAddress("MET_MetUnclustEnUpDeltaY", &MET_MetUnclustEnUpDeltaY, &b_MET_MetUnclustEnUpDeltaY);
   fChain->SetBranchAddress("MET_phi", &MET_phi, &b_MET_phi);
   fChain->SetBranchAddress("MET_pt", &MET_pt, &b_MET_pt);
   fChain->SetBranchAddress("MET_sumEt", &MET_sumEt, &b_MET_sumEt);
   fChain->SetBranchAddress("genTtbarId", &genTtbarId, &b_genTtbarId);
   fChain->SetBranchAddress("Jet_genJetIdx", Jet_genJetIdx, &b_Jet_genJetIdx);
   fChain->SetBranchAddress("Jet_hadronFlavour", Jet_hadronFlavour, &b_Jet_hadronFlavour);
   fChain->SetBranchAddress("Jet_partonFlavour", Jet_partonFlavour, &b_Jet_partonFlavour);
   fChain->SetBranchAddress("MET_fiducialGenPhi", &MET_fiducialGenPhi, &b_MET_fiducialGenPhi);
   fChain->SetBranchAddress("MET_fiducialGenPt", &MET_fiducialGenPt, &b_MET_fiducialGenPt);
   fChain->SetBranchAddress("Jet_cleanmask", Jet_cleanmask, &b_Jet_cleanmask);
   fChain->SetBranchAddress("L1simulation_step", &L1simulation_step, &b_L1simulation_step);
   fChain->SetBranchAddress("Jet_corr_JEC", Jet_corr_JEC, &b_Jet_corr_JEC);
   fChain->SetBranchAddress("Jet_corr_JER", Jet_corr_JER, &b_Jet_corr_JER);
   fChain->SetBranchAddress("Stop0l_nSoftb", &Stop0l_nSoftb, &b_Stop0l_nSoftb);
   fChain->SetBranchAddress("Jet_dPhiMET", Jet_dPhiMET, &b_Jet_dPhiMET);
   fChain->SetBranchAddress("Stop0l_Mtb", &Stop0l_Mtb, &b_Stop0l_Mtb);
   fChain->SetBranchAddress("Stop0l_METSig", &Stop0l_METSig, &b_Stop0l_METSig);
   fChain->SetBranchAddress("Jet_Stop0l", Jet_Stop0l, &b_Jet_Stop0l);
   fChain->SetBranchAddress("Jet_btagStop0l", Jet_btagStop0l, &b_Jet_btagStop0l);
   fChain->SetBranchAddress("Stop0l_HT", &Stop0l_HT, &b_Stop0l_HT);
   fChain->SetBranchAddress("Stop0l_Ptb", &Stop0l_Ptb, &b_Stop0l_Ptb);
   fChain->SetBranchAddress("Stop0l_nJets", &Stop0l_nJets, &b_Stop0l_nJets);
   fChain->SetBranchAddress("Stop0l_nbtags", &Stop0l_nbtags, &b_Stop0l_nbtags);
   fChain->SetBranchAddress("Stop0l_nTop", &Stop0l_nTop, &b_Stop0l_nTop);
   fChain->SetBranchAddress("Stop0l_nW", &Stop0l_nW, &b_Stop0l_nW);
   fChain->SetBranchAddress("Stop0l_nResolved", &Stop0l_nResolved, &b_Stop0l_nResolved);
   fChain->SetBranchAddress("Stop0l_ISRJetIdx", &Stop0l_ISRJetIdx, &b_Stop0l_ISRJetIdx);
   fChain->SetBranchAddress("Stop0l_ISRJetPt", &Stop0l_ISRJetPt, &b_Stop0l_ISRJetPt);
   fChain->SetBranchAddress("Pass_JetID", &Pass_JetID, &b_Pass_JetID);
   fChain->SetBranchAddress("Pass_CaloMETRatio", &Pass_CaloMETRatio, &b_Pass_CaloMETRatio);
   fChain->SetBranchAddress("Pass_EventFilter", &Pass_EventFilter, &b_Pass_EventFilter);
   fChain->SetBranchAddress("Pass_ElecVeto", &Pass_ElecVeto, &b_Pass_ElecVeto);
   fChain->SetBranchAddress("Pass_MuonVeto", &Pass_MuonVeto, &b_Pass_MuonVeto);
   fChain->SetBranchAddress("Pass_IsoTrkVeto", &Pass_IsoTrkVeto, &b_Pass_IsoTrkVeto);
   fChain->SetBranchAddress("Pass_LeptonVeto", &Pass_LeptonVeto, &b_Pass_LeptonVeto);
   fChain->SetBranchAddress("Pass_NJets20", &Pass_NJets20, &b_Pass_NJets20);
   fChain->SetBranchAddress("Pass_MET", &Pass_MET, &b_Pass_MET);
   fChain->SetBranchAddress("Pass_HT", &Pass_HT, &b_Pass_HT);
   fChain->SetBranchAddress("Pass_dPhiMET", &Pass_dPhiMET, &b_Pass_dPhiMET);
   fChain->SetBranchAddress("Pass_dPhiMETLowDM", &Pass_dPhiMETLowDM, &b_Pass_dPhiMETLowDM);
   fChain->SetBranchAddress("Pass_dPhiMETHighDM", &Pass_dPhiMETHighDM, &b_Pass_dPhiMETHighDM);
   fChain->SetBranchAddress("Pass_Baseline", &Pass_Baseline, &b_Pass_Baseline);
   fChain->SetBranchAddress("Pass_highDM", &Pass_highDM, &b_Pass_highDM);
   fChain->SetBranchAddress("Pass_lowDM", &Pass_lowDM, &b_Pass_lowDM);
   fChain->SetBranchAddress("Pass_QCDCR", &Pass_QCDCR, &b_Pass_QCDCR);
   fChain->SetBranchAddress("Pass_QCDCR_highDM", &Pass_QCDCR_highDM, &b_Pass_QCDCR_highDM);
   fChain->SetBranchAddress("Pass_QCDCR_lowDM", &Pass_QCDCR_lowDM, &b_Pass_QCDCR_lowDM);
   fChain->SetBranchAddress("Pass_LLCR", &Pass_LLCR, &b_Pass_LLCR);
   fChain->SetBranchAddress("Pass_LLCR_highDM", &Pass_LLCR_highDM, &b_Pass_LLCR_highDM);
   fChain->SetBranchAddress("Pass_LLCR_lowDM", &Pass_LLCR_lowDM, &b_Pass_LLCR_lowDM);
   fChain->SetBranchAddress("Pass_HEMVeto20", &Pass_HEMVeto20, &b_Pass_HEMVeto20);
   fChain->SetBranchAddress("Pass_HEMVeto30", &Pass_HEMVeto30, &b_Pass_HEMVeto30);
   fChain->SetBranchAddress("Pass_exHEMVeto20", &Pass_exHEMVeto20, &b_Pass_exHEMVeto20);
   fChain->SetBranchAddress("Pass_exHEMVeto30", &Pass_exHEMVeto30, &b_Pass_exHEMVeto30);
   fChain->SetBranchAddress("Pass_trigger_MET", &Pass_trigger_MET, &b_Pass_trigger_MET);
   fChain->SetBranchAddress("Pass_trigger_muon", &Pass_trigger_muon, &b_Pass_trigger_muon);
   fChain->SetBranchAddress("Pass_trigger_electron", &Pass_trigger_electron, &b_Pass_trigger_electron);
   fChain->SetBranchAddress("Pass_trigger_photon", &Pass_trigger_photon, &b_Pass_trigger_photon);
   fChain->SetBranchAddress("Stop0l_trigger_eff_MET_loose_baseline", &Stop0l_trigger_eff_MET_loose_baseline, &b_Stop0l_trigger_eff_MET_loose_baseline);
   fChain->SetBranchAddress("Stop0l_trigger_eff_MET_loose_baseline_down", &Stop0l_trigger_eff_MET_loose_baseline_down, &b_Stop0l_trigger_eff_MET_loose_baseline_down);
   fChain->SetBranchAddress("Stop0l_trigger_eff_MET_loose_baseline_up", &Stop0l_trigger_eff_MET_loose_baseline_up, &b_Stop0l_trigger_eff_MET_loose_baseline_up);
   fChain->SetBranchAddress("Stop0l_trigger_eff_MET_low_dm", &Stop0l_trigger_eff_MET_low_dm, &b_Stop0l_trigger_eff_MET_low_dm);
   fChain->SetBranchAddress("Stop0l_trigger_eff_MET_low_dm_down", &Stop0l_trigger_eff_MET_low_dm_down, &b_Stop0l_trigger_eff_MET_low_dm_down);
   fChain->SetBranchAddress("Stop0l_trigger_eff_MET_low_dm_up", &Stop0l_trigger_eff_MET_low_dm_up, &b_Stop0l_trigger_eff_MET_low_dm_up);
   fChain->SetBranchAddress("Stop0l_trigger_eff_MET_high_dm", &Stop0l_trigger_eff_MET_high_dm, &b_Stop0l_trigger_eff_MET_high_dm);
   fChain->SetBranchAddress("Stop0l_trigger_eff_MET_high_dm_down", &Stop0l_trigger_eff_MET_high_dm_down, &b_Stop0l_trigger_eff_MET_high_dm_down);
   fChain->SetBranchAddress("Stop0l_trigger_eff_MET_high_dm_up", &Stop0l_trigger_eff_MET_high_dm_up, &b_Stop0l_trigger_eff_MET_high_dm_up);
   fChain->SetBranchAddress("Stop0l_trigger_eff_MET_low_dm_QCD", &Stop0l_trigger_eff_MET_low_dm_QCD, &b_Stop0l_trigger_eff_MET_low_dm_QCD);
   fChain->SetBranchAddress("Stop0l_trigger_eff_MET_low_dm_QCD_down", &Stop0l_trigger_eff_MET_low_dm_QCD_down, &b_Stop0l_trigger_eff_MET_low_dm_QCD_down);
   fChain->SetBranchAddress("Stop0l_trigger_eff_MET_low_dm_QCD_up", &Stop0l_trigger_eff_MET_low_dm_QCD_up, &b_Stop0l_trigger_eff_MET_low_dm_QCD_up);
   fChain->SetBranchAddress("Stop0l_trigger_eff_MET_high_dm_QCD", &Stop0l_trigger_eff_MET_high_dm_QCD, &b_Stop0l_trigger_eff_MET_high_dm_QCD);
   fChain->SetBranchAddress("Stop0l_trigger_eff_MET_high_dm_QCD_down", &Stop0l_trigger_eff_MET_high_dm_QCD_down, &b_Stop0l_trigger_eff_MET_high_dm_QCD_down);
   fChain->SetBranchAddress("Stop0l_trigger_eff_MET_high_dm_QCD_up", &Stop0l_trigger_eff_MET_high_dm_QCD_up, &b_Stop0l_trigger_eff_MET_high_dm_QCD_up);
   fChain->SetBranchAddress("Stop0l_trigger_eff_Electron_pt", &Stop0l_trigger_eff_Electron_pt, &b_Stop0l_trigger_eff_Electron_pt);
   fChain->SetBranchAddress("Stop0l_trigger_eff_Electron_pt_down", &Stop0l_trigger_eff_Electron_pt_down, &b_Stop0l_trigger_eff_Electron_pt_down);
   fChain->SetBranchAddress("Stop0l_trigger_eff_Electron_pt_up", &Stop0l_trigger_eff_Electron_pt_up, &b_Stop0l_trigger_eff_Electron_pt_up);
   fChain->SetBranchAddress("Stop0l_trigger_eff_Electron_eta", &Stop0l_trigger_eff_Electron_eta, &b_Stop0l_trigger_eff_Electron_eta);
   fChain->SetBranchAddress("Stop0l_trigger_eff_Electron_eta_down", &Stop0l_trigger_eff_Electron_eta_down, &b_Stop0l_trigger_eff_Electron_eta_down);
   fChain->SetBranchAddress("Stop0l_trigger_eff_Electron_eta_up", &Stop0l_trigger_eff_Electron_eta_up, &b_Stop0l_trigger_eff_Electron_eta_up);
   fChain->SetBranchAddress("Stop0l_trigger_eff_Muon_pt", &Stop0l_trigger_eff_Muon_pt, &b_Stop0l_trigger_eff_Muon_pt);
   fChain->SetBranchAddress("Stop0l_trigger_eff_Muon_pt_down", &Stop0l_trigger_eff_Muon_pt_down, &b_Stop0l_trigger_eff_Muon_pt_down);
   fChain->SetBranchAddress("Stop0l_trigger_eff_Muon_pt_up", &Stop0l_trigger_eff_Muon_pt_up, &b_Stop0l_trigger_eff_Muon_pt_up);
   fChain->SetBranchAddress("Stop0l_trigger_eff_Muon_eta", &Stop0l_trigger_eff_Muon_eta, &b_Stop0l_trigger_eff_Muon_eta);
   fChain->SetBranchAddress("Stop0l_trigger_eff_Muon_eta_down", &Stop0l_trigger_eff_Muon_eta_down, &b_Stop0l_trigger_eff_Muon_eta_down);
   fChain->SetBranchAddress("Stop0l_trigger_eff_Muon_eta_up", &Stop0l_trigger_eff_Muon_eta_up, &b_Stop0l_trigger_eff_Muon_eta_up);
   fChain->SetBranchAddress("Stop0l_trigger_eff_Photon_pt", &Stop0l_trigger_eff_Photon_pt, &b_Stop0l_trigger_eff_Photon_pt);
   fChain->SetBranchAddress("Stop0l_trigger_eff_Photon_pt_down", &Stop0l_trigger_eff_Photon_pt_down, &b_Stop0l_trigger_eff_Photon_pt_down);
   fChain->SetBranchAddress("Stop0l_trigger_eff_Photon_pt_up", &Stop0l_trigger_eff_Photon_pt_up, &b_Stop0l_trigger_eff_Photon_pt_up);
   fChain->SetBranchAddress("Stop0l_trigger_eff_Photon_eta", &Stop0l_trigger_eff_Photon_eta, &b_Stop0l_trigger_eff_Photon_eta);
   fChain->SetBranchAddress("Stop0l_trigger_eff_Photon_eta_down", &Stop0l_trigger_eff_Photon_eta_down, &b_Stop0l_trigger_eff_Photon_eta_down);
   fChain->SetBranchAddress("Stop0l_trigger_eff_Photon_eta_up", &Stop0l_trigger_eff_Photon_eta_up, &b_Stop0l_trigger_eff_Photon_eta_up);
   fChain->SetBranchAddress("Stop0l_trigger_eff_Zee_pt", &Stop0l_trigger_eff_Zee_pt, &b_Stop0l_trigger_eff_Zee_pt);
   fChain->SetBranchAddress("Stop0l_trigger_eff_Zee_pt_down", &Stop0l_trigger_eff_Zee_pt_down, &b_Stop0l_trigger_eff_Zee_pt_down);
   fChain->SetBranchAddress("Stop0l_trigger_eff_Zee_pt_up", &Stop0l_trigger_eff_Zee_pt_up, &b_Stop0l_trigger_eff_Zee_pt_up);
   fChain->SetBranchAddress("Stop0l_trigger_eff_Zmumu_pt", &Stop0l_trigger_eff_Zmumu_pt, &b_Stop0l_trigger_eff_Zmumu_pt);
   fChain->SetBranchAddress("Stop0l_trigger_eff_Zmumu_pt_down", &Stop0l_trigger_eff_Zmumu_pt_down, &b_Stop0l_trigger_eff_Zmumu_pt_down);
   fChain->SetBranchAddress("Stop0l_trigger_eff_Zmumu_pt_up", &Stop0l_trigger_eff_Zmumu_pt_up, &b_Stop0l_trigger_eff_Zmumu_pt_up);
   fChain->SetBranchAddress("Stop0l_evtWeight", &Stop0l_evtWeight, &b_Stop0l_evtWeight);
   fChain->SetBranchAddress("Jet_jecUncertTotal", Jet_jecUncertTotal, &b_Jet_jecUncertTotal);
   fChain->SetBranchAddress("puWeight", &puWeight, &b_puWeight);
   fChain->SetBranchAddress("BTagWeight", &BTagWeight, &b_BTagWeight);
   fChain->SetBranchAddress("ISRWeight", &ISRWeight, &b_ISRWeight);
   fChain->SetBranchAddress("nISRJets", &nISRJets, &b_nISRJets);
   fChain->SetBranchAddress("PrefireWeight", &PrefireWeight, &b_PrefireWeight);
   fChain->SetBranchAddress("dphij1met", &dphij1met, &b_dphij1met);
   fChain->SetBranchAddress("dphij2met", &dphij2met, &b_dphij2met);
   fChain->SetBranchAddress("dphij3met", &dphij3met, &b_dphij3met);
   fChain->SetBranchAddress("dphij4met", &dphij4met, &b_dphij4met);
   fChain->SetBranchAddress("Pass_HEM20", &Pass_HEM20, &b_Pass_HEM20);
   fChain->SetBranchAddress("Pass_HEM30", &Pass_HEM30, &b_Pass_HEM30);
   fChain->SetBranchAddress("nJetPass", &nJetPass, &b_nJetPass);
   fChain->SetBranchAddress("JetPass_pt", JetPass_pt, &b_JetPass_pt);
   fChain->SetBranchAddress("JetPass_eta", JetPass_eta, &b_JetPass_eta);
   fChain->SetBranchAddress("JetPass_phi", JetPass_phi, &b_JetPass_phi);
   fChain->SetBranchAddress("JetPass_mass", JetPass_mass, &b_JetPass_mass);
   Notify();
}

Bool_t test::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void test::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t test::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef test_cxx
