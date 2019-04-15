#!/usr/bin/env python
import os, sys
import ROOT
ROOT.PyConfig.IgnoreCommandLineOptions = True
from importlib import import_module

from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection, Object
from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module
from PhysicsTools.NanoAODTools.postprocessing.tools import deltaPhi, deltaR, closest
#import "$CMSSW_BASE/src/AnalysisTools/QuickRefold/interface/TObjectContainer.h"

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
        self.out = wrappedOutputTree
        self.out.branch("dphij1met", "F")
        self.out.branch("dphij2met", "F")
        self.out.branch("dphij3met", "F")
        self.out.branch("dphij4met", "F")
        self.out.branch("Pass_HEM20", "O")
        self.out.branch("Pass_HEM30", "O")



    def endFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        pass

    def jetResFunction(self, jets, genjets):
	res = jets.pt/genjets.pt
	return res

    def analyze(self, event):
	jets      = Collection(event, "Jet")
	genjets   = Collection(event, "GenJet")
	met       = Object(event,     self.metBranchName)
	njets = len(jets)
        if met.pt < 200: return True
        if njets < 2: return True
        for i in jets:
            if math.fabs(i.eta) > 4.7 or i.pt < 20: return True
            else:
                PassHEM20 = (i.eta > -3.2) & (i.eta < -1.2) & (i.phi > -1.77) & (i.phi<-0.67)
                PassHEM30 = (i.pt > 30) & (i.eta > -3.2) & (i.eta < -1.2) & (i.phi > -1.77) & (i.phi<-0.67)
                if njets > 0 : self.out.fillBranch("dphij1met", deltaPhi(jets[0], met))
                if njets > 1 : self.out.fillBranch("dphij2met", deltaPhi(jets[1], met))
                if njets > 2 : self.out.fillBranch("dphij3met", deltaPhi(jets[2], met))
                if njets > 3 : self.out.fillBranch("dphij4met", deltaPhi(jets[3], met))
                self.out.fillBranch("Pass_HEM20", PassHEM20)
                self.out.fillBranch("Pass_HEM30", PassHEM30)
        return True

