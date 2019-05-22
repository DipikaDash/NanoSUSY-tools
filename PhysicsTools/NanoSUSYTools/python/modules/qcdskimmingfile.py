#!/usr/bin/env python
import os, sys
import ROOT
import math
ROOT.PyConfig.IgnoreCommandLineOptions = True
from importlib import import_module

from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection, Object
from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module
from PhysicsTools.NanoAODTools.postprocessing.tools import deltaPhi, deltaR, closest
#import "$CMSSW_BASE/src/AnalysisTools/QuickRefold/interface/TObjectContainer.h"
from PhysicsTools.NanoAODTools.postprocessing.framework.postprocessor import PostProcessor
from PhysicsTools.NanoAODTools.postprocessing.modules.common.puWeightProducer import *
from PhysicsTools.NanoAODTools.postprocessing.modules.jme.jecUncertainties import jecUncertProducer
from PhysicsTools.NanoAODTools.postprocessing.modules.jme.jetmetUncertainties import jetmetUncertaintiesProducer
from PhysicsTools.NanoAODTools.postprocessing.modules.jme.jetRecalib import jetRecalib
from PhysicsTools.NanoAODTools.postprocessing.modules.btv.btagSFProducer import btagSFProducer
from TopTagger.TopTagger.TopTaggerProducer import TopTaggerProducer


