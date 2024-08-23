#!/bin/bash                                                                                                                                    

path=/store/user/lpcsusyhad/SusyRA2Analysis2015/Run2ProductionV20/Summer20UL16APV #/store/user/lpcsusyphotons/kalpana/SkimsUL_June2023
#/store/user/lpcsusyhad/SusyRA2Analysis2015/Run2ProductionV20/Summer20UL16APV
#/store/user/lpcsusyhad/SusyRA2Analysis2015/Run2ProductionV18/
#/store/user/kalpana/updatedbkgNtuples_skimmed_wphotPt20_MET100_Njets2_Jan2023
#/store/group/lpcsusyphotons/kalpana
#/store/user/kalpana/myProduction  #/store/user/kalpana/updatedbkgNtuples_skimmed_wphotPt20_MET100_Njets2_Jan2023/ #/store/user/kalpana/myProduction/ 
#/home/kalpana/t3store3/public/SUSY_GMSB_Aug_2020/CMSSW_11_1_0_pre3/src/GMSB_lowPtPhot_2021/Samples/Wjets/skims/

#phoID_loose_runList_Summer20UL17_TTJets_SingleLeptFromTba
for year in  Fall17
do
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ | grep skimmed_Summer20UL16APV_WGJets_MonoPhoton_PtG-40to130 > runList_skimmed_Summer20UL16APV_WGJets_MonoPhoton_PtG-40to130_v1.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ |grep skimmed_Summer20UL16APV_WGJets_MonoPhoton_PtG-130 > runList_skimmed_Summer20UL16APV_WGJets_MonoPhoton_PtG-130_v1.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ |grep skimmed_Summer20UL16APV_WJets > runList_skimmed_Summer20UL16APV_WJetsToLNu_HT_v1.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ |grep skimmed_Summer20UL16APV_TTJets_HT > runList_skimmed_Summer20UL16APV_TTJets_HT_v1.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ |grep Lept > runList_skimmed_Summer20UL16APV_TTJets_inc_v1.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ |grep skimmed_Summer20UL16APV_TTGJets_* > runList_skimmed_Summer20UL16APV_TTGJets_inc_v1.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ | grep skimmed_Summer20UL16_WGJets_MonoPhoton_PtG-40to130 > runList_skimmed_Summer20UL16_WGJets_MonoPhoton_PtG-40to130_v1.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ |grep skimmed_Summer20UL16_WGJets_MonoPhoton_PtG-130 > runList_skimmed_Summer20UL16_WGJets_MonoPhoton_PtG-130_v1.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ |grep skimmed_Summer20UL16_WJets > runList_skimmed_Summer20UL16_WJetsToLNu_HT_v1.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ |grep skimmed_Summer20UL16_TTJets_HT > runList_skimmed_Summer20UL16_TTJets_HT_v1.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ |grep Lept > runList_skimmed_Summer20UL16_TTJets_inc_v1.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ |grep skimmed_Summer20UL16_TTGJets_* > runList_skimmed_Summer20UL16_TTGJets_inc_v1.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ | grep skimmed_Summer20UL17_WGJets_MonoPhoton_PtG-40to130 > runList_skimmed_Summer20UL17_WGJets_MonoPhoton_PtG-40to130_v1.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ |grep skimmed_Summer20UL17_WGJets_MonoPhoton_PtG-130 > runList_skimmed_Summer20UL17_WGJets_MonoPhoton_PtG-130_v1.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ |grep skimmed_Summer20UL17_WJets > runList_skimmed_Summer20UL17_WJetsToLNu_HT_v1.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ |grep skimmed_Summer20UL17_TTJets_HT > runList_skimmed_Summer20UL17_TTJets_HT_v1.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ |grep Lept > runList_skimmed_Summer20UL17_TTJets_inc_v1.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ |grep skimmed_Summer20UL17_TTGJets_* > runList_skimmed_Summer20UL17_TTGJets_inc_v1.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ | grep skimmed_Summer20UL18_WGJets_MonoPhoton_PtG-40to130 > runList_skimmed_Summer20UL18_WGJets_MonoPhoton_PtG-40to130_v1.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ |grep skimmed_Summer20UL18_WGJets_MonoPhoton_PtG-130 > runList_skimmed_Summer20UL18_WGJets_MonoPhoton_PtG-130_v1.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ |grep skimmed_Summer20UL18_WJets > runList_skimmed_Summer20UL18_WJetsToLNu_HT_v1.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ |grep skimmed_Summer20UL18_TTJets_HT > runList_skimmed_Summer20UL18_TTJets_HT_v1.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ |grep Lept > runList_skimmed_Summer20UL18_TTJets_inc_v1.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ |grep skimmed_Summer20UL18_TTGJets_* > runList_skimmed_Summer20UL18_TTGJets_inc_v1.txt






    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ |grep skimmed_Summer20UL16_TTJets_HT > runList_skimmed_Summer20UL16_TTJets_HT.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ |grep Lept > runList_skimmed_Summer20UL16_TTJets_inc.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ |grep skimmed_Summer20UL16_TTGJets_* > runList_skimmed_Summer20UL16_TTGJets_inc.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ |grep skimmed_Summer20UL17_TTJets_HT > runList_skimmed_Summer20UL17_TTJets_HT.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ |grep Lept > runList_skimmed_Summer20UL17_TTJets_inc.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ |grep skimmed_Summer20UL17_TTGJets_*> runList_skimmed_Summer20UL17_TTGJets_inc.txt

    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ | grep -v1.MET >runList_data_2016B_17Jul2018_ver2v1_MET_ra2b.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ | grep Run2016C-17Jul2018_v1.MET  >runList_data_2016C_17Jul2018_v1.MET_ra2b.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ | grep Run2016D-17Jul2018_v1.MET  >runList_data_2016D_17Jul2018_v1.MET_ra2b.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ | grep Run2016E-17Jul2018_v1.MET  >runList_data_2016E_17Jul2018_v1.MET_ra2b.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ | grep Run2016F-17Jul2018_v1.MET  >runList_data_2016F_17Jul2018_v1.MET_ra2b.txt
    # # xrdfs root://cmseos.fnal.gov/ ls ${path}/ | grep Run2016G-17Jul2018_v1.MET  >runList_data_2016G_17Jul2018_v1.MET_ra2b.txt
    # # xrdfs root://cmseos.fnal.gov/ ls ${path}/ | grep Run2016H-17Jul2018_v1.MET  >runList_data_2016H_17Jul2018_v1.MET_ra2b.txt
    

    # xrdfs root://cmseos.fnal.gov/ ls ${path}/GJets_DR-0p4_HT-100To200_TuneCP5_13TeV-madgraphMLM-pythia8 | grep RA2AnalysisTree.root >runList_Summer20UL16APV_GJets_DR-0p4_HT-100To200_TuneCP5_13TeV-madgraphMLM-pythia8.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/GJets_DR-0p4_HT-200To400_TuneCP5_13TeV-madgraphMLM-pythia8 | grep RA2AnalysisTree.root >runList_Summer20UL16APV_GJets_DR-0p4_HT-200To400_TuneCP5_13TeV-madgraphMLM-pythia8.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/GJets_DR-0p4_HT-400To600_TuneCP5_13TeV-madgraphMLM-pythia8 | grep RA2AnalysisTree.root >runList_Summer20UL16APV_GJets_DR-0p4_HT-400To600_TuneCP5_13TeV-madgraphMLM-pythia8.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/GJets_DR-0p4_HT-600ToInf_TuneCP5_13TeV-madgraphMLM-pythia8 | grep RA2AnalysisTree.root >runList_Summer20UL16APV_GJets_DR-0p4_HT-600ToInf_TuneCP5_13TeV-madgraphMLM-pythia8.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/QCD_HT200to300_TuneCP5_PSWeights_13TeV-madgraph-pythia8 | grep RA2AnalysisTree.root >runList_Summer20UL16APV_QCD_HT200to300_TuneCP5_PSWeights_13TeV-madgraph-pythia8.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/QCD_HT300to500_TuneCP5_PSWeights_13TeV-madgraphMLM-pythia8 | grep RA2AnalysisTree.root >runList_Summer20UL16APV_QCD_HT300to500_TuneCP5_PSWeights_13TeV-madgraph-pythia8.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/QCD_HT500to700_TuneCP5_PSWeights_13TeV-madgraphMLM-pythia8 | grep RA2AnalysisTree.root >runList_Summer20UL16APV_QCD_HT500to700_TuneCP5_PSWeights_13TeV-madgraphMLM-pythia8.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/QCD_HT700to1000_TuneCP5_PSWeights_13TeV-madgraph-pythia8 | grep RA2AnalysisTree.root >runList_Summer20UL16APV_QCD_HT700to1000_TuneCP5_PSWeights_13TeV-madgraph-pythia8.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/QCD_HT1000to1500_TuneCP5_PSWeights_13TeV-madgraphMLM-pythia8 | grep RA2AnalysisTree.root >runList_Summer20UL16APV_QCD_HT1000to1500_TuneCP5_PSWeights_13TeV-madgraph-pythia8.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/QCD_HT1500to2000_TuneCP5_PSWeights_13TeV-madgraphMLM-pythia8 | grep RA2AnalysisTree.root >runList_Summer20UL16APV_QCD_HT1500to2000_TuneCP5_PSWeights_13TeV-madgraph-pythia8.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/QCD_HT2000toInf_TuneCP5_PSWeights_13TeV-madgraphMLM-pythia8 | grep RA2AnalysisTree.root >runList_Summer20UL16APV_QCD_HT2000toInf_TuneCP5_PSWeights_13TeV-madgraph-pythia8.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/WJetsToLNu_HT-100To200_TuneCP5_13TeV-madgraphMLM-pythia8  | grep  RA2AnalysisTree.root >runList_Summer20UL16APV_WJetsToLNu_HT-100To200_TuneCP5_13TeV-madgraphMLM-pythia8.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/WJetsToLNu_HT-200To400_TuneCP5_13TeV-madgraphMLM-pythia8  | grep  RA2AnalysisTree.root >runList_Summer20UL16APV_WJetsToLNu_HT-200To400_TuneCP5_13TeV-madgraphMLM-pythia8.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/WJetsToLNu_HT-400To600_TuneCP5_13TeV-madgraphMLM-pythia8  | grep  RA2AnalysisTree.root >runList_Summer20UL16APV_WJetsToLNu_HT-400To600_TuneCP5_13TeV-madgraphMLM-pythia8.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/WJetsToLNu_HT-600To800_TuneCP5_13TeV-madgraphMLM-pythia8  | grep  RA2AnalysisTree.root >runList_Summer20UL16APV_WJetsToLNu_HT-600To800_TuneCP5_13TeV-madgraphMLM-pythia8.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/WJetsToLNu_HT-800To1200_TuneCP5_13TeV-madgraphMLM-pythia8  | grep  RA2AnalysisTree.root >runList_Summer20UL16APV_WJetsToLNu_HT-800To1200_TuneCP5_13TeV-madgraphMLM-pythia8.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/WJetsToLNu_HT-1200To2500_TuneCP5_13TeV-madgraphMLM-pythia8  | grep  RA2AnalysisTree.root >runList_Summer20UL16APV_WJetsToLNu_HT-1200To2500_TuneCP5_13TeV-madgraphMLM-pythia8.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/WJetsToLNu_HT-2500ToInf_TuneCP5_13TeV-madgraphMLM-pythia8  | grep  RA2AnalysisTree.root >runList_Summer20UL16APV_WJetsToLNu_HT-2500ToInf_TuneCP5_13TeV-madgraphMLM-pythia8.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/TTGJets_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8 | grep  RA2AnalysisTree.root >runList_Summer20UL16APV_TTGJets_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/TTJets_DiLept_TuneCP5_13TeV-madgraphMLM-pythia8 | grep  RA2AnalysisTree.root >runList_Summer20UL16APV_TTJets_DiLept_TuneCP5_13TeV-madgraphMLM-pythia8.txt
    xrdfs root://cmseos.fnal.gov/ ls ${path}/ZNuNuGJets_MonoPhoton_PtG-130_TuneCP5_13TeV-amcatnloFXFX-pythia8 | grep  RA2AnalysisTree.root >runList_Summer20UL16APV_ZNuNuGJets_MonoPhoton_PtG-130_TuneCP5_13TeV-amcatnloFXFX-pythia8.txt         
    xrdfs root://cmseos.fnal.gov/ ls ${path}/ZNuNuGJets_MonoPhoton_PtG-40to130_TuneCP5_13TeV-amcatnloFXFX-pythia8 | grep  RA2AnalysisTree.root >runList_Summer20UL16APV_ZNuNuGJets_MonoPhoton_PtG-40to130_TuneCP5_13TeV-amcatnloFXFX-pythia8.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/TTJets_SingleLeptFromT_TuneCP5_13TeV-madgraphMLM-pythia8  | grep  RA2AnalysisTree.root >runList_Summer20UL16APV_TTJets_SingleLeptFromT_TuneCP5_13TeV-madgraphMLM-pythia8.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/TTJets_SingleLeptFromTbar_TuneCP5_13TeV-madgraphMLM-pythia8  | grep  RA2AnalysisTree.root >runList_Summer20UL16APV_TTJets_SingleLeptFromTbar_TuneCP5_13TeV-madgraphMLM-pythia8.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/TTJets_HT-600to800_TuneCP5_13TeV-madgraphMLM-pythia8  | grep  RA2AnalysisTree.root >runList_Summer20UL16APV_TTJets_HT-600to800_TuneCP5_13TeV-madgraphMLM-pythia8.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/TTJets_HT-800to1200_TuneCP5_13TeV-madgraphMLM-pythia8  | grep  RA2AnalysisTree.root >runList_Summer20UL16APV_TTJets_HT-800to1200_TuneCP5_13TeV-madgraphMLM-pythia8.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/TTJets_HT-1200to2500_TuneCP5_13TeV-madgraphMLM-pythia8  | grep  RA2AnalysisTree.root >runList_Summer20UL16APV_TTJets_HT-1200to2500_TuneCP5_13TeV-madgraphMLM-pythia8.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/TTJets_HT-2500toInf_TuneCP5_13TeV-madgraphMLM-pythia8  | grep  RA2AnalysisTree.root >runList_Summer20UL16APV_TTJets_HT-2500toInf_TuneCP5_13TeV-madgraphMLM-pythia8.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/WGJets_MonoPhoton_PtG-40to130_TuneCP5_13TeV-madgraph-pythia8 | grep  RA2AnalysisTree.root >runList_Summer20UL16APV_WGJets_MonoPhoton_PtG-40to130_TuneCP5_13TeV-madgraph-pythia8.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/WGJets_MonoPhoton_PtG-130_TuneCP5_13TeV-madgraph-pythia8 | grep  RA2AnalysisTree.root >runList_Summer20UL16APV_WGJets_MonoPhoton_PtG-130_TuneCP5_13TeV-madgraph-pythia8.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ZJetsToNuNu_HT-100To200_TuneCP5_13TeV-madgraphMLM-pythia8 | grep  RA2AnalysisTree.root >runList_Summer20UL16APV_ZJetsToNuNu_HT-100To200_TuneCP5_13TeV-madgraphMLM-pythia8.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ZJetsToNuNu_HT-200To400_TuneCP5_13TeV-madgraphMLM-pythia8 | grep  RA2AnalysisTree.root >runList_Summer20UL16APV_ZJetsToNuNu_HT-200To400_TuneCP5_13TeV-madgraphMLM-pythia8.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ZJetsToNuNu_HT-400To600_TuneCP5_13TeV-madgraphMLM-pythia8 | grep  RA2AnalysisTree.root >runList_Summer20UL16APV_ZJetsToNuNu_HT-400To600_TuneCP5_13TeV-madgraphMLM-pythia8.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ZJetsToNuNu_HT-600To800_TuneCP5_13TeV-madgraphMLM-pythia8 | grep  RA2AnalysisTree.root >runList_Summer20UL16APV_ZJetsToNuNu_HT-600To800_TuneCP5_13TeV-madgraphMLM-pythia8.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ZJetsToNuNu_HT-800To1200_TuneCP5_13TeV-madgraphMLM-pythia8 | grep  RA2AnalysisTree.root >runList_Summer20UL16APV_ZJetsToNuNu_HT-800To1200_TuneCP5_13TeV-madgraphMLM-pythia8.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ZJetsToNuNu_HT-1200To2500_TuneCP5_13TeV-madgraphMLM-pythia8 | grep  RA2AnalysisTree.root >runList_Summer20UL16APV_ZJetsToNuNu_HT-1200T5o200_TuneCP5_13TeV-madgraphMLM-pythia8.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ZJetsToNuNu_HT-2500ToInf_TuneCP5_13TeV-madgraphMLM-pythia8 | grep  RA2AnalysisTree.root >runList_Summer20UL16APV_ZJetsToNuNu_HT-2500ToInf_TuneCP5_13TeV-madgraphMLM-pythia8.txt







    








    # xrdfs root://cmseos.fnal.gov/ ls /store/user/lpcsusyhad/SusyRA2Analysis2015/Run2ProductionV18 | grep Autumn18.ZJetsToNuNu_HT> runList_official.txt 
    # xrdfs root://cmseos.fnal.gov/ ls /store/group/lpcsusyhad/SusyPhotonMET/Run2ProductionV18/background/ZGjets/ | grep Autumn18.ZNuNuGJets_MonoPhoton_PtG-40to130 >runList_ZGjets_PtG-40to130.txt
    # xrdfs root://cmseos.fnal.gov/ ls /store/group/lpcsusyhad/SusyPhotonMET/Run2ProductionV18/background/ZGjets/ | grep Autumn18.ZNuNuGJets_MonoPhoton_PtG-130 >runList_ZGjets_PtG-130.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ | grep runList_preUL_Autumn18_ZNuNuGJets_PtG-40to130_ > runList_skimmed_preUL_Autumn18_ZNuNuGJets_PtG-40to130.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ | grep runList_preUL_Autumn18_ZNuNuGJets_PtG-130_ > runList_skimmed_preUL_Autumn18_ZNuNuGJets_PtG-130.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ | grep runList_preUL_Autumn18_QCD_HT700to1000_ >runList_skimmed_preUL_Autumn18_QCD_HT700to1000.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ | grep runList_preUL_Autumn18_QCD_HT200to300_ >runList_skimmed_preUL_Autumn18_QCD_HT200to300.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ | grep runList_preUL_Autumn18_QCD_HT300to500_ >runList_skimmed_preUL_Autumn18_QCD_HT300to500.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ | grep runList_preUL_Autumn18_QCD_HT500to700_ >runList_skimmed_preUL_Autumn18_QCD_HT500to700.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ | grep runList_preUL_Autumn18_QCD_HT1000to1500_ >runList_skimmed_preUL_Autumn18_QCD_HT1000to1500.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ | grep runList_preUL_Autumn18_QCD_HT1500to2000_ >runList_skimmed_preUL_Autumn18_QCD_HT1500to2000.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ | grep runList_preUL_Autumn18_QCD_HT2000toInf_ >runList_skimmed_preUL_Autumn18_QCD_HT2000toInf.txt




    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ | grep runList_preUL_Autumn18_GJets_DR-0p4_HT-100To200_ >runList_skimmed_preUL_Autumn18_GJets_DR-0p4_HT-100To200.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ | grep runList_preUL_Autumn18_GJets_DR-0p4_HT-200To400_ >runList_skimmed_preUL_Autumn18_GJets_DR-0p4_HT-200To400.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ | grep runList_preUL_Autumn18_GJets_DR-0p4_HT-400To600_ >runList_skimmed_preUL_Autumn18_GJets_DR-0p4_HT-400To600.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ | grep runList_preUL_Autumn18_GJets_DR-0p4_HT-600ToInf_ >runList_skimmed_preUL_Autumn18_GJets_DR-0p4_HT-600ToInf.txt
    
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ | grep runList_preUL_Autumn18_ZNuNuJets_HT-100To200 > runList_skimmed_preUL_Autumn18_ZNuNuJets_HT-100To200.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ | grep runList_preUL_Autumn18_ZNuNuJets_HT-200To400 > runList_skimmed_preUL_Autumn18_ZNuNuJets_HT-200To400.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ | grep runList_preUL_Autumn18_ZNuNuJets_HT-400To600 > runList_skimmed_preUL_Autumn18_ZNuNuJets_HT-400To600.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ | grep runList_preUL_Autumn18_ZNuNuJets_HT-600To800 > runList_skimmed_preUL_Autumn18_ZNuNuJets_HT-600To800.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ | grep runList_preUL_Autumn18_ZNuNuJets_HT-800To1200 > runList_skimmed_preUL_Autumn18_ZNuNuJets_HT-800To1200.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ | grep runList_preUL_Autumn18_ZNuNuJets_HT-1200To2500 > runList_skimmed_preUL_Autumn18_ZNuNuJets_HT-1200To2500.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/ | grep runList_preUL_Autumn18_ZNuNuJets_HT-2500ToInf > runList_skimmed_preUL_Autumn18_ZNuNuJets_HT-2500ToInf.txt

    # xrdfs root://cmseos.fnal.gov/ ls ${path}/UL18_WGJets/ | grep WGJets_MonoPhoton_PtG-40to130 > runList_UL_Autumn18_WGJetsPtG-40To130_v18.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/UL18_WGJets/ | grep WGJets_MonoPhoton_PtG-130 > runList_UL_Autumn18_WGJetsPtG-130_v18.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/UL18_WJets_HT/ | grep Summer20UL16APV.WJetsToLNu_HT-100To200 > runList_UL_Autumn18_WJetsToLNu_HT-100To200_v18.txt 
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/UL18_WJets_HT/ | grep Summer20UL16APV.WJetsToLNu_HT-200To400 > runList_UL_Autumn18_WJetsToLNu_HT-200To400_v18.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/UL18_WJets_HT/ | grep Summer20UL16APV.WJetsToLNu_HT-400To600 > runList_UL_Autumn18_WJetsToLNu_HT-400To600_v18.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/UL18_WJets_HT/ | grep Summer20UL16APV.WJetsToLNu_HT-600To800 > runList_UL_Autumn18_WJetsToLNu_HT-600To800_v18.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/UL18_WJets_HT/ | grep Summer20UL16APV.WJetsToLNu_HT-800To1200 > runList_UL_Autumn18_WJetsToLNu_HT-800To1200_v18.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/UL18_WJets_HT/ | grep Summer20UL16APV.WJetsToLNu_HT-1200To2500 > runList_UL_Autumn18_WJetsToLNu_HT-1200To2500_v18.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path}/UL18_WJets_HT/ | grep Summer20UL16APV.WJetsToLNu_HT-2500ToInf > runList_UL_Autumn18_WJetsToLNu_HT-2500ToInf_v18.txt



    # xrdfs root://cmseos.fnal.gov/ ls ${path} | grep WGJets_MonoPhoton_PtG-130 >runList_Autumn18_lowPhopT_WGJetsPtG-130_v18.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path} | grep WGJets_MonoPhoton_PtG-40to130 >runList_Autumn18_lowPhopT_WGJetsPtG-40to130_v18.txt
   #  xrdfs root://cmseos.fnal.gov/ ls ${path} | grep WJetsToLNu_HT-100To200 >runList_Autumn18_lowPhopT_Autumn18.WJetsToLNu_HT-100To200_TuneCP5_13TeV-madgraphMLM-pythia8_v18.txt
