#ifndef ESTTOOLS_LMPARAMETERS_HH_
#define ESTTOOLS_LMPARAMETERS_HH_

#include "../../utils/EstHelper.hh"

namespace EstTools{


const TString inputdir = "root://cmseos.fnal.gov//eos/uscms/store/user/ddash/nano_samples/ana_samples_v1/";
const TString outputdir = ".";

  const TString datadir = ".";
  const TString lumistr = "27.987";//"38.8";//"21.0";//"41.8";// "35.9"; //Units are in pb
  const TString lumistr16 = "35815";
//2017
   const TString lumistr17 = "27987";
  //const TString lumistr17BE = "27987.721";
  // const TString lumistr17F = "13220.313";

//2018 
  const TString lumistr18N = "21068.5";
  const TString lumistr18D = "38630.9";
  //  const TString lumistr = "21.0";

TString getLumi(){return lumistr(TRegexp("[0-9]+.[0-9]"));}

// lumi and base weight
const TString wgtvar = lumistr+"*Stop0l_evtWeight*puWeight*BTagWeight*Stop0l_trigger_eff_MET_loose_baseline_QCD*PrefireWeight";//*ISRWeight"; //2016 //17FpuWeight
  const TString wgtvar16 = lumistr16 +"*Stop0l_evtWeight*Stop0l_trigger_eff_MET_loose_baseline_QCD*puWeight*BTagWeight*PrefireWeight";
  const TString wgtvar17 = lumistr17 +"*Stop0l_evtWeight";  
const TString wgtvar18N = lumistr18N +"*Stop0l_evtWeight*puWeight*BTagWeight*Stop0l_trigger_eff_MET_loose_baseline_QCD";
  const TString wgtvar18D = lumistr18D +"*Stop0l_evtWeight*puWeight*BTagWeight*Stop0l_trigger_eff_MET_loose_baseline_QCD";
  //Stop0l_trigger_eff_MET_loose_baseline_QCD
// photon trigger eff.
const TString phowgt = wgtvar;
//const TString phowgt = wgtvar + "*qcdRespTailWeight";

// No Lepton SF
//const TString lepvetowgt = wgtvar;
//const TString lepselwgt  = wgtvar;
//const TString vetoes = " && nvetolep==0 && nvetotau==0";

// Tag-and-Probe Lepton SF
  const TString lepvetowgt =      wgtvar  ;// + "*((Stop0l_nJets<5 || Stop0l_nbtags<1) + (Stop0l_nJets>=5 && Stop0l_nbtags>=1))";
  const TString lepvetowgt16 =      wgtvar16  ;//  + "*((Stop0l_nJets<5 || Stop0l_nbtags<1) + (Stop0l_nJets>=5 && Stop0l_nbtags>=1))";
  const TString lepvetowgt17 =      wgtvar17 ;// + "*((Stop0l_nJets<5 || Stop0l_nbtags<1) + (Stop0l_nJets>=5 && Stop0l_nbtags>=1))";
  const TString lepvetowgt18N =      wgtvar18N;//  + "*((Stop0l_nJets<5 || Stop0l_nbtags<1) + (Stop0l_nJets>=5 && Stop0l_nbtags>=1))";
  const TString lepvetowgt18D =      wgtvar18D;//  + "*((Stop0l_nJets<5 || Stop0l_nbtags<1) + (Stop0l_nJets>=5 && Stop0l_nbtags>=1))";


