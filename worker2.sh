#!/bin/sh

executable=$1
inputFileTag=$2
outputFileTag=$3
#commitHash=$4
datasetName=$4
process=$5
LL=$6
phoID=$7
currDir=$(pwd)
######################################
# SETUP CMSSW STUFF...
######################################

source /cvmfs/cms.cern.ch/cmsset_default.sh
export SCRAM_ARCH=slc7_amd64_gcc820
scram p CMSSW CMSSW_11_1_0_pre3
cd CMSSW_11_1_0_pre3/src

eval `scramv1 runtime -sh`
pwd
echo $CMSSW_RELEASE_BASE
cd $currDir
echo $currDir


######################################
# SETUP PRIVATE STUFF...
######################################
echo "RUNNING ANALYSIS"
pwd
echo $executable
echo $inputFileTag
./$executable $inputFileTag $outputFileTag $datasetName $process $LL $phoID
echo "processed. ls"
ls
echo "COPYING OUTPUT"

#xrdcp -f skimmed_ntuple_$datasetName'_'$process'.root' root://cmseos.fnal.gov//store/user/kalpana/Susy_phoMet/SkimmedNtuples/
xrdcp -f $outputFileTag root://cmseos.fnal.gov//store/user/kalpana/ul_rootop_Analys_May2/v1/skimmed 

#xrdcp -f ${datasetName}'_'${outputFileTag} root://cmseos.fnal.gov//store/group/lpcsusyhad/SusyPhotonMET/Run2ProductionV17/background/skims/${outputFileTag}
rm $outputFileTag
rm skimmed_ntuple_$datasetName'_'$process'.root'
#xrdcp -f $outputFileTag root://cmseos.fnal.gov//store/group/lpcsusyhad/SusyPhotonMET/Run2ProductionV17/background/$outputFileTag
#xrdcp -f $outputFileTag root://cmseos.fnal.gov//store/user/bkansal/GMSB_skims_TreesV17/for_bkg_estimation/lost_electron/new2/CR_$outputFileTag
#xrdcp -f $outputFileTag root://cmseos.fnal.gov//store/user/bkansal/GMSB_skims_TreesV18/SignalRegion/skims/SR_$outputFileTag
#xrdcp -f $outputFileTag root://cmseos.fnal.gov//store/user/bkansal/GMSB_skims_TreesV18/for_bkg_estimation/lost_electron/CR_$outputFileTag
#rm $outputFileTag
