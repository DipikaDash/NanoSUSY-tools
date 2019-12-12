#ifndef ESTTOOLS_LMPARAMETERS_HH_
#define ESTTOOLS_LMPARAMETERS_HH_

#include "../utils/EstHelper.hh"

namespace EstTools{

const TString inputdir = "root://cmseos.fnal.gov//eos/uscms/store/user/ddash/nano_samples/ana_samples_v1/";

const TString outputdir = "LowMET_total";

const TString datadir = ".";

const TString lumistr = "136.728";
const TString lumistr_2016 = "35.815"; //Units are in pb
const TString lumistr_2017RunBtoE = "27.987";
const TString lumistr_2017RunF    = "13.220";
const TString lumistr_2018PreHEM  = "21.068";
const TString lumistr_2018PostHEM = "38.630";

TString getLumi(){return lumistr(TRegexp("[0-9]+.[0-9]"));}

// lumi and base weight
  const TString wgtvar = lumistr_2016+"*1000*Stop0l_evtWeight*puWeight*Stop0l_trigger_eff_MET_loose_baseline_QCD*BTagWeight*PrefireWeight*topTagWeight*wTagWeight*restopTagWeight*softbTagWeight"; //2016                    
  const TString wgtvar_RunBtoE = lumistr_2017RunBtoE+"*1000*Stop0l_evtWeight*17BtoEpuWeight*Stop0l_trigger_eff_MET_loose_baseline_QCD*BTagWeight*PrefireWeight*topTagWeight*wTagWeight*restopTagWeight*softbTagWeight"; //2017
  const TString wgtvar_RunF = lumistr_2017RunF+"*1000*Stop0l_evtWeight*17FpuWeight*Stop0l_trigger_eff_MET_loose_baseline_QCD*BTagWeight*PrefireWeight*topTagWeight*wTagWeight*restopTagWeight*softbTagWeight"; //2017       
  const TString wgtvar_preHEM = lumistr_2018PreHEM+"*1000*Stop0l_evtWeight*puWeight*Stop0l_trigger_eff_MET_loose_baseline_QCD*BTagWeight*topTagWeight*wTagWeight*restopTagWeight*softbTagWeight"; //2018                     
  const TString wgtvar_postHEM = lumistr_2018PostHEM+"*1000*Stop0l_evtWeight*puWeight*Stop0l_trigger_eff_MET_loose_baseline_QCD*BTagWeight*topTagWeight*wTagWeight*restopTagWeight*softbTagWeight"; //2018
const TString wgtvarsr = lumistr_2016+"*1000*Stop0l_evtWeight*puWeight*Stop0l_trigger_eff_MET_loose_baseline*BTagWeight*PrefireWeight*topTagWeight*wTagWeight*restopTagWeight*softbTagWeight"; //2016                                                                                                                                                               
  const TString wgtvar_RunBtoEsr = lumistr_2017RunBtoE+"*1000*Stop0l_evtWeight*17BtoEpuWeight*Stop0l_trigger_eff_MET_loose_baseline*BTagWeight*PrefireWeight*topTagWeight*wTagWeight*restopTagWeight*softbTagWeight"; //2017                                                                                                                                           
  const TString wgtvar_RunFsr = lumistr_2017RunF+"*1000*Stop0l_evtWeight*17FpuWeight*Stop0l_trigger_eff_MET_loose_baseline*BTagWeight*PrefireWeight*topTagWeight*wTagWeight*restopTagWeight*softbTagWeight"; //2017                                                                                                                                                    
  const TString wgtvar_preHEMsr = lumistr_2018PreHEM+"*1000*Stop0l_evtWeight*puWeight*Stop0l_trigger_eff_MET_loose_baseline*BTagWeight*topTagWeight*wTagWeight*restopTagWeight*softbTagWeight"; //2018                                                                                                                                                               
  const TString wgtvar_postHEMsr = lumistr_2018PostHEM+"*1000*Stop0l_evtWeight*puWeight*Stop0l_trigger_eff_MET_loose_baseline*BTagWeight*topTagWeight*wTagWeight*restopTagWeight*softbTagWeight"; //2018                   
                                                   
  // photon trigger eff.                                                                                                                                                          
  const TString phowgt = wgtvar;
  // Tag-and-Probe Lepton SF                                                                                                                                                        
                                          
  const TString lepvetowgt =      wgtvar ;
  const TString lepselwgt  =      wgtvar +"*Stop0l_trigger_eff_MET_loose_baseline*MuSF*ElecSF*TaSF";
  const TString lepvetowgt_RunBtoE =      wgtvar_RunBtoE ;
  const TString lepselwgt_RunBtoE  =      wgtvar_RunBtoE +"*Stop0l_trigger_eff_MET_loose_baseline*MuSF*ElecSF*TaSF";
  const TString lepvetowgt_RunF =         wgtvar_RunF ;
  const TString lepselwgt_RunF  =         wgtvar_RunF +"*Stop0l_trigger_eff_MET_loose_baseline*MuSF*ElecSF*TaSF";
  const TString lepvetowgt_preHEM =       wgtvar_preHEM ;
  const TString lepselwgt_preHEM  =       wgtvar_preHEM +"*Stop0l_trigger_eff_MET_loose_baseline*MuSF*ElecSF*TaSF";
  const TString lepvetowgt_postHEM =      wgtvar_postHEM ;
  const TString lepselwgt_postHEM  =      wgtvar_postHEM +"*Stop0l_trigger_eff_MET_loose_baseline*MuSF*ElecSF*TaSF";
  const TString vetoes = " && Pass_LeptonVeto";
  // sr weight w/o top/W SF                                                                                                                                                          

  const TString lepvetowgt_no_wtopsf = lumistr+"*1000*Stop0l_evtWeight*puWeight*BTagWeight*PrefireWeight*topTagWeight*wTagWeight*restopTagWeight*softbTagWeight*MuSF*ElecSF*TaSF";
  const TString lepvetowgt_no_wtopsf_16 = lumistr_2016+"*1000*Stop0l_evtWeight*puWeight*BTagWeight*PrefireWeight*topTagWeight*wTagWeight*restopTagWeight*softbTagWeight*MuSF*ElecSF*TaSF";
  const TString lepvetowgt_no_wtopsf_17BE = lumistr_2017RunBtoE +"*1000*Stop0l_evtWeight*17BtoEpuWeight*BTagWeight*PrefireWeight*topTagWeight*wTagWeight*restopTagWeight*softbTagWeight*MuSF*ElecSF*TaSF";
  const TString lepvetowgt_no_wtopsf_17F = lumistr_2017RunF+"*1000*Stop0l_evtWeight*17FpuWeight*BTagWeight*PrefireWeight*topTagWeight*wTagWeight*restopTagWeight*softbTagWeight*MuSF*ElecSF*TaSF";
  const TString lepvetowgt_no_wtopsf_18pre = lumistr_2018PreHEM+"*1000*Stop0l_evtWeight*puWeight*BTagWeight*topTagWeight*wTagWeight*restopTagWeight*softbTagWeight*MuSF*ElecSF*TaSF";
 const TString lepvetowgt_no_wtopsf_18po = lumistr_2018PostHEM+"*1000*Stop0l_evtWeight*puWeight*BTagWeight*topTagWeight*wTagWeight*restopTagWeight*softbTagWeight*MuSF*ElecSF*TaSF";
// 1Lep LLB method
bool ADD_LEP_TO_MET = false;
bool ICHEPCR = false;
bool SPLITTF = true; // split TF to CR-SR and SR-extrapolation
const TString revert_vetoes = " && Stop0l_nVetoElecMuon == 1 && Stop0l_MtLepMET < 100";

// MET+LEP LL method
//bool ADD_LEP_TO_MET = true;
const TString lepcrsel = " && Stop0l_nVetoElecMuon == 1 && Stop0l_MtLepMET < 100 && MET_pt>100";

// lepton trigger eff.
//const TString trigLepCR = " && (passtrige || passtrigmu)";
//const TString onelepcrwgt  = lepselwgt + "*trigEleWeight*trigMuWeight";