  const TString lepselwgt  =      wgtvar  ;  //  + "*((Stop0l_nJets<5 || Stop0l_nbtags<1) + (Stop0l_nJets>=5 && Stop0l_nbtags>=1))";
  const TString vetoes = " ";//&& Pass_LeptonVeto";
 
// 1LCR Lepton SF
//const TString lepvetowgt = wgtvar + "*lepvetoweight";
//const TString lepselwgt  = wgtvar + "*lepselweight";
//const TString vetoes = " && ((nvetolep==0 && nvetotau==0) || (ismc && (ngoodgenele>0 || ngoodgenmu>0 || npromptgentau>0)))";

// sr weight w/o top/W SF
const TString lepvetowgt_no_wtopsf = lumistr+"*1000*Stop0l_evtWeight*Stop0l_trigger_eff_MET_loose_baseline*puWeight*BTagWeight*ISRWeight*PrefireWeight*((Stop0l_nJets<5 || Stop0l_nbtags<1) + (Stop0l_nJets>=5 && Stop0l_nbtags>=1))";

// 1Lep LLB method
bool ADD_LEP_TO_MET = false;
bool ICHEPCR = false;
  bool is2016 =false;
  bool is2017 =true;
  bool is2018 = false;
  bool PreHEM = false;
  bool PostHEM = false;
  bool SPLITTF = false; // split TF to CR-SR and SR-extrapolation

const TString revert_vetoes = " && nLeptonVeto == 1 && Stop0l_MtLepMET < 100";

// MET+LEP LL method
//bool ADD_LEP_TO_MET = true;
const TString lepcrsel = " && nLeptonVeto == 1 && Stop0l_MtLepMET < 100 && MET_pt>100";


// lepton trigger eff.
//const TString trigLepCR = " && (passtrige || passtrigmu)";
//const TString onelepcrwgt  = lepselwgt + "*trigEleWeight*trigMuWeight";

const TString trigLepCR = " && passtriglepOR";
const TString onelepcrwgt  = lepselwgt;

// qcd weights
  // const TString qcdwgt = wgtvar + "*qcdRespTailWeight";
const TString qcdwgt = wgtvar+ "*qcdRespTailWeight";
  const TString qcdwgt16 = wgtvar16+ "*qcdRespTailWeight";
  const TString qcdwgt17 = wgtvar17;
  const TString qcdwgt18N = wgtvar18N+ "*qcdRespTailWeight";
  const TString qcdwgt18D = wgtvar18D+ "*qcdRespTailWeight";



  //const TString *qcdvetowgt = lepvetowgt+ "*qcdRespTailWeight";
  const TString qcdvetowgt = lepvetowgt+ "*qcdRespTailWeight";
  const TString qcdvetowgt16 = lepvetowgt16+ "*qcdRespTailWeight";
  const TString qcdvetowgt17 = lepvetowgt17;
  const TString qcdvetowgt18N = lepvetowgt18N+ "*qcdRespTailWeight";
  const TString qcdvetowgt18D = lepvetowgt18D+ "*qcdRespTailWeight";

// signal weights
//const TString sigwgt = lepvetowgt + "*btagFastSimWeight*isrWeightTight*(0.85*(Stop0l_nSoftb>=1) + 1.0*(Stop0l_nSoftb==0))";
const TString sigwgt = lepvetowgt;

// triggers
const TString trigSR = " && Pass_trigger_MET";
const TString trigPhoCR = " && passtrigphoOR && origmet<200";
const TString phoBadEventRemoval = " && (!(lumi==189375 && event==430170481) && !(lumi==163479 && event==319690728) && !(lumi==24214 && event==55002562) && !(lumi==12510 && event==28415512) && !(lumi==16662 && event==32583938) && !(lumi==115657 && event==226172626) && !(lumi==149227 && event==431689582) && !(lumi==203626 && event==398201606))";
const TString trigDiLepCR = " && passtrigdilepOR && dileppt>200";
 
