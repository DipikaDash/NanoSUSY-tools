#!/usr/bin/env python
import os, sys
import argparse
import ROOT
ROOT.PyConfig.IgnoreCommandLineOptions = True
from importlib import import_module
from PhysicsTools.NanoAODTools.postprocessing.framework.postprocessor import PostProcessor
from PhysicsTools.NanoAODTools.postprocessing.framework.datamodel import Collection, Object
from PhysicsTools.NanoAODTools.postprocessing.framework.eventloop import Module

from PhysicsTools.NanoSUSYTools.modules.eleMiniCutIDProducer import *
#from PhysicsTools.NanoSUSYTools.modules.Stop0lObjectsProducer import *
#from PhysicsTools.NanoSUSYTools.modules.Stop0lBaselineProducer import *
from PhysicsTools.NanoSUSYTools.modules.DeepTopProducer import *
<<<<<<< HEAD
from PhysicsTools.NanoSUSYTools.modules.updateGenWeight import *
from PhysicsTools.NanoSUSYTools.modules.lepSFProducer import *
from PhysicsTools.NanoSUSYTools.modules.updateJetIDProducer import *
from PhysicsTools.NanoAODTools.postprocessing.modules.common.puWeightProducer import *
from PhysicsTools.NanoSUSYTools.modules.TauMVAObjectsProducer import *

DataDepInputs = {
    "2016" : { "pileup": "Cert271036_284044_23Sep2016ReReco_Collisions16.root"
   },
    "2017" : { "pileup": "Cert294927_306462_EOY2017ReReco_Collisions17.root"
   },
    "2018" : { "pileup": "Cert314472_325175_PromptReco_Collisions18.root"
   }
}
=======
#from PhysicsTools.NanoSUSYTools.modules.updateGenWeight import *
#from PhysicsTools.NanoAODTools.postprocessing.modules.common.puWeightProducer import *
from PhysicsTools.NanoSUSYTools.processors.ana_TrigNanoAOD import TrigEffAnalysis
#from PhysicsTools.NanoSUSYTools.processors.ana_TrigNanoAOD_2016 import TrigEffAnalysis_2016
>>>>>>> upstream/hui_trigger_eff

def main(args):
    # isdata = False
    # isfastsim = False
    if "False" in args.isData:
        isdata = False
    else:
        isdata = True
    if "False" in args.isFastSim:
        isfastsim = False
    else:
        isfastsim = True

    mods = [
<<<<<<< HEAD
        #eleMiniCutID(),
        #Stop0lObjectsProducer(args.era),
        #DeepTopProducer(args.era),
        #Stop0lBaselineProducer(args.era, isData=isdata, isFastSim=isfastsim),
        #UpdateGenWeight(isdata, args.crossSection, args.nEvents)
	TauMVAObjectsProducer(),
=======
        eleMiniCutID(),
        #Stop0lObjectsProducer(args.era),
        DeepTopProducer(args.era),
        #Stop0lBaselineProducer(args.era, args.isFastSim),
        # UpdateGenWeight(args.crossSection, args.nEvents)
	TrigEffAnalysis(args.era, args.dataset),
>>>>>>> upstream/hui_trigger_eff
    ]
    #if args.era == "2018":
    #    mods.append(UpdateJetID(args.era))

<<<<<<< HEAD
#~~~#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ For MC ~~~~~
    #if not isdata:
    #    pufile = "%s/src/PhysicsTools/NanoSUSYTools/data/pileup/%s" % (os.environ['CMSSW_BASE'], DataDepInputs[args.era]["pileup"])
    #    mods += [
    #        lepSFProducer(args.era),
    #        puWeightProducer("auto", pufile, "pu_mc","pileup", verbose=False)
=======
    #if args.era == "2016":
    #    mods += [
    #        puWeightProducer(pufile_mc,pufile_data,"pu_mc","pileup",verbose=False)
    #    ]

    #if args.era == "2017":
    #    mods += [
    #        puWeightProducer("auto",pufile_data2017,"pu_mc","pileup",verbose=False)
>>>>>>> upstream/hui_trigger_eff
    #    ]


    files = []
    lines = open(args.inputfile).readlines()
    for line in lines:
        files.append(line.strip())


<<<<<<< HEAD
    p=PostProcessor(args.outputfile,files,cut=None, branchsel=None, outputbranchsel="keep_and_drop_tauMVA.txt", modules=mods,provenance=False)
=======
    p=PostProcessor(args.outputfile,files,cut=None, branchsel=None, modules=mods, histFileName="histos_TrigNanoAOD.root",histDirName="TrigAnalyzerMiniAOD")
>>>>>>> upstream/hui_trigger_eff
    p.run()

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description='NanoAOD postprocessing.')
    parser.add_argument('-i', '--inputfile',
        default = "testing.txt",
        help = 'Path to the input filelist.')
    parser.add_argument('-o', '--outputfile',
                        default="./",
                        help = 'Path to the output file location.')
    parser.add_argument('-e', '--era',
        default = "", help = 'Year of production')
    parser.add_argument('-f', '--isFastSim', default = False)
    parser.add_argument('-d', '--isData', default = False)
<<<<<<< HEAD
    parser.add_argument('-c', '--crossSection',
                        type=float,
                        default = 1,
                        help = 'Cross Section of MC')
    parser.add_argument('-n', '--nEvents',
                        type=float,
                        default = 1,
                        help = 'Number of Events')
=======
    parser.add_argument('-c', '--crossSection')
    parser.add_argument('-n', '--nEvents', help = 'Number of Events')
    parser.add_argument('-s', '--dataset', help = 'name of dataset')
>>>>>>> upstream/hui_trigger_eff
    args = parser.parse_args()
    main(args)