#     xrdfs root://cmseos.fnal.gov/ ls ${path} | grep WJetsToLNu_HT-200To400 >runList_Autumn18_lowPhopT_Autumn18.WJetsToLNu_HT-200To400_TuneCP5_13TeV-madgraphMLM-pythia8_v18.txt
#     xrdfs root://cmseos.fnal.gov/ ls ${path} | grep WJetsToLNu_HT-400To600 >runList_Autumn18_lowPhopT_Autumn18.WJetsToLNu_HT-400To600_TuneCP5_13TeV-madgraphMLM-pythia8_v18.txt
#     xrdfs root://cmseos.fnal.gov/ ls ${path} | grep WJetsToLNu_HT-600To800 >runList_Autumn18_lowPhopT_Autumn18.WJetsToLNu_HT-600To800_TuneCP5_13TeV-madgraphMLM-pythia8_v18.txt
#     xrdfs root://cmseos.fnal.gov/ ls ${path} | grep WJetsToLNu_HT-800To1200 >runList_Autumn18_lowPhopT_Autumn18.WJetsToLNu_HT-800To1200_TuneCP5_13TeV-madgraphMLM-pythia8_v18.txt
#     xrdfs root://cmseos.fnal.gov/ ls ${path} | grep WJetsToLNu_HT-1200To2500 >runList_Autumn18_lowPhopT_Autumn18.WJetsToLNu_HT-1200To2500_TuneCP5_13TeV-madgraphMLM-pythia8_v18.txt
#     xrdfs root://cmseos.fnal.gov/ ls ${path} | grep WJetsToLNu_HT-2500ToInf >runList_Autumn18_lowPhopT_Autumn18.WJetsToLNu_HT-2500ToInf_TuneCP5\
# _13TeV-madgraphMLM-pythia8_v18.txt
    #xrdfs root://cmseos.fnal.gov/ ls ${path} | grep WJetsToLNu_HT-600To800 >temp_runList_Autumn18_lowPhopT_WJetsToLNu_HT_600to800_v18.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path} | grep WJetsToLNu_HT-800To1200 >temp_runList_Autumn18_lowPhopT_WJetsToLNu_HT_800to1200_v18.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path} | grep WJetsToLNu_HT-1200To2500 >temp_runList_Autumn18_lowPhopT_WJetsToLNu_HT_1200to2500_v18.txt
    # xrdfs root://cmseos.fnal.gov/ ls ${path} | grep WJetsToLNu_HT-2500ToInf >temp_runList_Autumn18_lowPhopT_WJetsToLNu_HT_2500toInf_v18.txt


    # ls ${path}/${year}.TTGJets_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8_v18.root > runList_TTGJets_${year}_v18.txt
    # ls ${path}/SR_${year}.TTJets_HT*.root > runList_TTJets-HT_${year}_v18.txt
    # ls ${path}/SR_${year}.TTJets_*Lept*.root > runList_TTJets-inc_${year}_v18.txt
    # eosls ${path}/${year}.WGJets_MonoPhoton_PtG-*.root > runList_WGJets_${year}_v18.txt
    # eosls ${path}/${year}.WJetsToLNu_HT-*.root > runList_WJets_${year}_v18.txt
    # ls ${path}/SR_${year}.ZJetsToNuNu_HT*.root > runList_ZJets_${year}_v18.txt
    # ls ${path}/SR_${year}.ZNuNuGJets_MonoPhoton_PtG-*.root > runList_ZGJets_${year}_v18.txt
    # ls ${path}/SR_${year}.QCD_HT*.root > runList_QCD_${year}_v18.txt
    # ls ${path}/SR_${year}.GJets_DR*.root > runList_GJets_DR_${year}_v18.txt