  // const TString datasel = " && Pass_EventFilter && Pass_NJets30 && Pass_HT && Pass_JetID && Pass_CaloMETRatio &&Pass_dPhiQCD30 && Stop0l_nJets >= 5 && Stop0l_nbtags >= 1  && Pass_LeptonVeto && (run <319077 || run==1)";
   const TString datasel =" && Pass_EventFilter && Pass_JetID && Pass_LeptonVeto && Pass_CaloMETRatio && Pass_NJets30 && Pass_HT && Pass_dPhiQCD30 && Stop0l_nJets >=2 && Stop0l_nTop == 0 && Stop0l_nW == 0 && Stop0l_nResolved == 0 && Stop0l_Mtb < 175 && Stop0l_ISRJetPt >= 300 && Stop0l_METSig > 10 && (run < 319077 || run ==1)";// && njet_j30 >=2";// && Pass_exHEMVeto30";//njet_j30 >=2/
  // const TString dataselHEM = "&& Pass_EventFilter && Pass_NJets30 && Pass_HT && Pass_JetID && Pass_CaloMETRatio &&Pass_dPhiQCD30 && Stop0l_nJets >= 5 && Stop0l_nbtags >= 1  && Pass_LeptonVeto && Pass_exHEMVeto30 && (run >=319077 || run==1) ";// && njet_j30 >=5"; 
   const TString dataselHEM =" && Pass_EventFilter && Pass_JetID && Pass_LeptonVeto && Pass_CaloMETRatio && Pass_NJets30 && Pass_HT30 && Pass_dPhiQCD30 && Stop0l_nJets >=2 && Stop0l_nTop == 0 && Stop0l_nW == 0 && Stop0l_nResolved == 0 && Stop0l_Mtb < 175 && Stop0l_ISRJetPt >= 200 && Stop0l_METSig > 10 && Pass_exHEMVeto30 && (run >=319077 || run==1)";  
  const TString qcdSpikeRemovals = "";// && (!(lumi==40062 && event==91000735))";
  const TString dphi_invert = "";//&& (Jet_dPhiMET[0]<0.3 || Jet_dPhiMET[1]<0.3 || Jet_dPhiMET[2] < 0.3)";// && (Jet_dPhiMET[0]<0.1 && Jet_dPhiMET[1]<0.1 && Jet_dPhiMET[2] < 0.1)";
const TString dphi_cut = " && ( ((Stop0l_Mtb<175 && Stop0l_nTop==0 && Stop0l_nW==0 && Stop0l_nResolved==0) && (Jet_dPhiMET[0]>0.5 && Jet_dPhiMET[1]>0.15 && Jet_dPhiMET[2]>0.15)) || (!(Stop0l_Mtb<175 && Stop0l_nTop==0 && Stop0l_nW==0 && Stop0l_nResolved==0) && (Jet_dPhiMET[0]>0.5 && Jet_dPhiMET[1]>0.5 && Jet_dPhiMET[2]>0.5 && Jet_dPhiMET[3]>0.5)) )"; // ( ((passLM) && dPhiLM) || ((!passLM) && dPhiHM) )

// ------------------------------------------------------------------------
// search regions and control regions

const TString baseline = "Pass_MET ";

std::map<TString, TString> cutMap = []{
    // Underscore "_" not allowed in the names!!!
    std::map<TString, TString> cmap = {
        {"lmNoDPhi",    "Stop0l_ISRJetPt>300 && Stop0l_Mtb < 175 && Stop0l_nTop==0 && Stop0l_nW==0 && Stop0l_nResolved==0 && Stop0l_METSig>10"},
        {"dPhiLM",      "Pass_dPhiMETLowDM"},
        {"hmNoDPhi",    "Stop0l_nJets>=5 && Stop0l_nbtags>=1"},
        {"dPhiHM",      "Pass_dPhiMETHighDM"},
        {"invertDPhi",  "(Jet_dPhiMET[0]<0.1 || Jet_dPhiMET[1]<0.1 || Jet_dPhiMET[2]<0.1)"},
        {"nb0",         "Stop0l_nbtags==0"},
        {"nb1",         "Stop0l_nbtags==1"},
        {"nbgeq1",      "Stop0l_nbtags>=1"},
        {"nb2",         "Stop0l_nbtags>=2"},
        {"nbeq2",       "Stop0l_nbtags==2"},
        {"nb3",         "Stop0l_nbtags>=3"},
        {"nivf0",       "Stop0l_nSoftb==0"},
        {"nivf1",       "Stop0l_nSoftb>=1"},
        {"lowptisr",    "Stop0l_ISRJetPt>300 && Stop0l_ISRJetPt<500"},
        {"medptisr",    "Stop0l_ISRJetPt>300"},
        {"highptisr",   "Stop0l_ISRJetPt>500"},
        {"nj2to5",      "Stop0l_nJets>=2 && Stop0l_nJets<=5"},
        {"nj6",         "Stop0l_nJets>=6"},
        {"nj7",         "Stop0l_nJets>=7"},
        {"lowmtb",      "Stop0l_Mtb<175"},
        {"highmtb",     "Stop0l_Mtb>175"},
        {"lowptb",      "Stop0l_Ptb<40"},
        {"medptb",      "Stop0l_Ptb>40 && Stop0l_Ptb<70"},
        {"highptb",     "Stop0l_Ptb>70"},
        {"lowptb12",    "Stop0l_Ptb<80"},
        {"medptb12",    "Stop0l_Ptb>80 && Stop0l_Ptb<140"},
        {"highptb12",   "Stop0l_Ptb>140"},
        {"nt0",         "Stop0l_nTop==0"},
        {"nt1",         "Stop0l_nTop==1"},
        {"nt2",         "Stop0l_nTop==2"},
        {"ntgeq1",      "Stop0l_nTop>=1"},
        {"nw0",         "Stop0l_nW==0"},
        {"nw1",         "Stop0l_nW==1"},
        {"nw2",         "Stop0l_nW==2"},
        {"nwgeq1",      "Stop0l_nW>=1"},
        {"nrt0",        "Stop0l_nResolved==0"},
        {"nrt1",        "Stop0l_nResolved==1"},
        {"nrt2",        "Stop0l_nResolved==2"},
        {"nrtgeq1",     "Stop0l_nResolved>=1"},
	{"nrtntnwgeq2", "(Stop0l_nTop+Stop0l_nResolved+Stop0l_nW) >= 2"},
	{"nrtntnwgeq3", "(Stop0l_nTop+Stop0l_nResolved+Stop0l_nW) >= 3"},
	{"htlt1000",    "Stop0l_HT<1000"},	
	{"ht1000to1500","Stop0l_HT>1000 && Stop0l_HT<1500"},	
	{"htgt1500",    "Stop0l_HT>1500"},	
	{"htlt1300",    "Stop0l_HT<1300"},	
	{"htgt1300",    "Stop0l_HT>1300"},	
    };

    cmap["lm"] = createCutString("lmNoDPhi_dPhiLM", cmap);
    cmap["hm"] = createCutString("hmNoDPhi_dPhiHM", cmap);
    return cmap;
}();


std::map<TString, TString> labelMap{
  {"lowptisr", R"($300<\ptisr<500$\,GeV)"},
  {"ntgeq1", R"($\nt\geq1$)"},
  {"nt2", R"($\nt=2$)"},
  {"nivf0", R"($\nsv=0$)"},
  {"nivf1", R"($\nsv\geq1$)"},
  {"nw2", R"($\nw=2$)"},
  {"nj2to5", R"($2\leq\nj\leq5$)"},
  {"nb2", R"($\nb\geq2$)"},
  {"nbeq2", R"($\nb=2$)"},
  {"nb3", R"($\nb\geq3$)"},
  {"nb1", R"($\nb=1$)"},
  {"nbgeq1", R"($\nb\geq1$)"},
  {"nb0", R"($\nb=0$)"},
  {"nrt2", R"($\nrt=2$)"},
  {"medptisr", R"($\ptisr>300$\,GeV)"},
  {"highptisr", R"($\ptisr>500$\,GeV)"},
  {"nj7", R"($\nj\geq7$)"},
  {"highptb", R"($\ptb>70$\,GeV)"},
  {"hm", R"(high \dm)"},
  {"nw0", R"($\nw=0$)"},
  {"nwgeq1", R"($\nw\geq1$)"},
  {"nw1", R"($\nw=1$)"},
  {"nrt0", R"($\nrt=0$)"},
  {"nrt1", R"($\nrt=1$)"},
  {"lowptb", R"($\ptb<40$\,GeV)"},
  {"medptb", R"($40<\ptb<70$\,GeV)"},
  {"nt0", R"($\nt=0$)"},
  {"lm", R"(low \dm)"},
  {"lowptb12", R"($\ptbonetwo<80$\,GeV)"},
  {"highptb12", R"($\ptbonetwo>140$\,GeV)"},
  {"lowmtb", R"($\mtb<175$~\GeV)"},
  {"highmtb", R"($\mtb>175$~\GeV)"},
  {"nt1", R"($\nt=1$)"},
  {"medptb12", R"($80<\ptbonetwo<140$\,GeV)"},
  {"nrtgeq1", R"($\nrt\geq1$)"},
  {"nj6", R"($\nj\geq6$)"},
  {"nrtntnwgeq2", R"($\nt+\nrt+\nw >= 2$)"},
  {"nrtntnwgeq3", R"($\nt+\nrt+\nw >= 3$)"},
  {"htlt1000",    R"($\ht<1000$)"},	
  {"ht1000to1500",R"($1000<\ht<1500$)"},	
  {"htgt1500",    R"($\ht>1500$)"},	
  {"htlt1300",    R"($\ht<1300$)"},	
  {"htgt1300",    R"($\ht>1300$)"},	
  {"lmNoDPhi",    R"(low $\Delta m$)"},
  {"hmNoDPhi",    R"(high $\Delta m$)"},
  
};

std::map<TString, TString> plotLabelMap{
  {"lowptisr", R"(300 < p_{T}(ISR) < 500)"},
  {"ntgeq1", R"(N_{t} #geq 1)"},
  {"nt2", R"(N_{t} = 2)"},
  {"nivf0", R"(N_{SV} = 0)"},
  {"nivf1", R"(N_{SV} #geq 1)"},
  {"nw2", R"(N_{W} = 2)"},
  {"nj2to5", R"(2 #leq N_{j} #leq 5)"},
  {"nb2", R"(N_{b} #geq 2)"},
  {"nbeq2", R"(N_{b} = 2)"},
  {"nb3", R"(N_{b} #geq 3)"},
  {"nb1", R"(N_{b} = 1)"},
  {"nbgeq1", R"(N_{b} #geq 1)"},
  {"nb0", R"(N_{b} = 0)"},
  {"nrt2", R"(N_{res} = 2)"},
  {"medptisr", R"(p_{T}(ISR) > 300)"},
  {"highptisr", R"(p_{T}(ISR) > 500)"},
  {"nj7", R"(N_{j} #geq 7)"},
  {"highptb", R"(p_{T}(b) > 70)"},
  {"hm", R"(high #Deltam)"},
  {"nw0", R"(N_{W} = 0)"},
  {"nwgeq1", R"(N_{W} #geq 1)"},
  {"nw1", R"(N_{W} = 1)"},
  {"nrt0", R"(N_{res} = 0)"},
  {"nrt1", R"(N_{res} = 1)"},
  {"lowptb", R"(p_{T}(b) < 40)"},
  {"medptb", R"(40 < p_{T}(b) < 70)"},
  {"nt0", R"(N_{t} = 0)"},
  {"lm", R"(low #Deltam)"},
  {"lowptb12", R"(p_{T}(b_{12}) < 80)"},
  {"highptb12", R"(p_{T}(b_{12}) > 140)"},
  {"lowmtb", R"(M_{T}(b_{1,2},#vec{p}_{T}^{miss}) < 175)"},
  {"highmtb", R"(M_{T}(b_{1,2},#vec{p}_{T}^{miss}) > 175)"},
  {"nt1", R"(N_{t} = 1)"},
  {"medptb12", R"(80 < p_{T}(b_{12}) < 140)"},
  {"nrtgeq1", R"(N_{res} #geq 1)"},
  {"nj6", R"(N_{j} #geq 6)"},
  {"nrtntnwgeq2", R"(N_{t}+N_{res}+N_{W} #geq 2)"},
  {"nrtntnwgeq3", R"(N_{t}+N_{res}+N_{W} #geq 3)"},
  {"htlt1000",    R"(H_{T}<1000)"},	
  {"ht1000to1500",R"(1000<H_{T}<1500)"},	
  {"htgt1500",    R"(H_{T}>1500)"},	
  {"htlt1300",    R"(H_{T}<1300)"},	
  {"htgt1300",    R"(H_{T}>1300)"},	
  {"lmNoDPhi",    R"(low #Delta m)"},
  {"hmNoDPhi",    R"(high #Delta m)"},
};

std::vector<TString> srbinsInc{
  "lm_lmNoDPhi",
  "hm_hmNoDPhi",
};



std::vector<TString> srbins{
  //---------- low deltaM ----------
  // 0b, 0 or >=1 ivf
  "lm_nb0_nivf0_highptisr_nj2to5",
  
  //---------- high deltaM ----------

};

std::map<TString, TString> srcuts = []{
    std::map<TString, TString> cuts;
    for (auto name : srbins){
      cuts[name] = createCutString(name, cutMap);
    }
    return cuts;
}();

std::map<TString, TString> srlabels = []{
    std::map<TString, TString> cmap;
    for (auto s: srbins){
      cmap[s] = s;
    }
    return cmap;
}();

std::map<TString, std::vector<int>> srMETIncbins{
  {"lm_lmNoDPhi",			{200, 1000}},
  {"hm_hmNoDPhi",			{200, 1000}},

};

std::map<TString, std::vector<int>> srMETbins{
  //---------- low deltaM ----------
  // 0b, 0 or >=1 ivf
  {"lm_nb0_nivf0_highptisr_nj2to5",              {     450, 550, 650, 750, 1000}},

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
  };
}();

