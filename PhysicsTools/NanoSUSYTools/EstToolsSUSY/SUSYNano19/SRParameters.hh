#ifndef ESTTOOLS_LMPARAMETERS_HH_
#define ESTTOOLS_LMPARAMETERS_HH_

#include "../utils/EstHelper.hh"

namespace EstTools{

const TString inputdir = "root://cmseos.fnal.gov//eos/uscms/store/user/ddash/nano_samples/ana_samples_v1";
const TString outputdir = "QCD_Run2_Inclusive";

const TString datadir = "./";

const TString lumistr = "136.728";

TString getLumi(){return lumistr(TRegexp("[0-9]+.[0-9]"));}

// lumi and base weight

  const TString lumistr_2016 = "35.815"; //Units are in pb                                                                                                                       
  const TString lumistr_2017RunBtoE = "27.987";
  const TString lumistr_2017RunF    = "13.220";
  const TString lumistr_2018PreHEM  = "21.068";
  const TString lumistr_2018PostHEM = "38.630";


  // lumi and base weight                                                                                                                                                                
  const TString wgtvar = lumistr_2016+"*1000*Stop0l_evtWeight*Stop0l_trigger_eff_MET_loose_baseline_QCD*puWeight*BTagWeight*PrefireWeight";//*topTagWeight*restopTagWeight*wTagWeight*softbTagWeight"; //2016                     
  const TString wgtvar_BtoE = lumistr_2017RunBtoE+"*1000*Stop0l_evtWeight*Stop0l_trigger_eff_MET_loose_baseline_QCD*17BtoEpuWeight*BTagWeight*PrefireWeight";//*topTagWeight*restopTagWeight*wTagWeight*softbTagWeight"; //2017
  const TString wgtvar_F = lumistr_2017RunF+"*1000*Stop0l_evtWeight*Stop0l_trigger_eff_MET_loose_baseline_QCD*17FpuWeight*BTagWeight*PrefireWeight";//*topTagWeight*restopTagWeight*wTagWeight*softbTagWeight"; //2017         
  const TString wgtvar_preHEM = lumistr_2018PreHEM+"*1000*Stop0l_evtWeight*Stop0l_trigger_eff_MET_loose_baseline_QCD*puWeight*BTagWeight";//*topTagWeight*restopTagWeight*wTagWeight*softbTagWeight"; //2018                      
  const TString wgtvar_postHEM = lumistr_2018PostHEM+"*1000*Stop0l_evtWeight*Stop0l_trigger_eff_MET_loose_baseline_QCD*puWeight*BTagWeight";//*topTagWeight*restopTagWeight*wTagWeight*softbTagWeight"; //2018                 
  // photon trigger eff.                                                                                                                                                         
  const TString phowgt = wgtvar;
  // Tag-and-Probe Lepton SF                                                                                                                                                       
  const TString wgtvarsr = lumistr_2016+"*1000*Stop0l_evtWeight*Stop0l_trigger_eff_MET_loose_baseline*puWeight*BTagWeight*PrefireWeight";//*topTagWeight*restopTagWeight*wTagWeight*softbTagWeight"; //2016                                                                                                                                                             
  const TString wgtvar_BtoEsr = lumistr_2017RunBtoE+"*1000*Stop0l_evtWeight*Stop0l_trigger_eff_MET_loose_baseline*17BtoEpuWeight*BTagWeight*PrefireWeight";//*topTagWeight*restopTagWeight*wTagWeight*softbTagWeight"; //2017                                                                                                                                           
  const TString wgtvar_Fsr = lumistr_2017RunF+"*1000*Stop0l_evtWeight*Stop0l_trigger_eff_MET_loose_baseline*17FpuWeight*BTagWeight*PrefireWeight";//*topTagWeight*restopTagWeight*wTagWeight*softbTagWeight"; //2017                                                                                                                                                   
  const TString wgtvar_preHEMsr = lumistr_2018PreHEM+"*1000*Stop0l_evtWeight*Stop0l_trigger_eff_MET_loose_baseline*puWeight*BTagWeight";
  const TString wgtvar_postHEMsr = lumistr_2018PostHEM+"*1000*Stop0l_evtWeight*Stop0l_trigger_eff_MET_loose_baseline*puWeight*BTagWeight";


  const TString lepvetowgt =      wgtvar ;
  const TString lepselwgt  =      wgtvarsr +"*MuSF*ElecSF*TaSF";
  const TString lepvetowgt_BtoE =      wgtvar_BtoE ;
  const TString lepselwgt_BtoE  =      wgtvar_BtoEsr +"*MuSF*ElecSF*TaSF";
  const TString lepvetowgt_F =         wgtvar_F ;
  const TString lepselwgt_F  =         wgtvar_Fsr +"*MuSF*ElecSF*TaSF";
  const TString lepvetowgt_preHEM =       wgtvar_preHEM ;
  const TString lepselwgt_preHEM  =       wgtvar_preHEMsr +"*MuSF*ElecSF*TaSF";
  const TString lepvetowgt_postHEM =      wgtvar_postHEM ;
  const TString lepselwgt_postHEM  =      wgtvar_postHEMsr +"*MuSF*ElecSF*TaSF";
  const TString vetoes = " && Pass_LeptonVeto";
  const TString revert_vetoes = " && Stop0l_nVetoElecMuon == 1 && Stop0l_MtLepMET < 100";

  const TString lepvetowgtsr =wgtvarsr ;
  const TString lepvetowgt_BtoEsr = wgtvar_BtoEsr ;
  const TString lepvetowgt_Fsr = wgtvar_Fsr ;
  const TString lepvetowgt_preHEMsr =wgtvar_preHEMsr ;
  const TString lepvetowgt_postHEMsr =wgtvar_postHEMsr ;
  const TString qcdwgtsr = wgtvarsr +"*qcdRespTailWeight";
  const TString qcdwgt_BtoEsr = wgtvar_BtoEsr +"*qcdRespTailWeight";
  const TString qcdwgt_Fsr = wgtvar_Fsr +"*qcdRespTailWeight";
  const TString qcdwgt_preHEMsr = wgtvar_preHEMsr +"*qcdRespTailWeight";
  const TString qcdwgt_postHEMsr = wgtvar_postHEMsr +"*qcdRespTailWeight";
  const TString qcdvetowgtsr = lepvetowgtsr +"*qcdRespTailWeight";
  const TString qcdvetowgt_BtoEsr = lepvetowgt_BtoEsr +"*qcdRespTailWeight";
  const TString qcdvetowgt_Fsr = lepvetowgt_Fsr +"*qcdRespTailWeight";
  const TString qcdvetowgt_preHEMsr = lepvetowgt_preHEMsr +"*qcdRespTailWeight";
  const TString qcdvetowgt_postHEMsr = lepvetowgt_postHEMsr +"*qcdRespTailWeight";


  bool ADD_LEP_TO_MET = false;
  bool ICHEPCR = false;
  bool SPLITTF = true; // split TF to CR-SR and SR-extrapolation                                                                                                                           const TString revert_vetoes =" && Stop0l_nVetoElecMuon == 1 && Stop0l_MtLepMET < 100";
  // MET+LEP LL method                                                                                                                                                              
 //bool ADD_LEP_TO_MET = true;                                                                                                                                                   
 const TString lepcrsel = " && Stop0l_nVetoElecMuon == 1 && Stop0l_MtLepMET < 100 && MET_pt>100";
const TString trigLepCR = " && passtriglepOR";
  const TString onelepcrwgt  = lepselwgt;

  // qcd weights                                                                                                                                                                 
  const TString qcdwgt = wgtvar+ "*qcdRespTailWeight";                                                                                              
  const TString qcdwgt_BtoE = wgtvar_BtoE+ "*qcdRespTailWeight";                                                                                    
  const TString qcdwgt_F = wgtvar_F+ "*qcdRespTailWeight";                                                                                          
  const TString qcdwgt_preHEM = wgtvar_preHEM+ "*qcdRespTailWeight";                                                                                
  const TString qcdwgt_postHEM = wgtvar_postHEM+ "*qcdRespTailWeight";                                                                              
  const TString qcdvetowgt = lepvetowgt+ "*qcdRespTailWeight";                                                                                     
  const TString qcdvetowgt_BtoE = lepvetowgt_BtoE+ "*qcdRespTailWeight";                                                                            
  const TString qcdvetowgt_F = lepvetowgt_F+ "*qcdRespTailWeight";                                                                                   
  const TString qcdvetowgt_preHEM = lepvetowgt_preHEM+ "*qcdRespTailWeight";                                                                    
  const TString qcdvetowgt_postHEM = lepvetowgt_postHEM+ "*qcdRespTailWeight";                                                                                                   
  // signal weights                                                                                                                                                                  
   