  const TString trigLepCR = "";
  const TString onelepcrwgt  = lepselwgt;
  const TString qcdwgt = wgtvar +"* qcdRespTailWeight";                                                                                             
  const TString qcdwgt_RunBtoE = wgtvar_RunBtoE +"* qcdRespTailWeight";                                                                               
  const TString qcdwgt_RunF = wgtvar_RunF +"* qcdRespTailWeight";                                                                                     
  const TString qcdwgt_preHEM = wgtvar_preHEM +"* qcdRespTailWeight";                                                                                 
  const TString qcdwgt_postHEM = wgtvar_postHEM +"* qcdRespTailWeight";                                                                               
  const TString qcdvetowgt = lepvetowgt +"* qcdRespTailWeight";                                                                                       
  const TString qcdvetowgt_RunBtoE = lepvetowgt_RunBtoE +"* qcdRespTailWeight";                                                                       
  const TString qcdvetowgt_RunF = lepvetowgt_RunF +"* qcdRespTailWeight";                                                                             
  const TString qcdvetowgt_preHEM = lepvetowgt_preHEM +"* qcdRespTailWeight";                                                                         
  const TString qcdvetowgt_postHEM = lepvetowgt_postHEM +"* qcdRespTailWeight";

  const TString lepvetowgtsr =wgtvarsr ;
  const TString lepvetowgt_RunBtoEsr =      wgtvar_RunBtoEsr ;
  const TString lepvetowgt_RunFsr =         wgtvar_RunFsr ;
  const TString lepvetowgt_preHEMsr =       wgtvar_preHEMsr ; 
  const TString lepvetowgt_postHEMsr =      wgtvar_postHEMsr ;                                                                        
  const TString qcdwgtsr = wgtvarsr +"* qcdRespTailWeight";
  const TString qcdwgt_RunBtoEsr = wgtvar_RunBtoEsr +"* qcdRespTailWeight";
  const TString qcdwgt_RunFsr = wgtvar_RunFsr +"* qcdRespTailWeight";
  const TString qcdwgt_preHEMsr = wgtvar_preHEMsr +"* qcdRespTailWeight";
  const TString qcdwgt_postHEMsr = wgtvar_postHEMsr +"* qcdRespTailWeight";
  const TString qcdvetowgtsr = lepvetowgtsr +"* qcdRespTailWeight";
  const TString qcdvetowgt_RunBtoEsr = lepvetowgt_RunBtoEsr +"* qcdRespTailWeight";
  const TString qcdvetowgt_RunFsr = lepvetowgt_RunFsr +"* qcdRespTailWeight";
  const TString qcdvetowgt_preHEMsr = lepvetowgt_preHEMsr +"* qcdRespTailWeight";
  const TString qcdvetowgt_postHEMsr = lepvetowgt_postHEMsr +"* qcdRespTailWeight";


// signal weights
//const TString sigwgt = lepvetowgt + "*btagFastSimWeight*isrWeightTight*(0.85*(Stop0l_nSoftb>=1) + 1.0*(Stop0l_nSoftb==0))";
const TString sigwgt = lepvetowgt;

// triggers
const TString trigSR = " && Pass_trigger_MET";
const TString trigPhoCR = " && passtrigphoOR && origmet<200";
const TString phoBadEventRemoval = " && (!(lumi==189375 && event==430170481) && !(lumi==163479 && event==319690728) && !(lumi==24214 && event==55002562) && !(lumi==12510 && event==28415512) && !(lumi==16662 && event==32583938) && !(lumi==115657 && event==226172626) && !(lumi==149227 && event==431689582) && !(lumi==203626 && event==398201606))";
const TString trigDiLepCR = " && passtrigdilepOR && dileppt>200";
const TString sdatasel = " && Pass_EventFilter && Pass_HT && Pass_JetID && Pass_CaloMETRatio && (run < 319077 ||(run >=319077 && Pass_exHEMVeto30)) ";
const TString datasel = " && Pass_EventFilter && Pass_HT && Pass_JetID && Pass_CaloMETRatio && (run < 319077 || run ==1)";
const TString dataselHEM = " && Pass_EventFilter && Pass_HT && Pass_JetID && Pass_CaloMETRatio && Pass_exHEMVeto30 && (run >= 319077 || run ==1)";
const TString qcdSpikeRemovals = "";
const TString dphi_invert = " && Pass_dPhiQCD30";
  const TString dphi_cut =   " && ( ((Stop0l_Mtb<175 && Stop0l_nTop==0 && Stop0l_nW==0 && Stop0l_nResolved==0) && Pass_dPhiMETLowDM) || (!(Stop0l_Mtb<175 && Stop0l_nTop==0 && Stop0l_nW==0 && Stop0l_nResolved==0) && Pass_dPhiMETHighDM) || ((Stop0l_Mtb<175 && Stop0l_nTop==0 && Stop0l_nW==0 && Stop0l_nResolved==0) && (Pass_dPhiMETMedDM)) )"; // ( ((passLM) && dPhiLM) || ((!passLM) && dPhiHM) )

// ------------------------------------------------------------------------
// search regions and control regions


const TString baseline = "Pass_MET && Pass_NJets30";

std::map<TString, TString> cutMap = []{
    // Underscore "_" not allowed in the names!!!
    std::map<TString, TString> cmap = {
	{"lmNoDPhi",  "Stop0l_ISRJetPt>=200 && Stop0l_nTop==0 && Stop0l_nW==0 && Stop0l_nResolved==0 && Stop0l_METSig>=10"},
        {"dPhiLM",    "Pass_dPhiMETLowDM"},
        {"hmNoDPhi",  "Stop0l_nJets>=5 && Stop0l_nbtags>=1"},
        {"dPhiHM",    "Pass_dPhiMETHighDM"},
        {"invertDPhi","Pass_dPhiQCD30"},
        {"dPhiMedLM", "Pass_dPhiMETMedDM"},
	{"dPhiMedHM", "Pass_dPhiMET && !Pass_dPhiMETHighDM"},
        {"nb0",       "Stop0l_nbtags==0"},
        {"nb1",       "Stop0l_nbtags==1"},
        {"nbgeq1",    "Stop0l_nbtags>=1"},
        {"nb2",       "Stop0l_nbtags>=2"},
        {"nbeq2",     "Stop0l_nbtags==2"},
        {"nb3",       "Stop0l_nbtags>=3"},
        {"nivf0",     "Stop0l_nSoftb==0"},
        {"nivf1",     "Stop0l_nSoftb>=1"},
        {"lowptisr",  "Stop0l_ISRJetPt>=300 && Stop0l_ISRJetPt<500"},
        {"medptisr",  "Stop0l_ISRJetPt>=300"},
        {"highptisr", "Stop0l_ISRJetPt>=500"},
        {"nj2to5",    "Stop0l_nJets>=2 && Stop0l_nJets<=5"},
	{"nj5",       "Stop0l_nJets>=5"},
        {"nj6",       "Stop0l_nJets>=6"},
        {"nj7",       "Stop0l_nJets>=7"},
        {"lowmtb",    "Stop0l_Mtb<175"},
        {"highmtb",   "Stop0l_Mtb>=175"},
        {"lowptb",    "Stop0l_Ptb<40"},
        {"medptb",    "Stop0l_Ptb>=40 && Stop0l_Ptb<70"},
        {"highptb",   "Stop0l_Ptb>=70"},
        {"lowptb12",  "Stop0l_Ptb<80"},
        {"medptb12",  "Stop0l_Ptb>=80 && Stop0l_Ptb<140"},
        {"highptb12", "Stop0l_Ptb>=140"},
        {"nt0",       "Stop0l_nTop==0"},
        {"nt1",       "Stop0l_nTop==1"},
        {"nt2",       "Stop0l_nTop==2"},
        {"ntgeq1",    "Stop0l_nTop>=1"},
        {"nw0",       "Stop0l_nW==0"},
        {"nw1",       "Stop0l_nW==1"},
        {"nw2",       "Stop0l_nW==2"},
        {"nwgeq1",    "Stop0l_nW>=1"},
        {"nrt0",      "Stop0l_nResolved==0"},
        {"nrt1",      "Stop0l_nResolved==1"},
        {"nrt2",      "Stop0l_nResolved==2"},
        {"nrtgeq1",   "Stop0l_nResolved>=1"},
	{"nrtntnwgeq2", "(Stop0l_nTop+Stop0l_nResolved+Stop0l_nW) >= 2"},
	{"nrtntnwgeq3", "(Stop0l_nTop+Stop0l_nResolved+Stop0l_nW) >= 3"},
	{"met400","MET_pt < 400"},
	{"met300","MET_pt < 300"},
    };

    cmap["lm"] = createCutString("lmNoDPhi_dPhiLM", cmap);
    cmap["hm"] = createCutString("hmNoDPhi_dPhiHM", cmap);
    cmap["lmVal"] = createCutString("lmNoDPhi_dPhiMedLM", cmap);
    cmap["hmVal"] = createCutString("hmNoDPhi_dPhiMedHM", cmap);
    return cmap;
}();