//std::map<TString, TString> phoNormMap = normMap;

std::map<TString, TString> phocrMapping{
  //---------- low deltaM ----------
  // 0b, 0 or >=1 ivf
  {"lm_nb0_nivf0_highptisr_nj2to5",              "lm_nb0_nivf0_highptisr_nj2to5"},

};


std::map<TString, TString> phocrCuts = []{
    std::map<TString, TString> cuts;
    for (auto sr2cr : phocrMapping)
      cuts[sr2cr.first] = createCutString(sr2cr.second, cutMap);
    return cuts;
}();

std::map<TString, TString> phocrlabels = phocrMapping;

std::map<TString, std::vector<int>> phocrMETbins = srMETbins;

std::map<TString, TString> lepcrIncMapping{
  {"lm_lmNoDPhi",			"lm_lmNoDPhi"},
  {"hm_hmNoDPhi",			"hm_hmNoDPhi"},

};

std::map<TString, TString> lepcrMapping {
  //---------- low deltaM ----------
  // 0b, 0 or >=1 ivf
  {"lm_nb0_nivf0_highptisr_nj2to5",              "lm_nb0_nivf0_highptisr_nj2to5"},

};

std::map<TString, TString> lepcrCuts = []{
    std::map<TString, TString> cuts;
    for (auto sr2cr : lepcrMapping){
      TString sr2crCut = sr2cr.first;
      cuts[sr2crCut] = createCutString(sr2cr.second, cutMap);
    }
    return cuts;
}();

