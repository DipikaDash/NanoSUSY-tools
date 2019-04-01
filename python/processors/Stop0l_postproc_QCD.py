#!/usr/bin/env python
import os, sys
import ROOT
import argparse
ROOT.PyConfig.IgnoreCommandLineOptions = True
from importlib import import_module
from PhysicsTools.NanoAODTools.postprocessing.framework.postprocessor import PostProcessor
from PhysicsTools.NanoSUSYTools.modules.qcdSmearProducer import *
<<<<<<< HEAD
=======

#from PhysicsTools.NanoSUSYTools.modules.genjettest import *
>>>>>>> 09dd07abbc406f1028ff602691671d9de14a9a37

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

<<<<<<< HEAD
    mods = [
        qcdSmearProducer(),
    ]

    #files=["/eos/uscms/store/user/lpcsusyhad/Stop_production/Summer16_80X_v2_NanAOD_MC/PostProcess_v1/QCD_HT100to200/QCD_HT100to200_0.root"]
    files = []
    lines = open(args.inputfile).readlines()
    for line in lines:
        files.append(line.strip())

    p=PostProcessor(args.outputfile,files,cut=None, branchsel=None, outputbranchsel="keep_and_drop_QCD.txt", outputbranchselsmear="keep_and_drop_smear.txt",typeofprocess="smear",modules=mods,provenance=False)
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
        default = "2017", help = 'Year of production')
    parser.add_argument('-f', '--isFastSim', default = False)
    parser.add_argument('-d', '--isData', default = False)
    parser.add_argument('-c', '--crossSection',
                        type=float,
                        default = 1,
                        help = 'Cross Section of MC')
    parser.add_argument('-n', '--nEvents',
                        type=float,
                        default = 1,
                        help = 'Number of Events')
    args = parser.parse_args()
    main(args)
=======
#files=["../ttbar_v1_tree.root"]
#files=["/eos/uscms/store/user/lpcsusyhad/Stop_production/HEMNano/TTToSemiLeptonic_TuneCP5_13TeV-powheg-pythia8/2018_HEM_MC_RunIISpring18MiniAOD-100X_v10-v1-ext1/190105_203555/0000/BASE_80X_prodIso_NANO_143.root"]
files=["/uscms_data/d3/lpcsusyhad/benwu/Moriond2019/TestNanoAOD/CMSSW_10_4_X_2018-12-11-2300/src/prod2017MC_NANO.root"]

p=PostProcessor(".",files,cut=None, branchsel=None, outputbranchsel="keep_and_drop.txt", modules=mods,provenance=False)
p.run()
>>>>>>> 09dd07abbc406f1028ff602691671d9de14a9a37
