#!/usr/bin/env python
import os, sys
import ROOT
from array import array
ROOT.PyConfig.IgnoreCommandLineOptions = True
from importlib import import_module
from os import system, environ
import scipy as sp

from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection, Object
from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module
from PhysicsTools.NanoAODTools.postprocessing.tools import deltaPhi, deltaR, closest
from PhysicsTools.NanoAODTools.postprocessing.framework.treeReaderArrayTools import *
from rootpy.tree import Tree, TreeModel, IntCol, FloatArrayCol


class qcdBootstrapProducer(Module): 
    def __init__(self):
        self.writeHistFile=True
        self.nBootstraps = 100

    def beginJob(self,histFile=None,histDirName=None):
        pass

    def endJob(self):
        pass 

    def beginFile(self, inputFile, outputFile, inputTree, wrappedOutputTree):
	self.out = wrappedOutputTree
	#self.out.branch("nBootstrapWeight",        "I")
	self.out.branch("bootstrapWeight1",         "D" ,lenVar="nBootstrapWeight")
        self.out.branch("bootstrapWeight2",         "D" ,lenVar="nBootstrapWeight")
        self.out.branch("bootstrapWeight3",         "D" ,lenVar="nBootstrapWeight")
        self.out.branch("bootstrapWeight4",         "D" ,lenVar="nBootstrapWeight")
        self.out.branch("bootstrapWeight5",         "D" ,lenVar="nBootstrapWeight")    
    def analyze(self, event):
	#Need to initialize a random seed
	ROOT.gRandom.SetSeed(12345)

	b = []
        b1 =[]
        b2 =[]
        b3 =[]
        b4 =[]
	for iB in xrange(self.nBootstraps) :
		#x=ROOT.gRandom.Gaus(1.0,0.1)
                b.append(min(5,ROOT.gRandom.Gaus(1.0,0.1)))
                b1.append(min(5,ROOT.gRandom.Gaus(1.0,0.2)))
                b2.append(min(5,ROOT.gRandom.Gaus(1.0,0.3)))
                b3.append(min(5,ROOT.gRandom.Gaus(1.0,0.5)))
        
        self.out.fillBranch("bootstrapWeight1",        b)
        self.out.fillBranch("bootstrapWeight2",        b1)
        self.out.fillBranch("bootstrapWeight3",        b2)
        self.out.fillBranch("bootstrapWeight4",        b3)
        self.out.fillBranch("bootstrapWeight5",        b4)
	#self.out.fillBranch("nBootstrapWeight",        self.nBootstraps)
        return True    
