#!/usr/bin/env python
import os, sys
import ROOT
import math
ROOT.PyConfig.IgnoreCommandLineOptions = True
from importlib import import_module
from os import system, environ
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection, Object
from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module
from PhysicsTools.NanoAODTools.postprocessing.tools import deltaPhi, deltaR, closest
#import "$CMSSW_BASE/src/AnalysisTools/QuickRefold/interface/TObjectContainer.h"

class qcdskimmingfilev1(Module): 
    def __init__(self):
	self.writeHistFile=True
	self.metBranchName="MET"
        self.correctionfile=os.environ["CMSSW_BASE"] + "/src/PhysicsTools/NanoSUSYTools/data/QCD/qcdJetRespTailCorr.root"
        self.correctionhist="RespTailCorr"
    def beginJob(self,histFile=None,histDirName=None):
   	pass
    def endJob(self):
	pass 

    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        self.out = wrappedOutputTree
        self.out.branch("nJetPass", "I") 
        self.out.branch("JetPass_pt","F",lenVar="nJetPass") 
        self.out.branch("JetPass_eta","F",lenVar="nJetPass") 
        self.out.branch("JetPass_phi", "F",lenVar="nJetPass")
        self.out.branch("JetPass_mass", "F",lenVar="nJetPass")
        self.out.branch("qcdRespTailWeight","F")
        #self.qcdresptail=self.loadHisto(self.correctionfile,self.correctionhist)
    def endFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
        pass

    def jetResFunction(self, jets, genjets):
	res = jets.pt/genjets.pt
	return res
    def loadhisto(self,filename,hname):
        file =ROOT.TFile.Open(filename)
        hist_ = file.Get(hname)
        hist_.SetDirectory(0)
        for i in xrange(len(hname)):
          for j in xrange(len(hname[i])):
              qcdcorrweight =hist_.GetBinContent(i,j)
              print 'qcdcorrection weight',qcdcorrweight
              return qcdcorrweight
    
    def SelJets(self, jet):
        if jet.pt < 20 or math.fabs(jet.eta) > 2.4 :
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
        njets = len(jets)
        self.Jet_Stop0l = map(self.SelJets, jets)
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
                   
        self.out.fillBranch("nJetPass", len(jet_pass))
        self.out.fillBranch("JetPass_pt", self.parselist(jet_pass, 0))
        #print "jetpt[0](2): ", j.pt
        self.out.fillBranch("JetPass_eta", self.parselist(jet_pass, 1))
        self.out.fillBranch("JetPass_phi", self.parselist(jet_pass, 2))
        self.out.fillBranch("JetPass_mass", self.parselist(jet_pass,3))
	#qcdresptail=self.loadhisto(self.correctionfile,self.correctionhist)
        self.out.fillBranch("qcdRespTailWeight",self.loadhisto(self.correctionfile,self.correctionhist))
               #if j.pt < 20 or math.fabs(j.eta)> 2.4: return True
               #else:
                   #if njets > 0 : self.out.fillBranch("dphij1met", deltaPhi(jets[0], met)) 
                   #if njets > 1 : self.out.fillBranch("dphij2met", deltaPhi(jets[1], met))
                   #if njets > 2 : self.out.fillBranch("dphij3met", deltaPhi(jets[2], met))
                   #if njets > 3 : self.out.fillBranch("dphij4met", deltaPhi(jets[3], met))
       # self.out.fillBranch("nJetPass", len(jet_pass))
       


        return True