  std::vector<TString> srbins{
    //---------- low deltaM ----------
    // 0b, 0 or >=1 ivf
    "lm_nb0_nivf0_highptisr_nj2to5_met400",
      "lm_nb0_nivf0_highptisr_nj6_met400",
      "lm_nb0_nivf1_highptisr_nj2to5_met400",
      "lm_nb0_nivf1_highptisr_nj6_met400",

      // 1b, 0 or >=1 ivf
      "lm_nb1_nivf0_lowmtb_lowptisr_lowptb_met300",
      "lm_nb1_nivf0_lowmtb_lowptisr_medptb_met300",
      "lm_nb1_nivf0_lowmtb_highptisr_lowptb_met400",
      "lm_nb1_nivf0_lowmtb_highptisr_medptb_met400",
      // ---
      "lm_nb1_nivf1_lowmtb_lowptb_medptisr_met300",

      // 2b
      "lm_nb2_lowmtb_lowptisr_lowptb12_met300",
      "lm_nb2_lowmtb_lowptisr_medptb12_met300",
      "lm_nb2_lowmtb_lowptisr_highptb12_nj7_met300",
      "lm_nb2_lowmtb_highptisr_lowptb12_met400",
      "lm_nb2_lowmtb_highptisr_medptb12_met400",
      "lm_nb2_lowmtb_highptisr_highptb12_nj7_met400",

      // Additional from Hui
      // 0b
      "lmVal_nb0_lowmtb_nivf0",
      "lmVal_nb0_lowmtb_nivf1",
      "lmVal_nbgeq1_lowmtb_nivf0",
      "lmVal_nbgeq1_lowmtb_nivf1",
      //   ---------- low deltaM ----------
      };
  std::map<TString, TString> srcuts = []{
    std::map<TString, TString> cuts;
    for (auto name : srbins)
      cuts[name] = createCutString(name, cutMap);
    return cuts;
  }();

  std::map<TString, TString> srlabels=srcuts;// FIXME
  std::map<TString, std::vector<int>> srMETbins{
    //---------- low deltaM ----------
    // 0b, 0 or >=1 ivf
    {"lm_nb0_nivf0_highptisr_nj2to5_met400", {250, 400}},
    {"lm_nb0_nivf0_highptisr_nj6_met400", {250, 400}},
    {"lm_nb0_nivf1_highptisr_nj2to5_met400", {250, 400}},
    {"lm_nb0_nivf1_highptisr_nj6_met400", {250, 400}},

    	    // 1b, 0 or >=1 ivf
    {"lm_nb1_nivf0_lowmtb_lowptisr_lowptb_met300", {250, 300}},
    {"lm_nb1_nivf0_lowmtb_lowptisr_medptb_met300", {250, 300}},
    {"lm_nb1_nivf0_lowmtb_highptisr_lowptb_met400", {250, 400}},
    {"lm_nb1_nivf0_lowmtb_highptisr_medptb_met400", {250, 400}},
      // ---
    {"lm_nb1_nivf1_lowmtb_lowptb_medptisr_met300", {250, 300}},

      // 2b
    {"lm_nb2_lowmtb_lowptisr_lowptb12_met300", {250, 300}},
    {"lm_nb2_lowmtb_lowptisr_medptb12_met300", {250, 300}},
    {"lm_nb2_lowmtb_lowptisr_highptb12_nj7_met300", {250, 300}},
    {"lm_nb2_lowmtb_highptisr_lowptb12_met400", {250, 400}},
    {"lm_nb2_lowmtb_highptisr_medptb12_met400", {250, 400}},
    {"lm_nb2_lowmtb_highptisr_highptb12_nj7_met400", {250, 400}},
      
      // Additional from Hui
      // 0b
    {"lmVal_nb0_lowmtb_nivf0", {250, 1000}},
    {"lmVal_nb0_lowmtb_nivf1", {250, 1000}},
    {"lmVal_nbgeq1_lowmtb_nivf0", {250, 1000}},
    {"lmVal_nbgeq1_lowmtb_nivf1", {250, 1000}},
      //---------- low deltaM ----------
      };

  // normalization cuts for Rz
  std::map<TString, TString> normMap{
    {"lm_nb0_nivf0", createCutString("lmNoDPhi_nb0_nivf0", cutMap)},
    {"lm_nb0_nivf1", createCutString("lmNoDPhi_nb0_nivf1", cutMap)},
    {"lm_nb1_nivf0", createCutString("lmNoDPhi_nb1_nivf0", cutMap)},
    {"lm_nb1_nivf1", createCutString("lmNoDPhi_nb1_nivf1", cutMap)},
    {"lm_nb2",       createCutString("lmNoDPhi_nb2", cutMap)},
    {"hm_nb1",       createCutString("hmNoDPhi_nb1", cutMap)},
    {"hm_nb2",       createCutString("hmNoDPhi_nb2", cutMap)},
    {"hm_nbgeq1",    createCutString("hmNoDPhi_nbgeq1", cutMap)},
      };

  // normalize photon to Data after baseline+this cut to calc Sgamma
  std::map<TString, TString> phoNormMap = []{
    if (ICHEPCR) return normMap;
    else return std::map<TString, TString>{
	{"lm_nb0", createCutString("lmNoDPhi_nb0", cutMap)},
	{"lm_nb1", createCutString("lmNoDPhi_nb1", cutMap)},
	{"lm_nb2", createCutString("lmNoDPhi_nb2", cutMap)},
	{"hm_nb1", createCutString("hmNoDPhi_nb1", cutMap)},
	{"hm_nb2", createCutString("hmNoDPhi_nb2", cutMap)},
       	{"hm_nbgeq1",createCutString("hmNoDPhi_nbgeq1", cutMap)},
	  };
  }();

  //std::map<TString, TString> phoNormMap = normMap;

  std::map<TString, TString> phocrMapping{
    //---------- low deltaM ----------
    // 0b, 0 or >=1 ivf
    {"lm_nb0_nivf0_highptisr_nj2to5_met400",        "lm_nb0_nivf0_highptisr_nj2to5_met400"},
    {"lm_nb0_nivf0_highptisr_nj6_met400",           "lm_nb0_nivf0_highptisr_nj6_met400"},
    {"lm_nb0_nivf1_highptisr_nj2to5_met400",        "lm_nb0_nivf1_highptisr_nj2to5_met400"},
    {"lm_nb0_nivf1_highptisr_nj6_met400",           "lm_nb0_nivf1_highptisr_nj6_met400"},
                                            
      // 1b, 0 or >=1 ivf                     
    {"lm_nb1_nivf0_lowmtb_lowptisr_lowptb_met300",  "lm_nb1_nivf0_lowmtb_lowptisr_lowptb_met300"},
    {"lm_nb1_nivf0_lowmtb_lowptisr_medptb_met300",  "lm_nb1_nivf0_lowmtb_lowptisr_medptb_met300"},
    {"lm_nb1_nivf0_lowmtb_highptisr_lowptb_met400", "lm_nb1_nivf0_lowmtb_highptisr_lowptb_met400"},
    {"lm_nb1_nivf0_lowmtb_highptisr_medptb_met400", "lm_nb1_nivf0_lowmtb_highptisr_medptb_met400"},
      // ---                                 
    {"lm_nb1_nivf1_lowmtb_lowptb_medptisr_met300",  "lm_nb1_nivf1_lowmtb_lowptb_medptisr_met300"},
      
      // 2b                                 
    {"lm_nb2_lowmtb_lowptisr_lowptb12_met300",      "lm_nb2_lowmtb_lowptisr_lowptb12_met300"},
    {"lm_nb2_lowmtb_lowptisr_medptb12_met300",      "lm_nb2_lowmtb_lowptisr_medptb12_met300"},
    {"lm_nb2_lowmtb_lowptisr_highptb12_nj7_met300", "lm_nb2_lowmtb_lowptisr_highptb12_nj7_met300"},
    {"lm_nb2_lowmtb_highptisr_lowptb12_met400",     "lm_nb2_lowmtb_highptisr_lowptb12_met400"},
    {"lm_nb2_lowmtb_highptisr_medptb12_met400",     "lm_nb2_lowmtb_highptisr_medptb12_met400"},
    {"lm_nb2_lowmtb_highptisr_highptb12_nj7_met400","lm_nb2_lowmtb_highptisr_highptb12_nj7_met400"},
      
      // Additional from Hui               
      // 0b                               
    {"lmVal_nb0_lowmtb_nivf0",     "lmVal_nb0_lowmtb_nivf0"},
    {"lmVal_nb0_lowmtb_nivf1",     "lmVal_nb0_lowmtb_nivf1"},
    {"lmVal_nbgeq1_lowmtb_nivf0",   "lmVal_nbgeq1_lowmtb_nivf0"},
    {"lmVal_nbgeq1_lowmtb_nivf1",   "lmVal_nbgeq1_lowmtb_nivf1"},
    //   //---------- low deltaM ---------- 
      };
  std::map<TString, TString> phocrCuts = []{
    std::map<TString, TString> cuts;
    for (auto sr2cr : phocrMapping)
      cuts[sr2cr.first] = createCutString(sr2cr.second, cutMap);
    return cuts;
  }();