  //const TString sigwgt = lepvetowgt + "*btagFastSimWeight*isrWeightTight*(0.85*(Stop0l_nSoftb>=1) + 1.0*(Stop0l_nSoftb==0))";                                                     
  // sr weight w/o top/W SF                                                                                                                                                        
 const TString lepvetowgt_no_wtopsf = lumistr+"*1000*Stop0l_evtWeight*puWeight*BTagWeight*PrefireWeight*topTagWeight*restopTagWeight*wTagWeight*softbTagWeight*MuSF*ElecSF*TaSF";
  const TString lepvetowgt_no_wtopsf_16 = lumistr+"*1000*Stop0l_evtWeight*puWeight*BTagWeight*PrefireWeight*topTagWeight*restopTagWeight*wTagWeight*softbTagWeight*MuSF*ElecSF*TaSF";
  const TString lepvetowgt_no_wtopsf_17BE = lumistr+"*1000*Stop0l_evtWeight*17BtoEpuWeight*BTagWeight*PrefireWeight*topTagWeight*restopTagWeight*wTagWeight*softbTagWeight*MuSF*ElecSF*TaSF";
  const TString lepvetowgt_no_wtopsf_17F = lumistr+"*1000*Stop0l_evtWeight*17FpuWeight*BTagWeight*PrefireWeight*topTagWeight*restopTagWeight*wTagWeight*softbTagWeight*MuSF*ElecSF*TaSF";
  const TString lepvetowgt_no_wtopsf_18 = lumistr+"*1000*Stop0l_evtWeight*puWeight*BTagWeight*topTagWeight*restopTagWeight*wTagWeight*softbTagWeight*MuSF*ElecSF*TaSF";
  const TString sigwgt = lepvetowgt;

// triggers
const TString trigSR = " && Pass_trigger_MET";
const TString trigPhoCR = " && passtrigphoOR && origmet<200";
const TString phoBadEventRemoval = " && (!(lumi==189375 && event==430170481) && !(lumi==163479 && event==319690728) && !(lumi==24214 && event==55002562) && !(lumi==12510 && event==28415512) && !(lumi==16662 && event==32583938) && !(lumi==115657 && event==226172626) && !(lumi==149227 && event==431689582) && !(lumi==203626 && event==398201606))";
const TString trigDiLepCR = " && passtrigdilepOR && dileppt>200";
const TString datasel = " && Pass_EventFilter && Pass_HT && Pass_JetID && Pass_CaloMETRatio && (run <319077 ||run==1)";
  const TString sdatasel ="&& Pass_EventFilter && Pass_HT && Pass_JetID && Pass_CaloMETRatio && (run <319077 || (run >=319077 && Pass_exHEMVeto30)) ";
const TString dataselHEM = " && Pass_EventFilter && Pass_HT && Pass_JetID && Pass_CaloMETRatio  && Pass_exHEMVeto30 && (run >=319077 ||run==1)";
  //const TString sdataselHEM = " && Pass_EventFilter && Pass_HT30 && Pass_JetID && Pass_CaloMETRatio && Pass_exHEMVeto30";
const TString ttWSpikeRemovals = " && !(event==7811274) && !(event==956491)";
const TString qcdSpikeRemovals = "";
const TString dphi_invert = " && Pass_dPhiQCD30";
const TString dphi_cut = " && ( ((Stop0l_Mtb<175 && Stop0l_nTop==0 && Stop0l_nW==0 && Stop0l_nResolved==0) && Pass_dPhiMETLowDM) || (!(Stop0l_Mtb<175 && Stop0l_nTop==0 && Stop0l_nW==0 && Stop0l_nResolved==0) && Pass_dPhiMETHighDM) )"; // ( ((passLM) && dPhiLM) || ((!passLM) && dPhiHM) )

// ------------------------------------------------------------------------
// search regions and control regions

const TString baseline = "Pass_MET && Pass_NJets30";

std::map<TString, TString> cutMap = []{
    // Underscore "_" not allowed in the names!!!
    std::map<TString, TString> cmap = {
        {"lmNoDPhi",    "Stop0l_ISRJetPt>=200 && Stop0l_Mtb < 175 && Stop0l_nTop==0 && Stop0l_nW==0 && Stop0l_nResolved==0 && Stop0l_METSig>=10"},
        {"dPhiLM",      "Pass_dPhiMETLowDM"},
        {"hmNoDPhi",    "Stop0l_nJets30>=5 && Stop0l_nbtags>=1"},
        {"dPhiHM",      "Pass_dPhiMETHighDM"},
        {"invertDPhi",  "Pass_dPhiQCD30"},

        {"nb0",         "Stop0l_nbtags==0"},
        {"nb1",         "Stop0l_nbtags==1"},
        {"nbgeq1",      "Stop0l_nbtags>=1"},
        {"nb2",         "Stop0l_nbtags>=2"},
        {"nbeq2",       "Stop0l_nbtags==2"},
        {"nb3",         "Stop0l_nbtags>=3"},
        {"nivf0",       "Stop0l_nSoftb==0"},
        {"nivf1",       "Stop0l_nSoftb>=1"},
        {"lowptisr",    "Stop0l_ISRJetPt>=300 && Stop0l_ISRJetPt<500"},
        {"medptisr",    "Stop0l_ISRJetPt>=300"},
        {"highptisr",   "Stop0l_ISRJetPt>=500"},
        {"nj2to5",      "Stop0l_nJets>=2 && Stop0l_nJets<=5"},
        {"nj6",         "Stop0l_nJets>=6"},
        {"nj7",         "Stop0l_nJets>=7"},
        {"lowmtb",      "Stop0l_Mtb<175"},
        {"highmtb",     "Stop0l_Mtb>=175"},
        {"lowptb",      "Stop0l_Ptb<40"},
        {"medptb",      "Stop0l_Ptb>=40 && Stop0l_Ptb<70"},
        {"highptb",     "Stop0l_Ptb>=70"},
        {"lowptb12",    "Stop0l_Ptb<80"},
        {"medptb12",    "Stop0l_Ptb>=80 && Stop0l_Ptb<140"},
        {"highptb12",   "Stop0l_Ptb>=140"},
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
	{"htgt1000",    "Stop0l_HT>=1000"},	
	{"ht1000to1500","Stop0l_HT>=1000 && Stop0l_HT30<1500"},	
	{"htgt1500",    "Stop0l_HT>=1500"},	
	{"htlt1300",    "Stop0l_HT<1300"},	
	{"htgt1300",    "Stop0l_HT>=1300"},	
    };

    cmap["lm"] = createCutString("lmNoDPhi_dPhiLM", cmap);
    cmap["hm"] = createCutString("hmNoDPhi_dPhiHM", cmap);
    return cmap;
}();


std::map<TString, TString> labelMap{
  {"lowptisr", R"($300\leq\ptisr<500$\,GeV)"},
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
  {"medptisr", R"($\ptisr\geq300$\,GeV)"},
  {"highptisr", R"($\ptisr\geq500$\,GeV)"},
  {"nj7", R"($\nj\geq7$)"},
  {"highptb", R"($\ptb\geq70$\,GeV)"},
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
  {"highptb12", R"($\ptbonetwo\geq140$\,GeV)"},
  {"lowmtb", R"($\mtb<175$~\GeV)"},
  {"highmtb", R"($\mtb\geq175$~\GeV)"},
  {"nt1", R"($\nt=1$)"},
  {"medptb12", R"($80<\ptbonetwo<140$\,GeV)"},
  {"nrtgeq1", R"($\nrt\geq1$)"},
  {"nj6", R"($\nj\geq6$)"},
  {"nrtntnwgeq2", R"($(\nt+\nrt+\nw)\geq2$)"},
  {"nrtntnwgeq3", R"($(\nt+\nrt+\nw)\geq3$)"},
  {"htlt1000",    R"($\Ht<1000$)"},	
  {"htgt1000",    R"($\Ht\geq1000$)"},	
  {"ht1000to1500",R"($1000\leq\Ht<1500$)"},	
  {"htgt1500",    R"($\Ht\geq1500$)"},	
  {"htlt1300",    R"($\Ht<1300$)"},	
  {"htgt1300",    R"($\Ht\geq1300$)"},	
  {"lmNoDPhi",    R"(low $\Delta m$)"},
  {"hmNoDPhi",    R"(high $\Delta m$)"},
  
};

std::map<TString, TString> plotLabelMap{
  {"lowptisr", R"(300 #leq p_{T}(ISR) < 500)"},
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
  {"medptisr", R"(p_{T}(ISR) #geq 300)"},
  {"highptisr", R"(p_{T}(ISR) #geq 500)"},
  {"nj7", R"(N_{j} #geq 7)"},
  {"highptb", R"(p_{T}(b) #geq 70)"},
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
  {"highptb12", R"(p_{T}(b_{12}) #geq 140)"},
  {"lowmtb", R"(M_{T}(b_{1,2},#vec{p}_{T}^{miss}) < 175)"},
  {"highmtb", R"(M_{T}(b_{1,2},#vec{p}_{T}^{miss}) #geq 175)"},
  {"nt1", R"(N_{t} = 1)"},
  {"medptb12", R"(80 < p_{T}(b_{12}) < 140)"},
  {"nrtgeq1", R"(N_{res} #geq 1)"},
  {"nj6", R"(N_{j} #geq 6)"},
  {"nrtntnwgeq2", R"((N_{t}+N_{res}+N_{W}) #geq 2)"},
  {"nrtntnwgeq3", R"((N_{t}+N_{res}+N_{W}) #geq 3)"},
  {"htlt1000",    R"(H_{T}<1000)"},	
  {"htgt1000",    R"(H_{T} #geq 1000)"},	
  {"ht1000to1500",R"(1000#leqH_{T}<1500)"},	
  {"htgt1500",    R"(H_{T}#geq1500)"},	
  {"htlt1300",    R"(H_{T}<1300)"},	
  {"htgt1300",    R"(H_{T}#geq1300)"},	
  {"lmNoDPhi",    R"(low #Delta m)"},
  {"hmNoDPhi",    R"(high #Delta m)"},
};

std::vector<TString> srbins{
  //---------- low deltaM ----------
  // 0b, 0 or >=1 ivf
  "lm_nb0_nivf0_highptisr_nj2to5",
  "lm_nb0_nivf0_highptisr_nj6",
  "lm_nb0_nivf1_highptisr_nj2to5",
  "lm_nb0_nivf1_highptisr_nj6",

  // 1b, 0 or >=1 ivf
  "lm_nb1_nivf0_lowmtb_lowptisr_lowptb",
  "lm_nb1_nivf0_lowmtb_lowptisr_medptb",
  "lm_nb1_nivf0_lowmtb_highptisr_lowptb",
  "lm_nb1_nivf0_lowmtb_highptisr_medptb",
  // ---
  "lm_nb1_nivf1_lowmtb_medptisr_lowptb",

  // 2b
  "lm_nb2_lowmtb_lowptisr_lowptb12",
  "lm_nb2_lowmtb_lowptisr_medptb12",
  "lm_nb2_lowmtb_lowptisr_highptb12_nj7",
  "lm_nb2_lowmtb_highptisr_lowptb12",
  "lm_nb2_lowmtb_highptisr_medptb12",
  "lm_nb2_lowmtb_highptisr_highptb12_nj7",
  //---------- low deltaM ----------


  //---------- high deltaM ----------
  // low mtb
  "hm_nb1_lowmtb_nj7_nrtgeq1",
  "hm_nb2_lowmtb_nj7_nrtgeq1",

    //high mtb
    //0 taggged
  "hm_nb1_highmtb_nt0_nrt0_nw0_htgt1000",
  "hm_nb2_highmtb_nt0_nrt0_nw0_htgt1000",

    //nb1
    //1 tagged
  "hm_nb1_highmtb_ntgeq1_nrt0_nw0_htlt1000",
  "hm_nb1_highmtb_ntgeq1_nrt0_nw0_ht1000to1500",
  "hm_nb1_highmtb_ntgeq1_nrt0_nw0_htgt1500",
  "hm_nb1_highmtb_nt0_nrt0_nwgeq1_htlt1300",
  "hm_nb1_highmtb_nt0_nrt0_nwgeq1_htgt1300",
  "hm_nb1_highmtb_nt0_nrtgeq1_nw0_htlt1000",
  "hm_nb1_highmtb_nt0_nrtgeq1_nw0_ht1000to1500",
  "hm_nb1_highmtb_nt0_nrtgeq1_nw0_htgt1500",

    //1+1
  "hm_nb1_highmtb_ntgeq1_nrt0_nwgeq1",
  "hm_nb1_highmtb_ntgeq1_nrtgeq1_nw0",
  "hm_nb1_highmtb_nt0_nrtgeq1_nwgeq1",

    //nb2
    //1 tagged
  "hm_nbeq2_highmtb_nt1_nrt0_nw0_htlt1000",
  "hm_nbeq2_highmtb_nt1_nrt0_nw0_ht1000to1500",
  "hm_nbeq2_highmtb_nt1_nrt0_nw0_htgt1500",
  "hm_nbeq2_highmtb_nt0_nrt0_nw1_htlt1300",
  "hm_nbeq2_highmtb_nt0_nrt0_nw1_htgt1300",
  "hm_nbeq2_highmtb_nt0_nrt1_nw0_htlt1000",
  "hm_nbeq2_highmtb_nt0_nrt1_nw0_ht1000to1500",
  "hm_nbeq2_highmtb_nt0_nrt1_nw0_htgt1500",

  // 1+1eq
  "hm_nbeq2_highmtb_nt1_nrt0_nw1",
  "hm_nbeq2_highmtb_nt1_nrt1_nw0_htlt1300",
  "hm_nbeq2_highmtb_nt1_nrt1_nw0_htgt1300",
  "hm_nbeq2_highmtb_nt0_nrt1_nw1",

  // 2
  "hm_nbeq2_highmtb_nt2_nrt0_nw0",
  "hm_nbeq2_highmtb_nt0_nrt0_nw2",
  "hm_nbeq2_highmtb_nt0_nrt2_nw0_htlt1300",
  "hm_nbeq2_highmtb_nt0_nrt2_nw0_htgt1300",

  // 3
  "hm_nbeq2_highmtb_nrtntnwgeq3",

  // nb3
  //1 tagged
  "hm_nb3_highmtb_nt1_nrt0_nw0_htlt1000",
  "hm_nb3_highmtb_nt1_nrt0_nw0_ht1000to1500",
  "hm_nb3_highmtb_nt1_nrt0_nw0_htgt1500",
  "hm_nb3_highmtb_nt0_nrt0_nw1",
  "hm_nb3_highmtb_nt0_nrt1_nw0_htlt1000",
  "hm_nb3_highmtb_nt0_nrt1_nw0_ht1000to1500",
  "hm_nb3_highmtb_nt0_nrt1_nw0_htgt1500",

  //1+1
  "hm_nb3_highmtb_nt1_nrt0_nw1",
  "hm_nb3_highmtb_nt1_nrt1_nw0",
  "hm_nb3_highmtb_nt0_nrt1_nw1",

  //2
  "hm_nb3_highmtb_nt2_nrt0_nw0",
  "hm_nb3_highmtb_nt0_nrt0_nw2",
  "hm_nb3_highmtb_nt0_nrt2_nw0",

  // 3
  "hm_nb3_highmtb_nrtntnwgeq3",
  
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

std::map<TString, std::vector<int>> srMETbins{
  //---------- low deltaM ----------
  // 0b, 0 or >=1 ivf
  {"lm_nb0_nivf0_highptisr_nj2to5",              {     450, 550, 650, 750, 1000}},
  {"lm_nb0_nivf0_highptisr_nj6",                 {     450, 550, 650, 750, 1000}},
  {"lm_nb0_nivf1_highptisr_nj2to5",              {     450, 550, 650, 750, 1000}},
  {"lm_nb0_nivf1_highptisr_nj6",                 {     450, 550, 650, 750, 1000}},

  // 1b, 0 or >=1 ivf
  {"lm_nb1_nivf0_lowmtb_lowptisr_lowptb",        {300, 400, 500, 600, 1000}},
  {"lm_nb1_nivf0_lowmtb_lowptisr_medptb",        {300, 400, 500, 600, 1000}},
  {"lm_nb1_nivf0_lowmtb_highptisr_lowptb",            {450, 550, 650, 750, 1000}},
  {"lm_nb1_nivf0_lowmtb_highptisr_medptb",            {450, 550, 650, 750, 1000}},

  {"lm_nb1_nivf1_lowmtb_medptisr_lowptb",                 {300, 400, 500, 1000}},

  // 2b
  {"lm_nb2_lowmtb_lowptisr_lowptb12",            {300, 400, 500, 1000}},
  {"lm_nb2_lowmtb_lowptisr_medptb12",            {300, 400, 500, 1000}},
  {"lm_nb2_lowmtb_lowptisr_highptb12_nj7",       {300, 400, 500, 1000}},
  {"lm_nb2_lowmtb_highptisr_lowptb12",                {450, 550, 650, 1000}},
  {"lm_nb2_lowmtb_highptisr_medptb12",                {450, 550, 650, 1000}},
  {"lm_nb2_lowmtb_highptisr_highptb12_nj7",           {450, 550, 650, 1000}},
  //---------- low deltaM ----------


  //---------- high deltaM ----------
  // low mtb
  {"hm_nb1_lowmtb_nj7_nrtgeq1",                    {250, 300, 400, 500, 1000}},
  {"hm_nb2_lowmtb_nj7_nrtgeq1",                    {250, 300, 400, 500, 1000}},

    //high mtb
    //0 taggged
  {"hm_nb1_highmtb_nt0_nrt0_nw0_htgt1000",         {250, 350, 450, 550, 1000}},
  {"hm_nb2_highmtb_nt0_nrt0_nw0_htgt1000",         {250, 350, 450, 550, 1000}},

    //nb1
  {"hm_nb1_highmtb_ntgeq1_nrt0_nw0_htlt1000",      {250, 550, 650, 1000}},
  {"hm_nb1_highmtb_ntgeq1_nrt0_nw0_ht1000to1500",  {250, 550, 650, 1000}},
  {"hm_nb1_highmtb_ntgeq1_nrt0_nw0_htgt1500",      {250, 550, 650, 1000}},
  {"hm_nb1_highmtb_nt0_nrt0_nwgeq1_htlt1300",      {250, 350, 450, 1000}},
  {"hm_nb1_highmtb_nt0_nrt0_nwgeq1_htgt1300",      {250, 350, 450, 1000}},
  {"hm_nb1_highmtb_nt0_nrtgeq1_nw0_htlt1000",      {250, 350, 450, 550, 650, 1000}},
  {"hm_nb1_highmtb_nt0_nrtgeq1_nw0_ht1000to1500",  {250, 350, 450, 550, 650, 1000}},
  {"hm_nb1_highmtb_nt0_nrtgeq1_nw0_htgt1500",      {250, 350, 450, 550, 650, 1000}},

    //1+1
  {"hm_nb1_highmtb_ntgeq1_nrt0_nwgeq1",            {250, 550, 1000}},
  {"hm_nb1_highmtb_ntgeq1_nrtgeq1_nw0",            {250, 550, 1000}},
  {"hm_nb1_highmtb_nt0_nrtgeq1_nwgeq1",            {250, 550, 1000}},

    //nb2
  {"hm_nbeq2_highmtb_nt1_nrt0_nw0_htlt1000",       {250, 550, 650, 1000}},
  {"hm_nbeq2_highmtb_nt1_nrt0_nw0_ht1000to1500",   {250, 550, 650, 1000}},
  {"hm_nbeq2_highmtb_nt1_nrt0_nw0_htgt1500",       {250, 550, 650, 1000}},
  {"hm_nbeq2_highmtb_nt0_nrt0_nw1_htlt1300",       {250, 350, 450, 1000}},
  {"hm_nbeq2_highmtb_nt0_nrt0_nw1_htgt1300",       {250, 350, 450, 1000}},
  {"hm_nbeq2_highmtb_nt0_nrt1_nw0_htlt1000",       {250, 350, 450, 550, 650, 1000}},
  {"hm_nbeq2_highmtb_nt0_nrt1_nw0_ht1000to1500",   {250, 350, 450, 550, 650, 1000}},
  {"hm_nbeq2_highmtb_nt0_nrt1_nw0_htgt1500",       {250, 350, 450, 550, 650, 1000}},

  // 1+1
  {"hm_nbeq2_highmtb_nt1_nrt0_nw1",                {250, 550, 1000}},
  {"hm_nbeq2_highmtb_nt1_nrt1_nw0_htlt1300",       {250, 350, 450, 1000}},
  {"hm_nbeq2_highmtb_nt1_nrt1_nw0_htgt1300",       {250, 350, 450, 1000}},
  {"hm_nbeq2_highmtb_nt0_nrt1_nw1",                {250, 550, 1000}},

  // 2
  {"hm_nbeq2_highmtb_nt2_nrt0_nw0",       	   {250, 450, 1000}},
  {"hm_nbeq2_highmtb_nt0_nrt0_nw2",                {250, 1000}},
  {"hm_nbeq2_highmtb_nt0_nrt2_nw0_htlt1300",       {250, 450, 1000}},
  {"hm_nbeq2_highmtb_nt0_nrt2_nw0_htgt1300",       {250, 450, 1000}},

  // 3
  {"hm_nbeq2_highmtb_nrtntnwgeq3",        	   {250, 1000}},

        // nb3
  //1 tagged
  {"hm_nb3_highmtb_nt1_nrt0_nw0_htlt1000",         {250, 350, 550, 1000}},
  {"hm_nb3_highmtb_nt1_nrt0_nw0_ht1000to1500",     {250, 350, 550, 1000}},
  {"hm_nb3_highmtb_nt1_nrt0_nw0_htgt1500",         {250, 350, 550, 1000}},
  {"hm_nb3_highmtb_nt0_nrt0_nw1",                  {250, 350, 550, 1000}},
  {"hm_nb3_highmtb_nt0_nrt1_nw0_htlt1000",         {250, 350, 550, 1000}},
  {"hm_nb3_highmtb_nt0_nrt1_nw0_ht1000to1500",     {250, 350, 550, 1000}},
  {"hm_nb3_highmtb_nt0_nrt1_nw0_htgt1500",         {250, 350, 550, 1000}},

  //1+1
  {"hm_nb3_highmtb_nt1_nrt0_nw1",                  {250, 1000}},
  {"hm_nb3_highmtb_nt1_nrt1_nw0",         	   {250, 350, 1000}},
  {"hm_nb3_highmtb_nt0_nrt1_nw1",                  {250, 1000}},

  //2
  {"hm_nb3_highmtb_nt2_nrt0_nw0",         	   {250, 1000}},
  {"hm_nb3_highmtb_nt0_nrt0_nw2",                  {250, 1000}},
  {"hm_nb3_highmtb_nt0_nrt2_nw0",         	   {250, 350, 1000}},

  // 3
  {"hm_nb3_highmtb_nrtntnwgeq3",                   {250, 1000}},
  
  //---------- high deltaM ----------

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
  {"lm_nb0_nivf0_highptisr_nj6",                 "lm_nb0_nivf0_highptisr_nj6"},
  {"lm_nb0_nivf1_highptisr_nj2to5",              "lm_nb0_nivf1_highptisr_nj2to5"},
  {"lm_nb0_nivf1_highptisr_nj6",                 "lm_nb0_nivf1_highptisr_nj6"},

  // 1b, 0 or >=1 ivf
  {"lm_nb1_nivf0_lowmtb_lowptisr_lowptb",        "lm_nb1_nivf0_lowmtb_lowptisr_lowptb"},
  {"lm_nb1_nivf0_lowmtb_lowptisr_medptb",        "lm_nb1_nivf0_lowmtb_lowptisr_medptb"},
  {"lm_nb1_nivf0_lowmtb_highptisr_lowptb",       "lm_nb1_nivf0_lowmtb_highptisr_lowptb"},
  {"lm_nb1_nivf0_lowmtb_highptisr_medptb",       "lm_nb1_nivf0_lowmtb_highptisr_medptb"},
  {"lm_nb1_nivf1_lowmtb_medptisr_lowptb",        "lm_nb1_nivf1_lowmtb_medptisr_lowptb"},

  // 2b
  {"lm_nb2_lowmtb_lowptisr_lowptb12",            "lm_nb2_lowmtb_lowptisr_lowptb12"},
  {"lm_nb2_lowmtb_lowptisr_medptb12",            "lm_nb2_lowmtb_lowptisr_medptb12"},
  {"lm_nb2_lowmtb_lowptisr_highptb12_nj7",       "lm_nb2_lowmtb_lowptisr_highptb12_nj7"},
  {"lm_nb2_lowmtb_highptisr_lowptb12",           "lm_nb2_lowmtb_highptisr_lowptb12"},
  {"lm_nb2_lowmtb_highptisr_medptb12",           "lm_nb2_lowmtb_highptisr_medptb12"},
  {"lm_nb2_lowmtb_highptisr_highptb12_nj7",      "lm_nb2_lowmtb_highptisr_highptb12_nj7"},
  //---------- low deltaM ----------


  //---------- high deltaM ----------
  // low mtb
  {"hm_nb1_lowmtb_nj7_nrtgeq1",                  	"hm_nb1_lowmtb_nj7"},
  {"hm_nb2_lowmtb_nj7_nrtgeq1",			 	"hm_nb2_lowmtb_nj7"},

    //high mtb
    //0 taggged
  {"hm_nb1_highmtb_nt0_nrt0_nw0_htgt1000",		"hm_nb1_highmtb_htgt1000"},
  {"hm_nb2_highmtb_nt0_nrt0_nw0_htgt1000",		"hm_nb2_highmtb_htgt1000"},

    //nb1
    //1 tagged
  {"hm_nb1_highmtb_ntgeq1_nrt0_nw0_htlt1000",		"hm_nb1_highmtb_htlt1000"},
  {"hm_nb1_highmtb_ntgeq1_nrt0_nw0_ht1000to1500",	"hm_nb1_highmtb_ht1000to1500"},
  {"hm_nb1_highmtb_ntgeq1_nrt0_nw0_htgt1500",		"hm_nb1_highmtb_htgt1500"},
  {"hm_nb1_highmtb_nt0_nrt0_nwgeq1_htlt1300",		"hm_nb1_highmtb_htlt1300"},
  {"hm_nb1_highmtb_nt0_nrt0_nwgeq1_htgt1300",		"hm_nb1_highmtb_htgt1300"},
  {"hm_nb1_highmtb_nt0_nrtgeq1_nw0_htlt1000",		"hm_nb1_highmtb_htlt1000"},
  {"hm_nb1_highmtb_nt0_nrtgeq1_nw0_ht1000to1500",	"hm_nb1_highmtb_ht1000to1500"},
  {"hm_nb1_highmtb_nt0_nrtgeq1_nw0_htgt1500",		"hm_nb1_highmtb_htgt1500"},

    //1+1
  {"hm_nb1_highmtb_ntgeq1_nrt0_nwgeq1",		 	"hm_nb1_highmtb"},
  {"hm_nb1_highmtb_ntgeq1_nrtgeq1_nw0",		 	"hm_nb1_highmtb"},
  {"hm_nb1_highmtb_nt0_nrtgeq1_nwgeq1",		 	"hm_nb1_highmtb"},

    //  nb2
    //1 tagged
  {"hm_nbeq2_highmtb_nt1_nrt0_nw0_htlt1000",		"hm_nbeq2_highmtb_htlt1000"},
  {"hm_nbeq2_highmtb_nt1_nrt0_nw0_ht1000to1500",	"hm_nbeq2_highmtb_ht1000to1500"},
  {"hm_nbeq2_highmtb_nt1_nrt0_nw0_htgt1500",		"hm_nbeq2_highmtb_htgt1500"},
  {"hm_nbeq2_highmtb_nt0_nrt0_nw1_htlt1300",		"hm_nbeq2_highmtb_htlt1300"},
  {"hm_nbeq2_highmtb_nt0_nrt0_nw1_htgt1300",		"hm_nbeq2_highmtb_htgt1300"},
  {"hm_nbeq2_highmtb_nt0_nrt1_nw0_htlt1000",		"hm_nbeq2_highmtb_htlt1000"},
  {"hm_nbeq2_highmtb_nt0_nrt1_nw0_ht1000to1500",	"hm_nbeq2_highmtb_ht1000to1500"},
  {"hm_nbeq2_highmtb_nt0_nrt1_nw0_htgt1500",		"hm_nbeq2_highmtb_htgt1500"},

  // 1+1eq
  {"hm_nbeq2_highmtb_nt1_nrt0_nw1",		 	"hm_nbeq2_highmtb"},
  {"hm_nbeq2_highmtb_nt1_nrt1_nw0_htlt1300",		"hm_nbeq2_highmtb_htlt1300"},
  {"hm_nbeq2_highmtb_nt1_nrt1_nw0_htgt1300",		"hm_nbeq2_highmtb_htgt1300"},
  {"hm_nbeq2_highmtb_nt0_nrt1_nw1",		 	"hm_nbeq2_highmtb"},

  // 2
  {"hm_nbeq2_highmtb_nt2_nrt0_nw0",			"hm_nbeq2_highmtb"},
  {"hm_nbeq2_highmtb_nt0_nrt0_nw2",		 	"hm_nbeq2_highmtb"},
  {"hm_nbeq2_highmtb_nt0_nrt2_nw0_htlt1300",		"hm_nbeq2_highmtb_htlt1300"},
  {"hm_nbeq2_highmtb_nt0_nrt2_nw0_htgt1300",		"hm_nbeq2_highmtb_htgt1300"},

  // 3
  {"hm_nbeq2_highmtb_nrtntnwgeq3",			"hm_nbeq2_highmtb"},

        // nb3
  //1 tagged
  {"hm_nb3_highmtb_nt1_nrt0_nw0_htlt1000",		"hm_nb3_highmtb_htlt1000"},
  {"hm_nb3_highmtb_nt1_nrt0_nw0_ht1000to1500",		"hm_nb3_highmtb_ht1000to1500"},
  {"hm_nb3_highmtb_nt1_nrt0_nw0_htgt1500",		"hm_nb3_highmtb_htgt1500"},
  {"hm_nb3_highmtb_nt0_nrt0_nw1",		 	"hm_nb3_highmtb"},
  {"hm_nb3_highmtb_nt0_nrt1_nw0_htlt1000",		"hm_nb3_highmtb_htlt1000"},
  {"hm_nb3_highmtb_nt0_nrt1_nw0_ht1000to1500",		"hm_nb3_highmtb_ht1000to1500"},
  {"hm_nb3_highmtb_nt0_nrt1_nw0_htgt1500",		"hm_nb3_highmtb_htgt1500"},

  //1+1
  {"hm_nb3_highmtb_nt1_nrt0_nw1",		 	"hm_nb3_highmtb"},
  {"hm_nb3_highmtb_nt1_nrt1_nw0",			"hm_nb3_highmtb"},
  {"hm_nb3_highmtb_nt0_nrt1_nw1",		 	"hm_nb3_highmtb"},

  //2
  {"hm_nb3_highmtb_nt2_nrt0_nw0",			"hm_nb3_highmtb"},
  {"hm_nb3_highmtb_nt0_nrt0_nw2",		 	"hm_nb3_highmtb"},
  {"hm_nb3_highmtb_nt0_nrt2_nw0",			"hm_nb3_highmtb"},

  // 3
  {"hm_nb3_highmtb_nrtntnwgeq3",		 	"hm_nb3_highmtb"},
  
  //---------- high deltaM ----------

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
  {"lm_nb0_nivf0_highptisr_nj2to5",              "lm_nb0_nivf0_highptisr_nj2to5"},
  {"lm_nb0_nivf0_highptisr_nj6",                 "lm_nb0_nivf0_highptisr_nj6"},
  {"lm_nb0_nivf1_highptisr_nj2to5",              "lm_nb0_nivf1_highptisr_nj2to5"},
  {"lm_nb0_nivf1_highptisr_nj6",                 "lm_nb0_nivf1_highptisr_nj6"},

  // 1b, 0 or >=1 ivf
  {"lm_nb1_nivf0_lowmtb_lowptisr_lowptb",        "lm_nb1_nivf0_lowmtb_lowptisr_lowptb"},
  {"lm_nb1_nivf0_lowmtb_lowptisr_medptb",        "lm_nb1_nivf0_lowmtb_lowptisr_medptb"},
  {"lm_nb1_nivf0_lowmtb_highptisr_lowptb",       "lm_nb1_nivf0_lowmtb_highptisr_lowptb"},
  {"lm_nb1_nivf0_lowmtb_highptisr_medptb",       "lm_nb1_nivf0_lowmtb_highptisr_medptb"},
  {"lm_nb1_nivf1_lowmtb_medptisr_lowptb",        "lm_nb1_nivf1_lowmtb_medptisr_lowptb"},

  // 2b
  {"lm_nb2_lowmtb_lowptisr_lowptb12",            "lm_nb2_lowmtb_lowptisr_lowptb12"},
  {"lm_nb2_lowmtb_lowptisr_medptb12",            "lm_nb2_lowmtb_lowptisr_medptb12"},
  {"lm_nb2_lowmtb_lowptisr_highptb12_nj7",       "lm_nb2_lowmtb_lowptisr_highptb12_nj7"},
  {"lm_nb2_lowmtb_highptisr_lowptb12",           "lm_nb2_lowmtb_highptisr_lowptb12"},
  {"lm_nb2_lowmtb_highptisr_medptb12",           "lm_nb2_lowmtb_highptisr_medptb12"},
  {"lm_nb2_lowmtb_highptisr_highptb12_nj7",      "lm_nb2_lowmtb_highptisr_highptb12_nj7"},
  //---------- low deltaM ----------


  //---------- high deltaM ----------
  // low mtb
  {"hm_nb1_lowmtb_nj7_nrtgeq1",                  	"hm_nb1_lowmtb_nj7"},
  {"hm_nb2_lowmtb_nj7_nrtgeq1",			 	"hm_nb2_lowmtb_nj7"},

    //high mtb
    //0 taggged
  {"hm_nb1_highmtb_nt0_nrt0_nw0_htgt1000",		"hm_nb1_highmtb_htgt1000"},
  {"hm_nb2_highmtb_nt0_nrt0_nw0_htgt1000",		"hm_nb2_highmtb_htgt1000"},

    //  nb1
    //1 tagged
  {"hm_nb1_highmtb_ntgeq1_nrt0_nw0_htlt1000",		"hm_nb1_highmtb_htlt1000"},
  {"hm_nb1_highmtb_ntgeq1_nrt0_nw0_ht1000to1500",	"hm_nb1_highmtb_ht1000to1500"},
  {"hm_nb1_highmtb_ntgeq1_nrt0_nw0_htgt1500",		"hm_nb1_highmtb_htgt1500"},
  {"hm_nb1_highmtb_nt0_nrt0_nwgeq1_htlt1300",		"hm_nb1_highmtb_htlt1300"},
  {"hm_nb1_highmtb_nt0_nrt0_nwgeq1_htgt1300",		"hm_nb1_highmtb_htgt1300"},
  {"hm_nb1_highmtb_nt0_nrtgeq1_nw0_htlt1000",		"hm_nb1_highmtb_htlt1000"},
  {"hm_nb1_highmtb_nt0_nrtgeq1_nw0_ht1000to1500",	"hm_nb1_highmtb_ht1000to1500"},
  {"hm_nb1_highmtb_nt0_nrtgeq1_nw0_htgt1500",		"hm_nb1_highmtb_htgt1500"},

    //1+1
  {"hm_nb1_highmtb_ntgeq1_nrt0_nwgeq1",		 	"hm_nb1_highmtb"},
  {"hm_nb1_highmtb_ntgeq1_nrtgeq1_nw0",		 	"hm_nb1_highmtb"},
  {"hm_nb1_highmtb_nt0_nrtgeq1_nwgeq1",		 	"hm_nb1_highmtb"},

    //  nb2
    //1 tagged
  {"hm_nbeq2_highmtb_nt1_nrt0_nw0_htlt1000",		"hm_nbeq2_highmtb_htlt1000"},
  {"hm_nbeq2_highmtb_nt1_nrt0_nw0_ht1000to1500",	"hm_nbeq2_highmtb_ht1000to1500"},
  {"hm_nbeq2_highmtb_nt1_nrt0_nw0_htgt1500",		"hm_nbeq2_highmtb_htgt1500"},
  {"hm_nbeq2_highmtb_nt0_nrt0_nw1_htlt1300",		"hm_nbeq2_highmtb_htlt1300"},
  {"hm_nbeq2_highmtb_nt0_nrt0_nw1_htgt1300",		"hm_nbeq2_highmtb_htgt1300"},
  {"hm_nbeq2_highmtb_nt0_nrt1_nw0_htlt1000",		"hm_nbeq2_highmtb_htlt1000"},
  {"hm_nbeq2_highmtb_nt0_nrt1_nw0_ht1000to1500",	"hm_nbeq2_highmtb_ht1000to1500"},
  {"hm_nbeq2_highmtb_nt0_nrt1_nw0_htgt1500",		"hm_nbeq2_highmtb_htgt1500"},

  // 1+1eq
  {"hm_nbeq2_highmtb_nt1_nrt0_nw1",		 	"hm_nbeq2_highmtb"},
  {"hm_nbeq2_highmtb_nt1_nrt1_nw0_htlt1300",		"hm_nbeq2_highmtb_htlt1300"},
  {"hm_nbeq2_highmtb_nt1_nrt1_nw0_htgt1300",		"hm_nbeq2_highmtb_htgt1300"},
  {"hm_nbeq2_highmtb_nt0_nrt1_nw1",		 	"hm_nbeq2_highmtb"},

  // 2
  {"hm_nbeq2_highmtb_nt2_nrt0_nw0",			"hm_nbeq2_highmtb"},
  {"hm_nbeq2_highmtb_nt0_nrt0_nw2",		 	"hm_nbeq2_highmtb"},
  {"hm_nbeq2_highmtb_nt0_nrt2_nw0_htlt1300",		"hm_nbeq2_highmtb_htlt1300"},
  {"hm_nbeq2_highmtb_nt0_nrt2_nw0_htgt1300",		"hm_nbeq2_highmtb_htgt1300"},

  // 3
  {"hm_nbeq2_highmtb_nrtntnwgeq3",			"hm_nbeq2_highmtb"},

        // nb3
  //1 tagged
  {"hm_nb3_highmtb_nt1_nrt0_nw0_htlt1000",		"hm_nb3_highmtb_htlt1000"},
  {"hm_nb3_highmtb_nt1_nrt0_nw0_ht1000to1500",		"hm_nb3_highmtb_ht1000to1500"},
  {"hm_nb3_highmtb_nt1_nrt0_nw0_htgt1500",		"hm_nb3_highmtb_htgt1500"},
  {"hm_nb3_highmtb_nt0_nrt0_nw1",		 	"hm_nb3_highmtb"},
  {"hm_nb3_highmtb_nt0_nrt1_nw0_htlt1000",		"hm_nb3_highmtb_htlt1000"},
  {"hm_nb3_highmtb_nt0_nrt1_nw0_ht1000to1500",		"hm_nb3_highmtb_ht1000to1500"},
  {"hm_nb3_highmtb_nt0_nrt1_nw0_htgt1500",		"hm_nb3_highmtb_htgt1500"},

  //1+1
  {"hm_nb3_highmtb_nt1_nrt0_nw1",		 	"hm_nb3_highmtb"},
  {"hm_nb3_highmtb_nt1_nrt1_nw0",			"hm_nb3_highmtb"},
  {"hm_nb3_highmtb_nt0_nrt1_nw1",		 	"hm_nb3_highmtb"},

  //2
  {"hm_nb3_highmtb_nt2_nrt0_nw0",			"hm_nb3_highmtb"},
  {"hm_nb3_highmtb_nt0_nrt0_nw2",		 	"hm_nb3_highmtb"},
  {"hm_nb3_highmtb_nt0_nrt2_nw0",			"hm_nb3_highmtb"},

  // 3
  {"hm_nb3_highmtb_nrtntnwgeq3",		 	"hm_nb3_highmtb"},

  //---------- high deltaM ----------

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
    s.second.ReplaceAll("lowmtb_nj7", "lowmtb_nj7_nrtgeq1");
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
  {"lm_nb0_nivf0_highptisr_nj6",                 {     450, 550, 650, 750, 1000}},
  {"lm_nb0_nivf1_highptisr_nj2to5",              {     450, 550, 650,      1000}}, // merge last 2 bins
  {"lm_nb0_nivf1_highptisr_nj6",                 {     450,                1000}}, // merge last 3 bins
  
  // 1b, 0 or >=1 ivf
  {"lm_nb1_nivf0_lowmtb_lowptisr_lowptb",        {300, 400,           1000}}, // merge last 3 bins
  {"lm_nb1_nivf0_lowmtb_lowptisr_medptb",        {300, 400,           1000}}, // merge last 3 bins
  {"lm_nb1_nivf0_lowmtb_highptisr_lowptb",            {450, 550, 650,      1000}}, // merge last 2 bins
  {"lm_nb1_nivf0_lowmtb_highptisr_medptb",            {450, 550, 650,      1000}}, // merge last 2 bins
  
  {"lm_nb1_nivf1_lowmtb_medptisr_lowptb",        {300, 400,      1000}}, // merge last 2 bins
  
  // 2b
  {"lm_nb2_lowmtb_lowptisr_lowptb12",            {300,           1000}}, // merge all 3 bins
  {"lm_nb2_lowmtb_lowptisr_medptb12",            {300, 400,      1000}}, // merge last 2 bins
  {"lm_nb2_lowmtb_lowptisr_highptb12_nj7",       {300, 400,      1000}}, // merge last 2 bins
  {"lm_nb2_lowmtb_highptisr_lowptb12",                {450,           1000}}, // merge all 3 bins
  {"lm_nb2_lowmtb_highptisr_medptb12",                {450,           1000}}, // merge all 3 bins
  {"lm_nb2_lowmtb_highptisr_highptb12_nj7",           {450, 550,      1000}}, // merge last 2 bins
  //---------- low deltaM ----------
  
  //---------- high deltaM ----------
  // low mtb
  {"hm_nb1_lowmtb_nj7_nrtgeq1",                    {250, 300, 400, 500, 1000}},
  {"hm_nb2_lowmtb_nj7_nrtgeq1",                    {250, 300, 400, 500, 1000}},

  //high mtb
  //0 taggged
  {"hm_nb1_highmtb_nt0_nrt0_nw0_htgt1000",         {250, 350, 450, 550, 1000}},
  {"hm_nb2_highmtb_nt0_nrt0_nw0_htgt1000",         {250, 350, 450, 550, 1000}},

    //nb1
  {"hm_nb1_highmtb_ntgeq1_nrt0_nw0_htlt1000",      {250, 550, 650, 1000}},
  {"hm_nb1_highmtb_ntgeq1_nrt0_nw0_ht1000to1500",  {250, 550, 650, 1000}},
  {"hm_nb1_highmtb_ntgeq1_nrt0_nw0_htgt1500",      {250, 550, 650, 1000}},
  {"hm_nb1_highmtb_nt0_nrt0_nwgeq1_htlt1300",      {250, 350, 450, 1000}},
  {"hm_nb1_highmtb_nt0_nrt0_nwgeq1_htgt1300",      {250, 350, 450, 1000}},
  {"hm_nb1_highmtb_nt0_nrtgeq1_nw0_htlt1000",      {250, 350, 450, 550, 650, 1000}},
  {"hm_nb1_highmtb_nt0_nrtgeq1_nw0_ht1000to1500",  {250, 350, 450, 550, 650, 1000}},
  {"hm_nb1_highmtb_nt0_nrtgeq1_nw0_htgt1500",      {250, 350, 450, 550, 650, 1000}},

    //1+1
  {"hm_nb1_highmtb_ntgeq1_nrt0_nwgeq1",            {250, 550, 1000}},
  {"hm_nb1_highmtb_ntgeq1_nrtgeq1_nw0",            {250, 550, 1000}},
  {"hm_nb1_highmtb_nt0_nrtgeq1_nwgeq1",            {250, 550, 1000}},

    //nb2
  {"hm_nbeq2_highmtb_nt1_nrt0_nw0_htlt1000",       {250, 550, 650, 1000}},
  {"hm_nbeq2_highmtb_nt1_nrt0_nw0_ht1000to1500",   {250, 550, 650, 1000}},
  {"hm_nbeq2_highmtb_nt1_nrt0_nw0_htgt1500",       {250, 550, 650, 1000}},
  {"hm_nbeq2_highmtb_nt0_nrt0_nw1_htlt1300",       {250, 350, 450, 1000}},
  {"hm_nbeq2_highmtb_nt0_nrt0_nw1_htgt1300",       {250, 350, 450, 1000}},
  {"hm_nbeq2_highmtb_nt0_nrt1_nw0_htlt1000",       {250, 350, 450, 550, 650, 1000}},
  {"hm_nbeq2_highmtb_nt0_nrt1_nw0_ht1000to1500",   {250, 350, 450, 550, 650, 1000}},
  {"hm_nbeq2_highmtb_nt0_nrt1_nw0_htgt1500",       {250, 350, 450, 550, 650, 1000}},

  // 1+1
  {"hm_nbeq2_highmtb_nt1_nrt0_nw1",                {250, 550, 1000}},
  {"hm_nbeq2_highmtb_nt1_nrt1_nw0_htlt1300",       {250, 350, 450, 1000}},
  {"hm_nbeq2_highmtb_nt1_nrt1_nw0_htgt1300",       {250, 350, 450, 1000}},
  {"hm_nbeq2_highmtb_nt0_nrt1_nw1",                {250, 550, 1000}},

  // 2
  {"hm_nbeq2_highmtb_nt2_nrt0_nw0",       	   {250, 450, 1000}},
  {"hm_nbeq2_highmtb_nt0_nrt0_nw2",                {250, 1000}},
  {"hm_nbeq2_highmtb_nt0_nrt2_nw0_htlt1300",       {250, 450, 1000}},
  {"hm_nbeq2_highmtb_nt0_nrt2_nw0_htgt1300",       {250, 450, 1000}},

  // 3
  {"hm_nbeq2_highmtb_nrtntnwgeq3",        	   {250, 1000}},

        // nb3
  //1 tagged
  {"hm_nb3_highmtb_nt1_nrt0_nw0_htlt1000",         {250, 350, 550, 1000}},
  {"hm_nb3_highmtb_nt1_nrt0_nw0_ht1000to1500",     {250, 350, 550, 1000}},
  {"hm_nb3_highmtb_nt1_nrt0_nw0_htgt1500",         {250, 350, 550, 1000}},
  {"hm_nb3_highmtb_nt0_nrt0_nw1",                  {250, 350, 550, 1000}},
  {"hm_nb3_highmtb_nt0_nrt1_nw0_htlt1000",         {250, 350, 550, 1000}},
  {"hm_nb3_highmtb_nt0_nrt1_nw0_ht1000to1500",     {250, 350, 550, 1000}},
  {"hm_nb3_highmtb_nt0_nrt1_nw0_htgt1500",         {250, 350, 550, 1000}},

  //1+1
  {"hm_nb3_highmtb_nt1_nrt0_nw1",                  {250, 1000}},
  {"hm_nb3_highmtb_nt1_nrt1_nw0",         	   {250, 350, 1000}},
  {"hm_nb3_highmtb_nt0_nrt1_nw1",                  {250, 1000}},

  //2
  {"hm_nb3_highmtb_nt2_nrt0_nw0",         	   {250, 1000}},
  {"hm_nb3_highmtb_nt0_nrt0_nw2",                  {250, 1000}},
  {"hm_nb3_highmtb_nt0_nrt2_nw0",         	   {250, 350, 1000}},

  // 3
  {"hm_nb3_highmtb_nrtntnwgeq3",                   {250, 1000}},
  
  //---------- high deltaM ----------

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
//    config.addSample("qcd",         "QCD",           "lepcr/qcd",             onelepcrwgt, datasel + trigLepCR + lepcrsel);
  }else{
    config.addSample("singlelep",        "Data",          datadir+"met",                   "1.0",          datasel + trigSR + revert_vetoes);

    //config.addSample("ttW-2018postHEM",          "ttW",           inputdir_2018+"ttW",             lepselwgt_postHEM,      dataselHEM + revert_vetoes + ttWSpikeRemovals);
    //config.addSample("ttZ-2018postHEM",          "ttZ",           inputdir_2018+"ttZ",             lepselwgt_postHEM,      dataselHEM + revert_vetoes);
    //config.addSample("diboson-2018postHEM",      "Diboson",       inputdir_2018+"diboson",         lepselwgt_postHEM,      dataselHEM + revert_vetoes);
    //config.addSample("qcd-2018postHEM",          "QCD",           inputdir_2018+"qcd",             lepselwgt_postHEM,      dataselHEM + revert_vetoes);
  }

  // samples for sr categories
  config.addSample("ttbar-2016-sr",       "t#bar{t}",      "ttbar",                lepvetowgt+"*ISRWeight", datasel + vetoes);
  config.addSample("wjets-2016-sr",       "W+jets",        "wjets",                lepvetowgt, datasel + vetoes);
  config.addSample("tW-2016-sr",          "tW",            "tW",                   lepvetowgt, datasel + vetoes);
  config.addSample("ttW-2016-sr",         "ttW",           "ttW",                  lepvetowgt, datasel + vetoes);
  config.addSample("ttZ-2016-sr",         "ttZ",           "ttZ",                  lepvetowgt, datasel + vetoes);


  // samples for splitting the TF (optional, see l.splitTF)
  if (SPLITTF){
    config.addSample("ttbar-2016-sr-int",       "t#bar{t}",      "ttbar",                lepvetowgt+"*ISRWeight", datasel + vetoes);
    config.addSample("wjets-2016-sr-int",       "W+jets",        "wjets",                lepvetowgt, datasel + vetoes);
    config.addSample("tW-2016-sr-int",          "tW",            "tW",                   lepvetowgt, datasel + vetoes);
    config.addSample("ttW-2016-sr-int",         "ttW",           "ttW",                  lepvetowgt, datasel + vetoes);
    config.addSample("ttZ-2016-sr-int",         "ttZ",           "ttZ",                  lepvetowgt, datasel + vetoes);

  }

  config.sel = baseline;
  config.categories = srbins;
  config.catMaps = srCatMap();
  config.crCatMaps = lepCatMap();

  return config;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

BaseConfig srConfig(){
  BaseConfig     config;

  config.inputdir = inputdir;
  config.outputdir = outputdir+"/testSR";
  config.header = "#sqrt{s} = 13 TeV, "+lumistr+" fb^{-1}";

  config.addSample("ttbar",       "t#bar{t}",      "ttbar",        "1.0", datasel + vetoes);
  config.addSample("wjets",       "W+jets",        "wjets",        "1.0", datasel + vetoes);
  //config.addSample("znunu",       "Z#rightarrow#nu#nu", "znunu",   "1.0", datasel + vetoes);
  //config.addSample("qcd",         "QCD",           "qcd",          "1.0", datasel + vetoes + qcdSpikeRemovals);
  config.addSample("tW",          "tW",            "tW",           "1.0", datasel + vetoes);
  config.addSample("ttW",         "ttW",           "ttW",          "1.0", datasel + vetoes);
  //config.addSample("ttZ",         "ttZ",           "ttZ",          "1.0", datasel + vetoes);
  //config.addSample("diboson",     "Diboson",       "diboson",      "1.0", datasel + vetoes);

  // config.addSample("ttbar-notau",       "t#bar{t}",      "ttbar",        "1.0", datasel + vetoes_elemu);
  //config.addSample("wjets-notau",       "W+jets",        "wjets",        "1.0", datasel + vetoes_elemu);
  //config.addSample("znunu-notau",       "Z#rightarrow#nu#nu", "znunu",   "1.0", datasel + vetoes_elemu);
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
  config.outputdir = outputdir+"/QCD";
  config.header = "#sqrt{s} = 13 TeV, "+lumistr+" fb^{-1}";

  // qcdcr
  config.addSample("data-run2-cr",     "Data",             "data_run2",  "1.0",      sdatasel + trigSR + vetoes + dphi_invert);
  config.addSample("data-16-cr",     "Data",             "data_2016",  "1.0",      datasel + trigSR + vetoes + dphi_invert);
  config.addSample("qcd-16-cr",      "QCD",              "qcd_smear_sf_2016",       qcdwgt,      datasel + dphi_invert + qcdSpikeRemovals);
  config.addSample("qcd-withveto-16-cr",  "QCD",         "qcd_smear_sf_2016",       qcdvetowgt,  datasel + vetoes + dphi_invert + qcdSpikeRemovals);
  config.addSample("qcd-withveto-16-sr",  "QCD",         "qcd_smear_sf_2016",       qcdvetowgtsr,  datasel + vetoes + qcdSpikeRemovals);
  config.addSample("data-17BtoE-cr",     "Data",         "data_2017BtoE",  "1.0",      datasel + trigSR + vetoes + dphi_invert);
  config.addSample("data-17F-cr",     "Data",             "data_2017F",  "1.0",      datasel + trigSR + vetoes + dphi_invert);
  config.addSample("qcd-17BtoE-cr",      "QCD",       "qcd_smear_sf_2017",       qcdwgt_BtoE,      datasel + dphi_invert + qcdSpikeRemovals);
  config.addSample("qcd-withveto-17BtoE-cr",  "QCD",  "qcd_smear_sf_2017",       qcdvetowgt_BtoE,  datasel + vetoes + dphi_invert + qcdSpikeRemovals);
  config.addSample("qcd-withveto-17BtoE-sr",  "QCD",  "qcd_smear_sf_2017",       qcdvetowgt_BtoEsr,  datasel + vetoes + qcdSpikeRemovals);
  config.addSample("qcd-17F-cr",              "QCD",     "qcd_smear_sf_2017",       qcdwgt_F,         datasel + dphi_invert + qcdSpikeRemovals);
  config.addSample("qcd-withveto-17F-cr",     "QCD",     "qcd_smear_sf_2017",       qcdvetowgt_F,     datasel + vetoes + dphi_invert + qcdSpikeRemovals);
  config.addSample("qcd-withveto-17F-sr",     "QCD",     "qcd_smear_sf_2017",       qcdvetowgt_Fsr,     datasel + vetoes + qcdSpikeRemovals);
  config.addSample("data-18preHEM-cr",     "Data",        "data_2018",  "1.0",     datasel + trigSR + vetoes + dphi_invert);
  config.addSample("qcd-18preHEM-cr",      "QCD",        "qcd_smear_sf_2018",       qcdwgt_preHEM,       datasel + dphi_invert + qcdSpikeRemovals);
  config.addSample("qcd-withveto-18preHEM-cr",  "QCD",   "qcd_smear_sf_2018",       qcdvetowgt_preHEM,   datasel + vetoes + dphi_invert + qcdSpikeRemovals);
  config.addSample("data-18postHEM-cr",     "Data",      "data_2018",  "1.0",      dataselHEM + trigSR + vetoes + dphi_invert);
  config.addSample("qcd-withveto-18preHEM-sr",  "QCD",   "qcd_smear_sf_2018",       qcdvetowgt_preHEMsr,   datasel + vetoes + qcdSpikeRemovals);
  config.addSample("qcd-18postHEM-cr",      "QCD",       "qcd_smear_sf_2018",       qcdwgt_postHEM,      dataselHEM + dphi_invert + qcdSpikeRemovals);
  config.addSample("qcd-withveto-18postHEM-cr",  "QCD",  "qcd_smear_sf_2018",       qcdvetowgt_postHEM,  dataselHEM + vetoes + dphi_invert + qcdSpikeRemovals);
  config.addSample("qcd-withveto-18postHEM-sr",  "QCD",  "qcd_smear_sf_2018",       qcdvetowgt_postHEMsr,  dataselHEM + vetoes + qcdSpikeRemovals);

  // qcdcr: other bkg subtraction
  config.addSample("ttbar-16-cr",       "t#bar{t}",      "ttbar_2016",        lepvetowgt+"*ISRWeight",  datasel + vetoes + dphi_invert);
  config.addSample("wjets-16-cr",       "W+jets",        "wjets_2016",        lepvetowgt,  datasel + vetoes + dphi_invert);
  config.addSample("minor-16-cr",       "minor",         "minor_2016",           lepvetowgt,  datasel + vetoes + dphi_invert);
  config.addSample("znunu-16-cr",       "Znunu",         "znunu_2016",        lepvetowgt,  datasel + vetoes + dphi_invert);

  config.addSample("ttbar-17BtoE-cr",       "t#bar{t}",      "ttbar_2017",        lepvetowgt_BtoE,  datasel + vetoes + dphi_invert);
  config.addSample("wjets-17BtoE-cr",       "W+jets",        "wjets_2017",        lepvetowgt_BtoE,  datasel + vetoes + dphi_invert);
  config.addSample("minor-17BtoE-cr",       "minor",         "minor_2017",           lepvetowgt_BtoE,  datasel + vetoes + dphi_invert);
   config.addSample("znunu-17BtoE-cr",      "Znunu",         "znunu_2017",        lepvetowgt_BtoE,  datasel + vetoes + dphi_invert);
  config.addSample("ttbar-17F-cr",          "t#bar{t}",      "ttbar_2017",           lepvetowgt_F,     datasel + vetoes + dphi_invert);
  config.addSample("wjets-17F-cr",          "W+jets",        "wjets_2017",           lepvetowgt_F,     datasel + vetoes + dphi_invert);
  config.addSample("minor-17F-cr",          "minor",         "minor_2017",              lepvetowgt_F,     datasel + vetoes + dphi_invert);
  config.addSample("znunu-17F-cr",          "Znunu",         "znunu_2017",           lepvetowgt_F,     datasel + vetoes + dphi_invert);

  config.addSample("ttbar-18preHEM-cr",        "t#bar{t}",      "ttbar_2018",        lepvetowgt_preHEM,  datasel + vetoes + dphi_invert);
  config.addSample("wjets-18preHEM-cr",        "W+jets",        "wjets_2018",        lepvetowgt_preHEM,  datasel + vetoes + dphi_invert);
  config.addSample("minor-18preHEM-cr",        "minor",         "minor_2018",           lepvetowgt_preHEM,  datasel + vetoes + dphi_invert);
  config.addSample("znunu-18preHEM-cr",        "Znunu",         "znunu_2018",        lepvetowgt_preHEM,  datasel + vetoes + dphi_invert);
  config.addSample("ttbar-18postHEM-cr",       "t#bar{t}",      "ttbar_2018",       lepvetowgt_postHEM, dataselHEM + vetoes + dphi_invert);
  config.addSample("wjets-18postHEM-cr",       "W+jets",        "wjets_2018",       lepvetowgt_postHEM, dataselHEM + vetoes + dphi_invert);
  config.addSample("minor-18postHEM-cr",       "minor",         "minor_2018",          lepvetowgt_postHEM, dataselHEM + vetoes + dphi_invert);
   config.addSample("znunu-18postHEM-cr",       "Znunu",        "znunu_2018",       lepvetowgt_postHEM, dataselHEM + vetoes + dphi_invert);

  // onelepcr: norm correction for other bkg subtraction
  config.addSample("data-16-norm",           "Data",        "data_2016", "1.0",      datasel + trigSR + revert_vetoes + dphi_cut);
  config.addSample("ttbar-16-norm",     "t#bar{t}",      "ttbar_2016",     lepselwgt+"*ISRWeight",   datasel + revert_vetoes + dphi_cut);
  config.addSample("wjets-16-norm",     "W+jets",        "wjets_2016",     lepselwgt,   datasel + revert_vetoes + dphi_cut);
  config.addSample("minor-16-norm",     "minor",         "minor_2016",        lepselwgt,   datasel + revert_vetoes + dphi_cut);
  config.addSample("qcd-16-norm",       "QCD",           "qcd_smear_sf_2016",       lepselwgt,   datasel + revert_vetoes + dphi_cut + qcdSpikeRemovals);
  config.addSample("data-17BtoE-norm",           "Data",    "data_2017BtoE", "1.0",      datasel + trigSR + revert_vetoes + dphi_cut);
  config.addSample("ttbar-17BtoE-norm",     "t#bar{t}",      "ttbar_2017",     lepselwgt_BtoE,   datasel + revert_vetoes + dphi_cut);
  config.addSample("wjets-17BtoE-norm",     "W+jets",        "wjets_2017",     lepselwgt_BtoE,   datasel + revert_vetoes + dphi_cut);
  config.addSample("minor-17BtoE-norm",     "minor",         "minor_2017",        lepselwgt_BtoE,   datasel + revert_vetoes + dphi_cut);
  config.addSample("qcd-17BtoE-norm",       "QCD",           "qcd_smear_sf_2017",       lepselwgt_BtoE,   datasel + revert_vetoes + dphi_cut + qcdSpikeRemovals);
  config.addSample("data-17F-norm",           "Data",        "data_2017F", "1.0",      datasel + trigSR + revert_vetoes + dphi_cut);
  config.addSample("ttbar-17F-norm",        "t#bar{t}",      "ttbar_2017",     lepselwgt_F,      datasel + revert_vetoes + dphi_cut);
  config.addSample("wjets-17F-norm",        "W+jets",        "wjets_2017",     lepselwgt_F,      datasel + revert_vetoes + dphi_cut);
  config.addSample("minor-17F-norm",        "minor",         "minor_2017",        lepselwgt_F,      datasel + revert_vetoes + dphi_cut);
  config.addSample("qcd-17F-norm",          "QCD",           "qcd_smear_sf_2017",       lepselwgt_F,      datasel + revert_vetoes + dphi_cut + qcdSpikeRemovals);
  config.addSample("data-18preHEM-norm",      "Data",        "data_2018" , "1.0",      datasel + trigSR + revert_vetoes + dphi_cut);
  config.addSample("ttbar-18preHEM-norm",     "t#bar{t}",      "ttbar_2018",     lepselwgt_preHEM,   datasel + revert_vetoes + dphi_cut);
  config.addSample("wjets-18preHEM-norm",     "W+jets",        "wjets_2018",     lepselwgt_preHEM,   datasel + revert_vetoes + dphi_cut);
  config.addSample("minor-18preHEM-norm",     "minor",         "minor_2018",        lepselwgt_preHEM,   datasel + revert_vetoes + dphi_cut);
  config.addSample("qcd-18preHEM-norm",       "QCD",           "qcd_smear_sf_2018",       lepselwgt_preHEM,   datasel + revert_vetoes + dphi_cut + qcdSpikeRemovals);
  config.addSample("data-18postHEM-norm",           "Data",        "data_2018", "1.0",      dataselHEM + trigSR + revert_vetoes + dphi_cut);
  config.addSample("ttbar-18postHEM-norm",    "t#bar{t}",      "ttbar_2018",     lepselwgt_postHEM,  dataselHEM + revert_vetoes + dphi_cut);
  config.addSample("wjets-18postHEM-norm",    "W+jets",        "wjets_2018",     lepselwgt_postHEM,  dataselHEM + revert_vetoes + dphi_cut);
  config.addSample("minor-18postHEM-norm",    "minor",         "minor_2018",        lepselwgt_postHEM,  dataselHEM + revert_vetoes + dphi_cut);
  config.addSample("qcd-18postHEM-norm",      "QCD",           "qcd_smear_sf_2018",       lepselwgt_postHEM,  dataselHEM + revert_vetoes + dphi_cut + qcdSpikeRemovals);

  // qcdsr
  config.addSample("qcd-16-sr",         "QCD",           "qcd_smear_sf_2016",       qcdwgtsr,           datasel + qcdSpikeRemovals);
  config.addSample("qcd-17BtoE-sr",     "QCD",           "qcd_smear_sf_2017",       qcdwgt_BtoEsr,   datasel + qcdSpikeRemovals);
  config.addSample("qcd-17F-sr",        "QCD",           "qcd_smear_sf_2017",       qcdwgt_Fsr,      datasel + qcdSpikeRemovals);
  config.addSample("qcd-18preHEM-sr",   "QCD",           "qcd_smear_sf_2018",       qcdwgt_preHEMsr,    datasel + qcdSpikeRemovals);
  config.addSample("qcd-18postHEM-sr",  "QCD",           "qcd_smear_sf_2018",       qcdwgt_postHEMsr,   dataselHEM + qcdSpikeRemovals);

  // samples for splitting the TF, optional (see z.splitTF)
  if (SPLITTF){
    config.addSample("qcd-16-sr-int",         "QCD",           "qcd_smear_sf_2016",       qcdwgtsr,           datasel + dphi_cut + qcdSpikeRemovals);
    config.addSample("qcd-17BtoE-sr-int",     "QCD",           "qcd_smear_sf_2017",       qcdwgt_BtoEsr,   datasel + dphi_cut + qcdSpikeRemovals);
    config.addSample("qcd-17F-sr-int",        "QCD",           "qcd_smear_sf_2017",       qcdwgt_Fsr,      datasel + dphi_cut + qcdSpikeRemovals);
    config.addSample("qcd-18preHEM-sr-int",   "QCD",           "qcd_smear_sf_2018",       qcdwgt_preHEMsr,    datasel + dphi_cut + qcdSpikeRemovals);
    config.addSample("qcd-18postHEM-sr-int",  "QCD",           "qcd_smear_sf_2018",       qcdwgt_postHEMsr,   dataselHEM + dphi_cut + qcdSpikeRemovals);
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

  //config.addSample("data-sr",          "Data",             datadir+"met",                  "1.0",  datasel + trigSR + vetoes);

  //config.addSample("T1tttt-v2p7-sr",  "T1tttt v2p7",  inputdir_sig+"T1tttt_2200_100_v2p7",  "1.0", datasel + vetoes);
  //config.addSample("T1tttt-v3-sr",  "T1tttt v3",  inputdir_sig+"T1tttt_2200_100_v3",  "1.0", datasel + vetoes);
//  config.addSample("T2fbd_375_325",  "T2-4bd(375,325)",  "sig/T2fbd_375_325",  sigwgt, datasel + vetoes);
//  config.addSample("T2fbd_375_295",  "T2-4bd(375,295)",  "sig/T2fbd_375_295",  sigwgt, datasel + vetoes);
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