done

# year=Summer16v3
   
# ls ${path}/SR_${year}.TTGJets_TuneCUETP8M1_13TeV-amcatnloFXFX-madspin-pythia8_v18.root > runList_TTGJets_${year}_v18.txt
# ls ${path}/SR_${year}.TTJets_HT*.root > runList_TTJets-HT_${year}_v18.txt
# ls ${path}/SR_${year}.TTJets_*Lept*.root > runList_TTJets-inc_${year}_v18.txt
# ls ${path}/SR_${year}.WGJets_MonoPhoton_PtG-*_TuneCUETP8M1_13TeV-madgraph_v18.root > runList_WGJets_${year}_v18.txt
# ls ${path}/SR_${year}.WJetsToLNu_HT-*.root > runList_WJets_${year}_v18.txt
# ls ${path}/SR_${year}.ZJetsToNuNu_HT*.root > runList_ZJets_${year}_v18.txt
# ls ${path}/SR_${year}.ZNuNuGJets_MonoPhoton_PtG-*.root > runList_ZGJets_${year}_v18.txt
# ls ${path}/SR_${year}.QCD_HT*.root > runList_QCD_${year}_v18.txt
# ls ${path}/SR_${year}.GJets_DR*.root > runList_GJets_DR_${year}_v18.txt
