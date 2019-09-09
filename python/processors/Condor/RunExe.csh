#!/bin/csh -v

set SCRAM  = DELSCR
set CMSSW  = DELDIR
set EXE    = DELEXE
set OUTPUT = OUTDIR

#============================================================================#
#-----------------------------   Setup the env   ----------------------------#
#============================================================================#
echo "============  Running on" $HOST " ============"
cd ${_CONDOR_SCRATCH_DIR}
source /cvmfs/cms.cern.ch/cmsset_default.csh
setenv SCRAM_ARCH ${SCRAM}
eval `scramv1 project CMSSW ${CMSSW}`
tar -xzf ${_CONDOR_SCRATCH_DIR}/CMSSW.tar.gz
cd ${CMSSW}
eval `scramv1 runtime -csh` # cmsenv is an alias not on the workers
echo "CMSSW: "$CMSSW_BASE

cd ${_CONDOR_SCRATCH_DIR}
foreach tarfile (`ls *gz FileList/*gz`)
  echo $tarfile
  tar -xzf $tarfile 
end

#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Setup for rootpy ~~~~~
setenv PYTHONPATH  ${_CONDOR_SCRATCH_DIR}
setenv XDG_CONFIG_HOME ${_CONDOR_SCRATCH_DIR}/.config
setenv XDG_CACHE_HOME ${_CONDOR_SCRATCH_DIR}/.cache

if ! $?LD_LIBRARY_PATH then
    setenv LD_LIBRARY_PATH ./
else
    setenv LD_LIBRARY_PATH ./:${LD_LIBRARY_PATH}
endif

#============================================================================#
#--------------------------   To Run the Process   --------------------------#
#============================================================================#

#argv[1] is the hadd file name that will be copied over. Other arguments are for the postprocessor.
echo $EXE $argv[2-]
python $EXE $argv[2-]

set filename = "`echo $argv | sed 's/--inputfile=//'`"
set filename = "`echo $filename | sed 's/ --era=.*//'`"
set filename = "`echo $filename | sed 's/list/root/'`"

if ($? == 0) then
<<<<<<< HEAD
  echo "Process finished. Listing current files: "
  echo "Hadd file will be named: " $argv[1]
  python $CMSSW_BASE/src/PhysicsTools/NanoAODTools/scripts/haddnano.py $argv[1] `ls *_Skim.root`
  ## Remove skim files once they are merged
  if ($? == 0) then
    foreach outfile (`ls *_Skim.root`)
=======
  foreach tarfile (`ls *gz FileList/*gz`)
    tar -tf $tarfile  | xargs rm -r
  end
  rm *Skim.root
  foreach outfile (`ls *root`)
    echo "Copying ${outfile} to ${OUTPUT}"
    xrdcp $outfile "root://cmseos.fnal.gov/${OUTPUT}/${filename}"
    if ($? == 0) then
>>>>>>> upstream/hui_trigger_eff
      rm $outfile
    end
  endif
  foreach i (1 2 3)
    xrdcp -f $argv[1] "root://cmseos.fnal.gov/${OUTPUT}/$argv[1]"
    ## Remove output file once it is copied
    if ($? == 0) then
      rm $argv[1] 
      break
    endif
  end
endif