  std::map<TString, TString> phocrlabels = phocrMapping;

  std::map<TString, std::vector<int>> phocrMETbins = srMETbins;
  std::map<TString, TString> lepcrMapping {
    //---------- low deltaM ----------
    // 0b, 0 or >=1 ivf
    {"lm_nb0_nivf0_highptisr_nj2to5_met400",        "lm_nb0_nivf0_highptisr_nj2to5_met400"},
    {"lm_nb0_nivf0_highptisr_nj6_met400",           "lm_nb0_nivf0_highptisr_nj6_met400"},
    {"lm_nb0_nivf1_highptisr_nj2to5_met400",        "lm_nb0_nivf1_highptisr_nj2to5_met400"},
    {"lm_nb0_nivf1_highptisr_nj6_met400",           "lm_nb0_nivf1_highptisr_nj6_met400"},
      
      // 1b, 0 or >=1 ivf                     
    {"lm_nb1_nivf0_lowmtb_lowptisr_lowptb_met300",  "lm_nb1_nivf0_lowmtb_lowptisr_lowptb_met300"},
    {"lm_nb1_nivf0_lowmtb_lowptisr_medptb_met300",  "lm_nb1_nivf0_lowmtb_lowptisr_medptb_met300"},
    {"lm_nb1_nivf0_lowmtb_highptisr_lowptb_met400", "lm_nb1_nivf0_lowmtb_highptisr_lowptb_met400"},
    {"lm_nb1_nivf0_lowmtb_highptisr_medptb_met400", "lm_nb1_nivf0_lowmtb_highptisr_medptb_met400"},
      // ---                                 
    {"lm_nb1_nivf1_lowmtb_lowptb_medptisr_met300",  "lm_nb1_nivf1_lowmtb_lowptb_medptisr_met300"},
      
      // 2b                                 
    {"lm_nb2_lowmtb_lowptisr_lowptb12_met300",      "lm_nb2_lowmtb_lowptisr_lowptb12_met300"},
    {"lm_nb2_lowmtb_lowptisr_medptb12_met300",      "lm_nb2_lowmtb_lowptisr_medptb12_met300"},
    {"lm_nb2_lowmtb_lowptisr_highptb12_nj7_met300", "lm_nb2_lowmtb_lowptisr_highptb12_nj7_met300"},
    {"lm_nb2_lowmtb_highptisr_lowptb12_met400",     "lm_nb2_lowmtb_highptisr_lowptb12_met400"},
    {"lm_nb2_lowmtb_highptisr_medptb12_met400",     "lm_nb2_lowmtb_highptisr_medptb12_met400"},
    {"lm_nb2_lowmtb_highptisr_highptb12_nj7_met400","lm_nb2_lowmtb_highptisr_highptb12_nj7_met400"},
                                            
      // Additional from Hui               
      // 0b                               
    {"lmVal_nb0_lowmtb_nivf0",     "lmVal_nb0_lowmtb_nivf0"},
    {"lmVal_nb0_lowmtb_nivf1",     "lmVal_nb0_lowmtb_nivf1"},
    {"lmVal_nbgeq1_lowmtb_nivf0",   "lmVal_nbgeq1_lowmtb_nivf0"},
    {"lmVal_nbgeq1_lowmtb_nivf1",   "lmVal_nbgeq1_lowmtb_nivf1"},
    //   //---------- low deltaM ---------- 
      };



std::map<TString, TString> lepcrCuts = []{
    std::map<TString, TString> cuts;
    for (auto sr2cr : lepcrMapping)
      cuts[sr2cr.first] = createCutString(sr2cr.second, cutMap);
    return cuts;
}();

std::map<TString, TString> lepcrlabels = lepcrMapping;
std::map<TString, std::vector<int>> lepcrMETbins = srMETbins;

// qcd-cr: inverted dPhi cut applied on CR samples now
std::map<TString, TString> qcdcrMapping =[]{
  auto crmap = lepcrMapping;
  for (auto &s : crmap){
    s.second.ReplaceAll("lowmtb_nj7", "lowmtb_nj7_nrtgeq1");
    s.second.ReplaceAll("lm_", "lmNoDPhi_");
    s.second.ReplaceAll("lmVal_", "lmNoDPhi_");
    s.second.ReplaceAll("hm_", "hmNoDPhi_");
    s.second.ReplaceAll("hmVal_", "hmNoDPhi_");
  }
  return crmap;
}();
std::map<TString, TString> qcdcrCuts = []{
    std::map<TString, TString> cuts;
    for (auto sr2cr : qcdcrMapping)
      cuts[sr2cr.first] = createCutString(sr2cr.second, cutMap);
    return cuts;
}();
std::map<TString, TString> qcd1to1crCuts = []{
    std::map<TString, TString> cuts;
    for (auto name : srbins){
      TString crname = name;
      crname.ReplaceAll("lm_", "lmNoDPhi_");
      crname.ReplaceAll("lmVal_", "lmNoDPhi_");
      crname.ReplaceAll("hm_", "hmNoDPhi_");
      crname.ReplaceAll("hmVal_", "hmNoDPhi_");
      cuts[name] = createCutString(crname, cutMap);
    }
    return cuts;
}();
std::map<TString, TString> qcdcrlabels = lepcrlabels;
std::map<TString, std::vector<int>> qcdcrMETbins = srMETbins;


map<TString, Category> srCatMap(){
  map<TString, Category> cmap;
  for (auto &name : srbins){
    cmap[name] = Category(name, srcuts.at(name), srlabels.at(name), BinInfo("MET_pt", "#slash{E}_{T}", srMETbins.at(name), "GeV"));
  }
  return cmap;
}

map<TString, Category> phoCatMap(){
  map<TString, Category> cmap;
  const auto &cuts = ICHEPCR ? srcuts: phocrCuts;
  const auto &labels = ICHEPCR ? srlabels: phocrlabels;
  for (auto &name : srbins){
    cmap[name] = Category(name, cuts.at(name), labels.at(name), BinInfo("MET_pt", "#slash{E}_{T}^{#gamma}", phocrMETbins.at(name), "GeV"));
  }
  return cmap;
}

map<TString, Category> lepCatMap(){
  TString varlabel = ADD_LEP_TO_MET ? "p_{T}^{W}" : "#slash{E}_{T}";
  map<TString, Category> cmap;
  const auto &cuts = ICHEPCR ? srcuts: lepcrCuts;
  const auto &labels = ICHEPCR ? srlabels: lepcrlabels;
  for (auto &name : srbins){
    cmap[name] = Category(name, cuts.at(name), labels.at(name), BinInfo("MET_pt", varlabel, lepcrMETbins.at(name), "GeV"));
  }
  return cmap;
}

map<TString, Category> qcdCatMap(){
  map<TString, Category> cmap;
  const auto &cuts = ICHEPCR ? qcd1to1crCuts: qcdcrCuts;
  const auto &labels = ICHEPCR ? srlabels: qcdcrlabels;
  for (auto &name : srbins){
    cmap[name] = Category(name, cuts.at(name), labels.at(name), BinInfo("MET_pt", "#slash{E}_{T}", qcdcrMETbins.at(name), "GeV"));
  }
  return cmap;
}

map<TString, Category> zllCatMap{
  {"on-z",  Category("on-z",  "dilepmass > 80 && dilepmass < 100",                      "on Z",   BinInfo("MET_pt", "#slash{E}_{T}^{ll}", vector<double>{200, 1000}, "GeV"))},
  {"off-z", Category("off-z", "dilepmass > 50 && (dilepmass < 80 || dilepmass > 100)",  "off Z",  BinInfo("MET_pt", "#slash{E}_{T}^{ll}", vector<double>{200, 1000}, "GeV"))}
};


// ------------------------------------------------------------------------
// samples

BaseConfig phoConfig(){
  BaseConfig     config;

  config.inputdir = inputdir;
  config.outputdir = outputdir+"/znunu";
  config.header = "#sqrt{s} = 13 TeV, "+lumistr+" fb^{-1}";

  config.addSample("singlepho",   "Data",           datadir+"/photoncr/singlepho",  "1.0",  datasel + trigPhoCR);

  config.addSample("photon",      "Photon",         "photoncr/photon",     phowgt, datasel + trigPhoCR + phoBadEventRemoval);
//  config.addSample("photon",      "Photon",         "photoncr/gjets",      phowgt, datasel + trigPhoCR);
  config.addSample("znunu-sr",    "Z#rightarrow#nu#nu",   "sr/znunu",      lepvetowgt, datasel + trigSR + vetoes);

  config.sel = baseline;
  config.categories = srbins;
  config.catMaps = srCatMap();
  config.crCatMaps = phoCatMap();

  return config;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

BaseConfig zllConfig(){
  BaseConfig     config;

  config.inputdir = inputdir;
  config.outputdir = outputdir+"/zllcr";
  config.header = "#sqrt{s} = 13 TeV, "+lumistr+" fb^{-1}";

  config.addSample("dyll",      "Z#rightarrowll+jets",    "zllcr/z-soup",                    lepselwgt, datasel + trigDiLepCR);
  config.addSample("ttbar",     "t#bar{t}",               "zllcr/t-soup",                    lepselwgt, datasel + trigDiLepCR);
  config.addSample("doublelep", "Data",                   datadir+"/zllcr/doublelep",       "1.0",     datasel + trigDiLepCR);

  config.sel = baseline;
  config.catMaps = zllCatMap;
  for (auto &c : zllCatMap) config.categories.push_back(c.first);

  return config;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

BaseConfig lepConfig(){
  BaseConfig     config;

  config.inputdir = inputdir;
  config.outputdir = outputdir+"/LLB";
  config.header = "#sqrt{s} = 13 TeV, "+lumistr+" fb^{-1}";

  // samples for cr categories
  if (ADD_LEP_TO_MET){
    config.addSample("singlelep",        "Data",          datadir+"met", 		   "1.0",       datasel + trigLepCR + lepcrsel);
    config.addSample("ttbar-2016",       "t#bar{t}",      "ttbar",           onelepcrwgt+"*ISRWeight", datasel + trigLepCR + lepcrsel);
    config.addSample("wjets-2016",       "W+jets",        "wjets",           onelepcrwgt, datasel + trigLepCR + lepcrsel);
    config.addSample("tW-2016",          "tW",            "tW",              onelepcrwgt, datasel + trigLepCR + lepcrsel);
    config.addSample("ttW-2016",         "ttW",           "ttW",             onelepcrwgt, datasel + trigLepCR + lepcrsel);
//    config.addSample("qcd",         "QCD",           "lepcr/qcd",             onelepcrwgt, datasel + trigLepCR + lepcrsel);
  }else{
    config.addSample("singlelep",        "Data",          datadir+"met",                   "1.0",          datasel + trigSR + revert_vetoes);
   
    //config.addSample("qcd-2018postHEM",          "QCD",           inputdir_2018+"qcd",             lepselwgt_postHEM,      dataselHEM + revert_vetoes);
  }

  // samples for sr categories
  config.addSample("ttbar-2016-sr",       "t#bar{t}",      "ttbar",                lepvetowgt+"*ISRWeight", datasel + vetoes);
  config.addSample("wjets-2016-sr",       "W+jets",        "wjets",                lepvetowgt, datasel + vetoes);
  config.addSample("tW-2016-sr",          "tW",            "tW",                   lepvetowgt, datasel + vetoes);
  

  config.sel = baseline;
  config.categories = srbins;
  config.catMaps = srCatMap();
  config.crCatMaps = lepCatMap();

  return config;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

BaseConfig srConfig(){
  BaseConfig     config;

  config.inputdir = inputdir+"/sr";
  config.outputdir = outputdir+"/testSR";
  config.header = "#sqrt{s} = 13 TeV, "+lumistr+" fb^{-1}";

  config.addSample("ttbar",       "t#bar{t}",      "ttbar",        lepvetowgt, datasel + trigSR + vetoes);
  config.addSample("wjets",       "W+jets",        "wjets",        lepvetowgt, datasel + trigSR + vetoes);
  config.addSample("znunu",       "Z#rightarrow#nu#nu", "znunu",   lepvetowgt, datasel + trigSR + vetoes);
  config.addSample("qcd",         "QCD",           "qcd",       lepvetowgt, datasel + trigSR + vetoes + qcdSpikeRemovals);
  config.addSample("tW",          "tW",            "tW",           lepvetowgt, datasel + trigSR + vetoes);
  config.addSample("ttW",         "ttW",           "ttW",          lepvetowgt, datasel + trigSR + vetoes);
  config.addSample("ttZ",         "ttZ",           "ttZ",          lepvetowgt, datasel + trigSR + vetoes);
  config.addSample("diboson",     "Diboson",       "diboson",      lepvetowgt, datasel + trigSR + vetoes);

//  config.addSample("T2fbd_500_420", "T2fbd(500,420)", "T2fbd_500_420",  sigwgt, datasel + trigSR + vetoes);
  config.addSample("T2fbd_500_450", "T2fbd(500,450)", "T2fbd_500_450",  sigwgt, datasel + trigSR + vetoes);
//  config.addSample("T2fbd_500_480", "T2fbd(500,480)", "T2fbd_500_480",  sigwgt, datasel + trigSR + vetoes);
//  config.addSample("T2cc_500_490",  "T2cc(500,490)",  "T2cc_500_490",   sigwgt, datasel + trigSR + vetoes);

//  config.addSample("T2tt_450_250",  "T2tt(450,250)",  "T2tt_450_250",   sigwgt, datasel + trigSR + vetoes);
  config.addSample("T2tt_400_300",  "T2tt(400,300)",  "T2tt_400_300",   sigwgt, datasel + trigSR + vetoes);
  config.addSample("T2tt_700_400",  "T2tt(700,400)",  "T2tt_700_400",   sigwgt, datasel + trigSR + vetoes);
  config.addSample("T2tt_1000_1",   "T2tt(1000,1)",   "T2tt_1000_1",    sigwgt, datasel + trigSR + vetoes);
//  config.addSample("T2tt_1100_1",   "T2tt(1100,1)",   "T2tt_1100_1",    sigwgt, datasel + trigSR + vetoes);
//  config.addSample("T2bW_850_1",    "T2bW(850,1)",    "T2bW_850_1",     sigwgt, datasel + trigSR + vetoes);
//  config.addSample("T2bW_550_350",  "T2bW(550,350)",  "T2bW_550_350",   sigwgt, datasel + trigSR + vetoes);


  COLOR_MAP["T2fbd_500_420"] = kRed;
  COLOR_MAP["T2fbd_500_450"] = kBlue;
  COLOR_MAP["T2fbd_500_480"] = kBlack;
  COLOR_MAP["T2cc_500_490"]  = kMagenta;

  COLOR_MAP["T2tt_450_250"]  = kOrange;
  COLOR_MAP["T2tt_700_400"]  = kCyan+2;
  COLOR_MAP["T2tt_1000_1"]   = kViolet+2;
  COLOR_MAP["T2bW_550_350"]  = kSpring-9;
  COLOR_MAP["T2bW_850_1"]    = kPink+2;

  config.sel = baseline;
  config.categories = srbins;
  config.catMaps = srCatMap();

  return config;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

BaseConfig qcdConfig(){
  BaseConfig     config;

  config.inputdir = inputdir;
  config.outputdir = outputdir+"/QCD1";
  config.header = "#sqrt{s} = 13 TeV, "+lumistr+" fb^{-1}";

 // qcdcr 2016
  config.addSample("data-16-cr",     "Data",             "data_2016",  "1.0",      datasel + trigSR + vetoes + dphi_invert);
  config.addSample("qcd-16-cr",      "QCD",              "qcd_smear_sf_2016",         qcdwgt,   datasel + trigSR + dphi_invert);
  config.addSample("qcd-withveto-16-cr",  "QCD",         "qcd_smear_sf_2016",       qcdvetowgt,  datasel + trigSR + vetoes + dphi_invert);
  config.addSample("qcd-withveto-16-sr",  "QCD",         "qcd_smear_sf_2016",       qcdvetowgtsr,  datasel + trigSR + vetoes );
  config.addSample("ttbar-16-cr",       "t#bar{t}",      "ttbar_2016",           lepvetowgt+"*ISRWeight",  datasel + trigSR + vetoes + dphi_invert);
  config.addSample("wjets-16-cr",       "W+jets",        "wjets_2016",           lepvetowgt,  datasel + trigSR + vetoes + dphi_invert);
  config.addSample("minor-16-cr",       "minor",         "minor_2016",           lepvetowgt,  datasel + trigSR + vetoes + dphi_invert);
  config.addSample("znunu-16-cr",       "Znunu",         "znunu_2016",           lepvetowgt,  datasel + trigSR + vetoes + dphi_invert);
  // qcdcr 2017BtoE
  config.addSample("data-17BtoE-cr",     "Data",             "data_2017BtoE",  "1.0",      datasel + trigSR + vetoes + dphi_invert);
  config.addSample("qcd-17BtoE-cr",      "QCD",              "qcd_smear_sf_2017",         qcdwgt_RunBtoE,   datasel + trigSR + dphi_invert);
  config.addSample("qcd-withveto-17BtoE-cr",  "QCD",         "qcd_smear_sf_2017",       qcdvetowgt_RunBtoE,  datasel + trigSR + vetoes + dphi_invert);
  config.addSample("qcd-withveto-17BtoE-sr",  "QCD",         "qcd_smear_sf_2017",       qcdvetowgt_RunBtoEsr,  datasel + trigSR + vetoes );
  config.addSample("ttbar-17BtoE-cr",       "t#bar{t}",      "ttbar_2017",           lepvetowgt_RunBtoE,  datasel + trigSR + vetoes + dphi_invert);
  config.addSample("wjets-17BtoE-cr",       "W+jets",        "wjets_2017",           lepvetowgt_RunBtoE,  datasel + trigSR + vetoes + dphi_invert);
  config.addSample("minor-17BtoE-cr",       "minor",         "minor_2017",           lepvetowgt_RunBtoE,  datasel + trigSR + vetoes + dphi_invert);
  config.addSample("znunu-17BtoE-cr",       "Znunu",         "znunu_2017",           lepvetowgt_RunBtoE,  datasel + trigSR + vetoes + dphi_invert);
  // qcdcr 2017F
  config.addSample("data-17F-cr",     "Data",             "data_2017F",  "1.0",      datasel + trigSR + vetoes + dphi_invert);
  config.addSample("qcd-17F-cr",      "QCD",              "qcd_smear_sf_2017",         qcdwgt_RunF,   datasel + trigSR + dphi_invert);
  config.addSample("qcd-withveto-17F-cr",  "QCD",         "qcd_smear_sf_2017",       qcdvetowgt_RunF,  datasel + trigSR + vetoes + dphi_invert);
  config.addSample("qcd-withveto-17F-sr",  "QCD",         "qcd_smear_sf_2017",       qcdvetowgt_RunFsr,  datasel + trigSR + vetoes );
  config.addSample("ttbar-17F-cr",       "t#bar{t}",      "ttbar_2017",           lepvetowgt_RunF,  datasel + trigSR + vetoes + dphi_invert);
  config.addSample("wjets-17F-cr",       "W+jets",        "wjets_2017",           lepvetowgt_RunF,  datasel + trigSR + vetoes + dphi_invert);
  config.addSample("minor-17F-cr",       "minor",         "minor_2017",           lepvetowgt_RunF,  datasel + trigSR + vetoes + dphi_invert);
  config.addSample("znunu-17F-cr",       "Znunu",         "znunu_2017",           lepvetowgt_RunF,  datasel + trigSR + vetoes + dphi_invert);
  //qcdcr 2018 preHEM
  config.addSample("data-18preHEM-cr",     "Data",             "data_2018",  "1.0",      datasel + trigSR + vetoes + dphi_invert);
  config.addSample("qcd-18preHEM-cr",      "QCD",              "qcd_smear_sf_2018",         qcdwgt_preHEM,   datasel + trigSR + dphi_invert);
  config.addSample("qcd-withveto-18preHEM-cr",  "QCD",         "qcd_smear_sf_2018",       qcdvetowgt_preHEM,  datasel + trigSR + vetoes + dphi_invert);
  config.addSample("qcd-withveto-18preHEM-sr",  "QCD",         "qcd_smear_sf_2018",       qcdvetowgt_preHEMsr,  datasel + trigSR + vetoes );
  config.addSample("ttbar-18preHEM-cr",       "t#bar{t}",      "ttbar_2018",           lepvetowgt_preHEM,  datasel + trigSR + vetoes + dphi_invert);
  config.addSample("wjets-18preHEM-cr",       "W+jets",        "wjets_2018",           lepvetowgt_preHEM,  datasel + trigSR + vetoes + dphi_invert);
  config.addSample("minor-18preHEM-cr",       "minor",         "minor_2018",           lepvetowgt_preHEM,  datasel + trigSR + vetoes + dphi_invert);
  config.addSample("znunu-18preHEM-cr",       "Znunu",         "znunu_2018",           lepvetowgt_preHEM,  datasel + trigSR + vetoes + dphi_invert);
  //qcdcr 2018 postHEM
  config.addSample("data-18postHEM-cr",     "Data",             "data_2018",  "1.0",      dataselHEM + trigSR + vetoes + dphi_invert);
  config.addSample("qcd-18postHEM-cr",      "QCD",              "qcd_smear_sf_2018",         qcdwgt_postHEM,   dataselHEM + trigSR + dphi_invert);
  config.addSample("qcd-withveto-18postHEM-cr",  "QCD",         "qcd_smear_sf_2018",       qcdvetowgt_postHEM,  dataselHEM + trigSR + vetoes + dphi_invert);
  config.addSample("qcd-withveto-18postHEM-sr",  "QCD",         "qcd_smear_sf_2018",       qcdvetowgt_postHEMsr,  dataselHEM + trigSR + vetoes );
  config.addSample("ttbar-18postHEM-cr",       "t#bar{t}",      "ttbar_2018",           lepvetowgt_postHEM,  dataselHEM + trigSR + vetoes + dphi_invert);
  config.addSample("wjets-18postHEM-cr",       "W+jets",        "wjets_2018",           lepvetowgt_postHEM,  dataselHEM + trigSR + vetoes + dphi_invert);
  config.addSample("minor-18postHEM-cr",       "minor",         "minor_2018",           lepvetowgt_postHEM,  dataselHEM + trigSR + vetoes + dphi_invert);
  config.addSample("znunu-18postHEM-cr",       "Znunu",         "znunu_2018",           lepvetowgt_postHEM,  dataselHEM + trigSR + vetoes + dphi_invert);
  config.addSample("data-16-norm",      "Data",          "data_2016", "1.0",     datasel + trigSR + revert_vetoes + dphi_cut);
  config.addSample("ttbar-16-norm",     "t#bar{t}",      "ttbar_2016",           lepselwgt+"*ISRWeight",   datasel + trigSR + revert_vetoes + dphi_cut);
  config.addSample("wjets-16-norm",     "W+jets",        "wjets_2016",           lepselwgt,   datasel + trigSR + revert_vetoes + dphi_cut);
  config.addSample("minor-16-norm",     "minor",         "minor_2016",           lepselwgt,   datasel + trigSR + revert_vetoes + dphi_cut);
  config.addSample("qcd-16-norm",       "QCD",           "qcd_smear_sf_2016",       lepselwgt,   datasel + trigSR + revert_vetoes + dphi_cut);
  // onelepcr: norm correction for other bkg subtraction 2017 BtoE
  config.addSample("data-17BtoE-norm",      "Data",          "data_2017BtoE", "1.0",     datasel + trigSR + revert_vetoes + dphi_cut);
  config.addSample("ttbar-17BtoE-norm",   "t#bar{t}",      "ttbar_2017",           lepselwgt_RunBtoE,   datasel + trigSR + revert_vetoes + dphi_cut);
  config.addSample("wjets-17BtoE-norm",     "W+jets",        "wjets_2017",           lepselwgt_RunBtoE,   datasel + trigSR + revert_vetoes + dphi_cut);
  config.addSample("minor-17BtoE-norm",     "minor",         "minor_2017",           lepselwgt_RunBtoE,   datasel + trigSR + revert_vetoes + dphi_cut);
  config.addSample("qcd-17BtoE-norm",       "QCD",           "qcd_smear_sf_2017",       lepselwgt_RunBtoE,   datasel + trigSR + revert_vetoes + dphi_cut);
  // onelepcr: norm correction for other bkg subtraction 2017 F
  config.addSample("data-17F-norm",      "Data",          "data_2017F", "1.0",     datasel + trigSR + revert_vetoes + dphi_cut);
  config.addSample("ttbar-17F-norm",   "t#bar{t}",      "ttbar_2017",           lepselwgt_RunF,   datasel + trigSR + revert_vetoes + dphi_cut);
  config.addSample("wjets-17F-norm",     "W+jets",        "wjets_2017",           lepselwgt_RunF,   datasel + trigSR + revert_vetoes + dphi_cut);
  config.addSample("minor-17F-norm",     "minor",         "minor_2017",           lepselwgt_RunF,   datasel + trigSR + revert_vetoes + dphi_cut);
  config.addSample("qcd-17F-norm",       "QCD",           "qcd_smear_sf_2017",       lepselwgt_RunF,   datasel + trigSR + revert_vetoes + dphi_cut );
  // onelepcr: norm correction for other bkg subtraction 2018 preHEM
  config.addSample("data-18preHEM-norm",      "Data",          "data_2018", "1.0",     datasel + trigSR + revert_vetoes + dphi_cut);
  config.addSample("ttbar-18preHEM-norm",   "t#bar{t}",      "ttbar_2018",           lepselwgt_preHEM,   datasel + trigSR + revert_vetoes + dphi_cut);
  config.addSample("wjets-18preHEM-norm",     "W+jets",        "wjets_2018",           lepselwgt_preHEM,   datasel + trigSR + revert_vetoes + dphi_cut);
  config.addSample("minor-18preHEM-norm",     "minor",         "minor_2018",           lepselwgt_preHEM,   datasel + trigSR + revert_vetoes + dphi_cut);
  config.addSample("qcd-18preHEM-norm",       "QCD",           "qcd_smear_sf_2018",       lepselwgt_preHEM,   datasel + trigSR + revert_vetoes + dphi_cut);
  // onelepcr: norm correction for other bkg subtraction 2018 postHEM
  config.addSample("data-18postHEM-norm",      "Data",          "data_2018", "1.0",     dataselHEM + trigSR + revert_vetoes + dphi_cut);
  config.addSample("ttbar-18postHEM-norm",   "t#bar{t}",      "ttbar_2018",           lepselwgt_postHEM,   dataselHEM + trigSR + revert_vetoes + dphi_cut);
  config.addSample("wjets-18postHEM-norm",     "W+jets",        "wjets_2018",           lepselwgt_postHEM,   dataselHEM + trigSR + revert_vetoes + dphi_cut);
  config.addSample("minor-18postHEM-norm",     "minor",         "minor_2018",           lepselwgt_postHEM,   dataselHEM + trigSR + revert_vetoes + dphi_cut);
  config.addSample("qcd-18postHEM-norm",       "QCD",           "qcd_smear_sf_2018",       lepselwgt_postHEM,   dataselHEM + trigSR + revert_vetoes + dphi_cut);


  // qcdsr
  config.addSample("qcd-16-sr",          "QCD",           "qcd_smear_sf_2016",        qcdwgtsr,              datasel + trigSR );
  config.addSample("qcd-17BtoE-sr",      "QCD",           "qcd_smear_sf_2017",        qcdwgt_RunBtoEsr,      datasel + trigSR );
  config.addSample("qcd-17F-sr",         "QCD",           "qcd_smear_sf_2017",        qcdwgt_RunFsr,         datasel + trigSR );
  config.addSample("qcd-18preHEM-sr",    "QCD",           "qcd_smear_sf_2018",        qcdwgt_preHEMsr,     datasel + trigSR );
  config.addSample("qcd-18postHEM-sr",   "QCD",           "qcd_smear_sf_2018",        qcdwgt_postHEMsr,    dataselHEM + trigSR );

  // samples for splitting the TF, optional (see z.splitTF)
  if (SPLITTF){
    config.addSample("qcd-16-sr-int",         "QCD",           "qcd_smear_sf_2016",       qcdwgtsr,               datasel + trigSR + dphi_cut );
    config.addSample("qcd-17BtoE-sr-int",     "QCD",           "qcd_smear_sf_2017",       qcdwgt_RunBtoEsr,       datasel + trigSR + dphi_cut );
    config.addSample("qcd-17F-sr-int",        "QCD",           "qcd_smear_sf_2017",       qcdwgt_RunFsr,          datasel + trigSR + dphi_cut );
    config.addSample("qcd-18preHEM-sr-int",   "QCD",           "qcd_smear_sf_2018",       qcdwgt_preHEMsr,      datasel + trigSR + dphi_cut );
    config.addSample("qcd-18postHEM-sr-int",  "QCD",           "qcd_smear_sf_2018",       qcdwgt_postHEMsr,     dataselHEM + trigSR + dphi_cut );

  }

  config.sel = baseline;
  config.categories = srbins;
  config.catMaps = srCatMap();    // sr DPhi cut applied
  config.crCatMaps = qcdCatMap(); // no DPhi cut in category def

  return config;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

BaseConfig sigConfig(){
  BaseConfig     config;

  config.inputdir = inputdir;
  config.outputdir = outputdir+"/sig1";
  config.header = "#sqrt{s} = 13 TeV, "+lumistr+" fb^{-1}";


 
  // raw MC w/o top/W SF
  config.addSample("data-sr",      "Data",          "data_run2", "1.0",     sdatasel + trigSR + vetoes);
  // config.addSample("data-16-raw-sr",      "Data",          "data_2016", "1.0",     datasel + trigSR + vetoes);
  // config.addSample("ttbar-16-raw-sr",     "t#bar{t}",      "ttbar_2016",           lepvetowgt_no_wtopsf_16+"*ISRWeight",   datasel + trigSR + vetoes);
  // config.addSample("wjets-16-raw-sr",     "W+jets",        "wjets_2016",           lepvetowgt_no_wtopsf_16,   datasel + trigSR + vetoes);
  // config.addSample("minor-16-raw-sr",     "minor",         "minor_2016",           lepvetowgt_no_wtopsf_16,   datasel + trigSR + vetoes);
  // config.addSample("znunu-16-raw-sr",     "znunu",         "znunu_2016",           lepvetowgt_no_wtopsf_16,   datasel + trigSR + vetoes);
  // config.addSample("qcd-16-raw-sr",       "QCD",           "qcd_smear_2016",       lepvetowgt_no_wtopsf_16,   datasel + trigSR + vetoes);
  // config.addSample("data-17BtoE-raw-sr",      "Data",          "data_2017BtoE", "1.0",     datasel + trigSR + vetoes);
  // config.addSample("ttbar-17BtoE-raw-sr",   "t#bar{t}",      "ttbar_2017",           lepvetowgt_no_wtopsf_17BE,   datasel + trigSR + vetoes);
  // config.addSample("wjets-17BtoE-raw-sr",     "W+jets",        "wjets_2017",          lepvetowgt_no_wtopsf_17BE,   datasel + trigSR + vetoes);
  // config.addSample("minor-17BtoE-raw-sr",     "minor",         "minor_2017",           lepvetowgt_no_wtopsf_17BE,   datasel + trigSR + vetoes);
  // config.addSample("znunu-17BtoE-raw-sr",     "znunu",         "znunu_2017",           lepvetowgt_no_wtopsf_17BE,   datasel + trigSR + vetoes);
  // config.addSample("qcd-17BtoE-raw-sr",       "QCD",           "qcd_smear_2017",       lepvetowgt_no_wtopsf_17BE,   datasel + trigSR + vetoes);
  // config.addSample("data-17F-raw-sr",      "Data",              "data_2017F", "1.0",     datasel + trigSR + vetoes);
  // config.addSample("ttbar-17F-raw-sr",   "t#bar{t}",            "ttbar_2017",           lepvetowgt_no_wtopsf_17F,   datasel + trigSR + vetoes);
  // config.addSample("wjets-17F-raw-sr",     "W+jets",            "wjets_2017",           lepvetowgt_no_wtopsf_17F,   datasel + trigSR + vetoes);
  // config.addSample("minor-17F-raw-sr",     "minor",             "minor_2017",           lepvetowgt_no_wtopsf_17F,   datasel + trigSR + vetoes);
  // config.addSample("qcd-17F-raw-sr",       "QCD",               "qcd_smear_2017",       lepvetowgt_no_wtopsf_17F,   datasel + trigSR + vetoes );
  // config.addSample("znunu-17F-raw-sr",       "znunu",           "znunu_2017",       lepvetowgt_no_wtopsf_17F,   datasel + trigSR + vetoes );
  // config.addSample("data-18preHEM-raw-sr",      "Data",          "data_2018N", "1.0",     datasel + trigSR + vetoes);
  // config.addSample("ttbar-18preHEM-raw-sr",   "t#bar{t}",        "ttbar_2018",           lepvetowgt_no_wtopsf_18pre,   datasel + trigSR + vetoes);
  // config.addSample("wjets-18preHEM-raw-sr",     "W+jets",        "wjets_2018",          lepvetowgt_no_wtopsf_18pre,   datasel + trigSR + vetoes);
  // config.addSample("minor-18preHEM-raw-sr",     "minor",         "minor_2018",           lepvetowgt_no_wtopsf_18pre,   datasel + trigSR + vetoes);
  // config.addSample("znunu-18preHEM-raw-sr",     "znunu",          "znunu_2018",           lepvetowgt_no_wtopsf_18pre,   datasel + trigSR + vetoes);
  // config.addSample("qcd-18preHEM-raw-sr",       "QCD",           "qcd_smear_2018",       lepvetowgt_no_wtopsf_18pre,   datasel + trigSR + vetoes);
  // config.addSample("data-18postHEM-raw-sr",      "Data",          "data_2018D", "1.0",     dataselHEM + trigSR + vetoes);
  // config.addSample("ttbar-18postHEM-raw-sr",   "t#bar{t}",        "ttbar_2018",           lepvetowgt_no_wtopsf_18po,   dataselHEM + trigSR + vetoes);
  // config.addSample("wjets-18postHEM-raw-sr",     "W+jets",        "wjets_2018",           lepvetowgt_no_wtopsf_18po,   dataselHEM + trigSR + vetoes);
  // config.addSample("minor-18postHEM-raw-sr",     "minor",         "minor_2018",           lepvetowgt_no_wtopsf_18po,   dataselHEM + trigSR + vetoes);
  // config.addSample("znunu-18postHEM-raw-sr",     "znunu",         "znunu_2018",           lepvetowgt_no_wtopsf_18po,   dataselHEM + trigSR + vetoes);
  // config.addSample("qcd-18postHEM-raw-sr",       "QCD",           "qcd_smear_2018",       lepvetowgt_no_wtopsf_18po,   dataselHEM + trigSR + vetoes);



//  config.addSample("T2fbd_375_355",  "T2-4bd(375,355)",  "sig/T2fbd_375_355",  sigwgt, datasel + trigSR + vetoes);
//  config.addSample("T2fbd_375_325",  "T2-4bd(375,325)",  "sig/T2fbd_375_325",  sigwgt, datasel + trigSR + vetoes);
//  config.addSample("T2fbd_375_295",  "T2-4bd(375,295)",  "sig/T2fbd_375_295",  sigwgt, datasel + trigSR + vetoes);
//
  config.sel = baseline;
  config.categories = srbins;
  config.catMaps = srCatMap();

  return config;
}
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

map<TString, BinInfo> varDict {
  {"norm",      BinInfo("MET_pt", "#slash{E}_{T}", vector<int>{0, 1000}, "GeV")},
  {"met",       BinInfo("MET_pt", "#slash{E}_{T}", vector<int>{250, 350, 450, 550, 650, 750, 1000}, "GeV")},
  {"metgx",       BinInfo("MET_pt", "#slash{E}_{T}^{(#gamma)}", vector<int>{250, 350, 450, 550, 650, 850}, "GeV")},
  {"metzg",       BinInfo("MET_pt", "#slash{E}_{T}^{#gamma/ll}", vector<int>{250, 350, 450, 550, 650, 850}, "GeV")},
  {"origmet",   BinInfo("MET_pt", "Original #slash{E}_{T}", 20, 0, 500, "GeV")},
  {"njets",     BinInfo("Stop0l_nJets", "N_{j}", 8, -0.5, 7.5)},
  {"njl",       BinInfo("njl", "N_{j}^{ISR}", 4, 0.5, 4.5)},
  {"nlbjets",   BinInfo("nlbjets", "N_{B}^{loose}", 5, -0.5, 4.5)},
  {"nbjets",    BinInfo("Stop0l_nbtags",  "N_{B}^{medium}", 5, -0.5, 4.5)},
  {"dphij1met", BinInfo("Jet_dPhiMET[0]", "#Delta#phi(j_{1},#slash{E}_{T})", 30, 0, 3)},
  {"dphij2met", BinInfo("Jet_dPhiMET[1]", "#Delta#phi(j_{2},#slash{E}_{T})", 30, 0, 3)},
  {"metovsqrtht",BinInfo("Stop0l_METSig", "#slash{E}_{T}/#sqrt{H_{T}}", 10, 0, 20)},
  {"dphiisrmet",BinInfo("dphiisrmet", "#Delta#phi(j_{1}^{ISR},#slash{E}_{T})", vector<double>{0, 2, 3})},
  {"dphiisrmet_fine",BinInfo("dphiisrmet", "#Delta#phi(j_{1}^{ISR},#slash{E}_{T})", 12, 0, 3)},
  {"mtcsv12met",BinInfo("mtcsv12met", "min(m_{T}(b_{1},#slash{E}_{T}),m_{T}(b_{2},#slash{E}_{T}))", 6, 0, 300)},
  {"leptonpt",  BinInfo("leptonpt", "p_{T}^{lep} [GeV]", 12, 0, 600)},
  {"leptonptovermet",  BinInfo("leptonpt/met", "p_{T}^{lep}/#slash{E}_{T}", 20, 0, 1.)},
  {"ak8isrpt",  BinInfo("ak8isrpt", "p_{T}(ISR) [GeV]",  6, 200, 800)},
  {"csvj1pt",   BinInfo("csvj1pt", "p_{T}(b_{1}) [GeV]", 8, 20, 100)},
  {"ptb12",     BinInfo("csvj1pt+csvj2pt", "p_{T}(b_{1})+p_{T}(b_{2}) [GeV]", 8, 40, 200)},
  {"dphilepisr",  BinInfo("dphilepisr", "#Delta#phi(lep, j_{1}^{ISR})", 30, 0, 3)},
  {"drlepisr",  BinInfo("drlepisr", "#DeltaR(lep, j_{1}^{ISR})", 25, 0, 5)},
};

}
#endif /* ESTTOOLS_LMPARAMETERS_HH_ */