class qcdskimmingfile(Module): 
    def __init__(self):
	self.writeHistFile=True
	self.metBranchName="MET"
    def beginJob(self,histFile=None,histDirName=None):
   	pass
    def endJob(self):
	pass 

    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        self.out = wrappedOutputTree
        self.out.branch("nJetPass", "I")
        self.out.branch("nJets2p2", "I") 
        self.out.branch("JetPass_pt","F",lenVar="nJetPass") 
        self.out.branch("JetPass_eta","F",lenVar="nJetPass") 
        self.out.branch("JetPass_phi", "F",lenVar="nJetPass")
        self.out.branch("JetPass_mass", "F",lenVar="nJetPass")
        self.out.branch("npvweight","F")
    def endFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        pass

    def jetResFunction(self, jets, genjets):
	res = jets.pt/genjets.pt
	return res
    def SelJets(self, jet):
        if jet.pt < 20 or math.fabs(jet.eta) > 2.4 :
            return False
        return True
    def SelJets2p2(self, jet):
        if jet.pt < 20 or math.fabs(jet.eta) > 2.2 :
            return False
        return True

    def parselist(self, array, which):
        listx_, listy_ = which, len(array)
        out = []
        for i in xrange(listy_):
            print "array: ", array[i], array[i][listx_]
            out.append(array[i][listx_])
        return out
    def analyze(self, event):
	jets      = Collection(event, "Jet")
	#genjets   = Collection(event, "GenJet")
	met       = Object(event,     self.metBranchName)
        stop0l = Object(event, "Stop0l")
        npv = Object(event,"PV_npvs")
        i_npvweight=[]
        i_npvweight.append(192.076)
        i_npvweight.append(2.70278)
        i_npvweight.append(1.61664)
        i_npvweight.append(1.70715)
        i_npvweight.append(1.09448)
        i_npvweight.append(1.02409)
        i_npvweight.append(1.06834)
        i_npvweight.append(1.10182)
        i_npvweight.append(1.17119)
        i_npvweight.append(1.19167)
        i_npvweight.append(1.21136)
        i_npvweight.append(0.87876)
        i_npvweight.append(1.25507)
        i_npvweight.append(1.00975)
        i_npvweight.append(0.547917)
        i_npvweight.append(0.855657)
        i_npvweight.append(0.908294)
        i_npvweight.append(1.01844)
        i_npvweight.append(0.696716)
        i_npvweight.append(0.587151)
        i_npvweight.append(0.504605)
        i_npvweight.append(0.56654)
        i_npvweight.append(0.523289)
        i_npvweight.append(0.565245)
        i_npvweight.append(0.504908)
        i_npvweight.append(0.491154)
        i_npvweight.append(0.529756)
        i_npvweight.append(0.464374)
        i_npvweight.append(0.430688)
        i_npvweight.append(0.458452)
        i_npvweight.append(0.481223)
        i_npvweight.append(0.487172)
        i_npvweight.append(0.384962)
        i_npvweight.append(0.330385)
        i_npvweight.append(0.465438)
        i_npvweight.append(0.44364)
        i_npvweight.append(0.443189)
        i_npvweight.append(0.386079)
        i_npvweight.append(0.482461)
        i_npvweight.append(0.523238)
        i_npvweight.append(0.544794)
        i_npvweight.append(0.517987)
        i_npvweight.append(0.449794)
        i_npvweight.append(0.919978)
        i_npvweight.append(0.641476)
        i_npvweight.append(0.686244)
        i_npvweight.append(0.629511)
        i_npvweight.append(0.672899)
        i_npvweight.append(0.881224)
        i_npvweight.append(0.821065)
        i_npvweight.append(0.81458)
        i_npvweight.append(0.680482)
        i_npvweight.append(0.951522)
        i_npvweight.append(2.97009)
        i_npvweight.append(2.57054)
        i_npvweight.append(0.986209)
        i_npvweight.append(3.1002)
        i_npvweight.append(1.22553)
        i_npvweight.append(6.56793)
        i_npvweight.append(2.22039)
        i_npvweight.append(2.15328)
        i_npvweight.append(17.1503)
        i_npvweight.append(4.2885)
        i_npvweight.append(25.5404)
        i_npvweight.append(1.85713)
        i_npvweight.append(0.805695)
        i_npvweight.append(0.915189)
        i_npvweight.append(0.924737)
        i_npvweight.append(32.0877)
        i_npvweight.append(2.05878)
        i_npvweight.append(2.47814)
        i_npvweight.append(63.1507)
        i_npvweight.append(17.0235)
        i_npvweight.append(2.76295)
        i_npvweight.append(1.71521)
        i_npvweight.append(72.7532)
        i_npvweight.append(1.3779)
        i_npvweight.append(100.702)
        i_npvweight.append(89.9679)
        i_npvweight.append(49.1688)
        i_npvweight.append(0.295816)
        i_npvweight.append(47.7457)
        i_npvweight.append(136.187)
        i_npvweight.append(101.136)
        i_npvweight.append(137.967)
        i_npvweight.append(131.922)
        i_npvweight.append(123.848)
        i_npvweight.append(0.829474)
        i_npvweight.append(93.8106)
        i_npvweight.append(179.067)
        i_npvweight.append(22.4497)
        i_npvweight.append(140.223)
        i_npvweight.append(22.0769)
        i_npvweight.append(77.8502)
        i_npvweight.append(137.522)
        i_npvweight.append(194.719)
        i_npvweight.append(120.213)
        i_npvweight.append(50.5554)
        i_npvweight.append(159.58)
        i_npvweight.append(9.64301)
        i_npvweight.append(192.907)
        i_npvweight.append(391.476)
        i_npvweight.append(722.01)
        i_npvweight.append(291.274)
        i_npvweight.append(45.1371)
        i_npvweight.append(323.861)
        i_npvweight.append(632.455)
        i_npvweight.append(613.511)
        i_npvweight.append(232.476)
        i_npvweight.append(74.075)
        i_npvweight.append(565.068)
        i_npvweight.append(1001.09)
        i_npvweight.append(130.28)
        i_npvweight.append(338.533)
        i_npvweight.append(568.36)
        i_npvweight.append(115.228)
        i_npvweight.append(6824.44)
        i_npvweight.append(292.14)
        njets = len(jets)
        self.Jet_Stop0l = map(self.SelJets, jets)
        self.Jet_Stop0l2p2 = map(self.SelJets2p2, jets)
        jet_pass =[]
        for i in xrange(len(jets)):
               jet_ =[]
               j=jets[i]
               if self.Jet_Stop0l[i] == 1:
                   #j=jets[i]
                   #print "jet: ", j.pt, j.eta, j.phi, j.mass
                   jet_.append(j.pt)
                   jet_.append(j.eta)
                   jet_.append(j.phi)
                   jet_.append(j.mass)
                   jet_pass.append(jet_)

        self.out.fillBranch("nJets2p2",sum(self.Jet_Stop0l2p2))
        print "no of jets: ", sum(self.Jet_Stop0l2p2)
        self.out.fillBranch("nJetPass", len(jet_pass))
        self.out.fillBranch("JetPass_pt", self.parselist(jet_pass, 0))
        #print "jetpt[0](2): ", j.pt
        self.out.fillBranch("JetPass_eta", self.parselist(jet_pass, 1))
        self.out.fillBranch("JetPass_phi", self.parselist(jet_pass, 2))
        self.out.fillBranch("JetPass_mass", self.parselist(jet_pass,3))
        if npv >=2 and npv <=120:  
            self.out.fillBranch("npvweight",i_npvweight[npv-2])
        else: 
            self.out.fillBranch("npvweight",1)

        return True