std::map<TString, TString> lepcrlabels = lepcrMapping;
std::map<TString, std::vector<int>> lepcrMETbins = srMETbins;

// qcd-cr: inverted dPhi cut applied on CR samples now
std::map<TString, TString> qcdcrMapping =[]{
  auto crmap = lepcrMapping;
  for (auto &s : crmap){
    s.second.ReplaceAll("lm_", "lmNoDPhi_");
    s.second.ReplaceAll("hm_", "hmNoDPhi_");
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
      crname.ReplaceAll("hm_", "hmNoDPhi_");
      cuts[name] = createCutString(crname, cutMap);
    }
    return cuts;
}();
std::map<TString, TString> qcdcrlabels = lepcrlabels;
std::map<TString, std::vector<int>> qcdcrMETbins {
  //---------- low deltaM ----------
  // 0b, 0 or >=1 ivf
  {"lm_nb0_nivf0_highptisr_nj2to5",              {     450, 550, 650, 750, 1000}},

};


map<TString, Category> srCatMap(){
  map<TString, Category> cmap;
  for (auto &name : srbins){
    auto nameMet = name;
    cmap[name] = Category(name, srcuts.at(name), srlabels.at(name), BinInfo("MET_pt", "#slash{E}_{T}", srMETbins.at(nameMet), "GeV"));
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
  //map<TString, TString> labels;
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

BaseConfig qcdConfig(){
  BaseConfig     config;

  config.inputdir = inputdir;
  config.outputdir = outputdir+"/QCD";
  config.header = "#sqrt{s} = 13 TeV, "+lumistr+" fb^{-1}";

  // qcdcr
  if(is2016){ 
    const TString lumistr = "35.9";
    config.addSample("data-cr",     "Data",             "data_2016",  "1.0",      datasel + trigSR + vetoes + dphi_invert);
    config.addSample("qcd-cr",      "QCD",              "qcd_smear_sf_2016",         qcdwgt16,   datasel + trigSR + dphi_invert + qcdSpikeRemovals);
    config.addSample("qcd-withveto-cr",  "QCD",         "qcd_smear_sf_2016",       qcdvetowgt16,  datasel + trigSR + vetoes + dphi_invert);   
 // qcdcr: other bkg subtraction
    config.addSample("ttbar-cr",       "t#bar{t}",      "ttbar_2016",           lepvetowgt16 + "*ISRWeight",  datasel + trigSR + vetoes + dphi_invert);
    config.addSample("wjets-cr",       "W+jets",        "wjets_2016",           lepvetowgt16,  datasel + trigSR + vetoes + dphi_invert);
    config.addSample("minor-cr",       "minor",         "minor_2016",           lepvetowgt16,  datasel + trigSR + vetoes + dphi_invert);
    // config.addSample("rare-cr",         "rare",         "rare_2016",            lepvetowgt16,  datasel + trigSR + vetoes + dphi_invert);
    config.addSample("znunu-cr",       "Znunu",         "znunu_2016",           lepvetowgt16,  datasel + trigSR + vetoes + dphi_invert);
  }if(is2017){
    const TString lumistr = "41.8";
    config.addSample("data-cr",     "Data",             "data_2017BtoE",  "1.0",      datasel + trigSR + vetoes + dphi_invert);
    config.addSample("qcd-cr",      "QCD",              "qcd_smear_sf_2017",         qcdwgt17,   datasel + trigSR + dphi_invert + qcdSpikeRemovals);
    config.addSample("qcd-withveto-cr",  "QCD",         "qcd_smear_sf_2017",       qcdvetowgt17,  datasel + trigSR + vetoes + dphi_invert + qcdSpikeRemovals);
    config.addSample("qcd-withveto-sr",  "QCD",         "qcd_smear_sf_2017",       qcdvetowgt17,  datasel + trigSR + vetoes + qcdSpikeRemovals);
  // qcdcr: other bkg subtraction
    config.addSample("ttbar-cr",       "t#bar{t}",      "ttbar_2017",           lepvetowgt17,  datasel + trigSR + vetoes + dphi_invert);
    config.addSample("wjets-cr",       "W+jets",        "wjets_2017",           lepvetowgt17,  datasel + trigSR + vetoes + dphi_invert);
    config.addSample("minor-cr",       "minor",         "minor_2017",           lepvetowgt17,  datasel + trigSR + vetoes + dphi_invert);
    //config.addSample("rare-cr",         "rare",         "rare_2017",            lepvetowgt17,  datasel + trigSR + vetoes + dphi_invert);
    config.addSample("znunu-cr",       "Znunu",         "znunu_2017",           lepvetowgt17,  datasel + trigSR + vetoes + dphi_invert);
}if(is2018){
    if(PostHEM){
     
      config.addSample("data-cr",     "Data",             "data_2018",  "1.0",      dataselHEM + trigSR + vetoes + dphi_invert);
      config.addSample("qcd-cr",      "QCD",              "qcd_smear_sf_2018",         qcdwgt18D,   dataselHEM + trigSR + dphi_invert + qcdSpikeRemovals);
      config.addSample("qcd-withveto-cr",  "QCD",         "qcd_smear_sf_2018",       qcdvetowgt18D,  dataselHEM + trigSR + vetoes + dphi_invert + qcdSpikeRemovals);
      // qcdcr: other bkg subtraction
      config.addSample("ttbar-cr",       "t#bar{t}",      "ttbar_2018",           lepvetowgt18D,  dataselHEM + trigSR + vetoes + dphi_invert);
      config.addSample("wjets-cr",       "W+jets",        "wjets_2018",           lepvetowgt18D,  dataselHEM + trigSR + vetoes + dphi_invert);
      config.addSample("minor-cr",       "minor",         "minor_2018",           lepvetowgt18D,  dataselHEM + trigSR + vetoes + dphi_invert);
      // config.addSample("rare-cr",         "rare",         "rare_2018",            lepvetowgt18,  dataselHEM + trigSR + vetoes + dphi_invert);
      config.addSample("znunu-cr",       "Znunu",         "znunu_2018",           lepvetowgt18D,  dataselHEM + trigSR + vetoes + dphi_invert);   
    }else if(PreHEM){
     
      config.addSample("data-cr",     "Data",             "data_2018",  "1.0",      datasel + trigSR + vetoes + dphi_invert);
      config.addSample("qcd-cr",      "QCD",              "qcd_smear_sf_2018",         qcdwgt18N,   datasel + trigSR + dphi_invert + qcdSpikeRemovals);
      config.addSample("qcd-withveto-cr",  "QCD",         "qcd_smear_sf_2018",       qcdvetowgt18N,  datasel + trigSR + vetoes + dphi_invert + qcdSpikeRemovals);
      // qcdcr: other bkg subtraction
      config.addSample("ttbar-cr",       "t#bar{t}",      "ttbar_2018",           lepvetowgt18N,  datasel + trigSR + vetoes + dphi_invert);
      config.addSample("wjets-cr",       "W+jets",        "wjets_2018",           lepvetowgt18N,  datasel + trigSR + vetoes + dphi_invert);
      config.addSample("minor-cr",       "minor",         "minor_2018",           lepvetowgt18N,  datasel + trigSR + vetoes + dphi_invert);
      //  config.addSample("rare-cr",         "rare",         "rare_2018",            lepvetowgt18,  datasel + trigSR + vetoes + dphi_invert);
      config.addSample("znunu-cr",       "Znunu",         "znunu_2018",           lepvetowgt18N,  datasel + trigSR + vetoes + dphi_invert);
    }
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
  config.outputdir = outputdir+"/sig";
  config.header = "#sqrt{s} = 13 TeV, "+lumistr+" fb^{-1}";

  config.addSample("data-sr",        "Data",             datadir+"/sr/met",                    "1.0",  datasel + trigSR + vetoes);

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
