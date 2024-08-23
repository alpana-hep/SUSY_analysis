## This code is for implementing all baseline selections and checking their impact on different MC samples.

## Instructions to run the code -
```
git clone -b UL_baselineMachinery https://github.com/alpana-hep/susy_2020.git .
make (run make after you change anything in any of the source/header file)
./analyzeLightBSM <filelist> <outfile> <year <process> Electron <photon ID>
```
String 'Electron' is not used inside the code anywhere, so keep it constant.
Note - if you are reading nevents & cross section from the 'map_crosssection_SMprocess_v1.txt' file then make sure to keep the <process> name similar to the saved in 'map_crosssection_SMprocess.txt' and should contain UL in it if you are analyzing UL ntuples.
<photon ID>: 'loose', 'medium', 'tight','mva_wp90','mva_p80'
(Note-  first three are cutbased ID recommended by Egamma group.)

To submit the condor jobs:
<executable> is 'worker2.sh' (change or add destination path in worker2.sh). If no path is added than it will store in the parent directory from where the jobs are submitted. 

spliRunlist.C - create condor files and submit the condor jobs (improtant to add the files which you want to transfer)
submitMany2.sh - submit multiple jobs at a time.
clean*.sh - to clean the log files of the condor jobs

Example to run the script
```
./analyzeLightBSM temp_QCD.txt out_Summer20UL18_WJetsToLNu_HT-100To200_v20.root 2018 WJetsUL Electron loose
```
Example to submit condor jobs
```
source submitMany2.sh
``