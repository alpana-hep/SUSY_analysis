#!/bin/bash                                                                                                                                      
path=/store/user/kalpana/ul_rootop_Analys_May2
hadd -f out_Data_UL2018_Run2018D_MET_phoID_loose_pt100_MET300_Muon.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_UL2018_Run2018D_v1_MET_pt100_MET300_Muon'`
hadd -f out_Data_UL2018_Run2018A_MET_phoID_loose_pt100_MET300_Muon.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_UL2018_Run2018A_v2_MET_pt100_MET300_Muon'`
hadd -f out_Data_UL2018_Run2018B_MET_phoID_loose_pt100_MET300_Muon.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_UL2018_Run2018B_v2_MET_pt100_MET300_Muon'`
hadd -f out_Data_UL2018_Run2018C_MET_phoID_loose_pt100_MET300_Muon.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_UL2018_Run2018C_v1_MET_pt100_MET300_Muon'`
hadd -f out_Data_UL2018_Run2018D_MET_phoID_loose_pt100_MET300_Electron.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_UL2018_Run2018D_v1_MET_pt100_MET300_Electron'`
hadd -f out_Data_UL2018_Run2018A_MET_phoID_loose_pt100_MET300_Electron.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_UL2018_Run2018A_v2_MET_pt100_MET300_Electron'`
hadd -f out_Data_UL2018_Run2018B_MET_phoID_loose_pt100_MET300_Electron.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_UL2018_Run2018B_v2_MET_pt100_MET300_Electron'`
hadd -f out_Data_UL2018_Run2018C_MET_phoID_loose_pt100_MET300_Electron.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_UL2018_Run2018C_v1_MET_pt100_MET300_Electron'`

hadd -f out_Data_UL2017_Run2017B_MET_phoID_loose_pt100_MET300_Electron.root  `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_UL2017_Run2017B_v1_MET_pt100_MET300_Electron'`
hadd -f out_Data_UL2017_Run2017C_MET_phoID_loose_pt100_MET300_Electron.root  `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_UL2017_Run2017C_v1_MET_pt100_MET300_Electron'`
hadd -f out_Data_UL2017_Run2017D_MET_phoID_loose_pt100_MET300_Electron.root  `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_UL2017_Run2017D_v1_MET_pt100_MET300_Electron'`
hadd -f out_Data_UL2017_Run2017E_MET_phoID_loose_pt100_MET300_Electron.root  `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_UL2017_Run2017E_v1_MET_pt100_MET300_Electron'`
hadd -f out_Data_UL2017_Run2017F_MET_phoID_loose_pt100_MET300_Electron.root  `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_UL2017_Run2017F_v1_MET_pt100_MET300_Electron'`
hadd -f out_Data_UL2017_Run2017B_MET_phoID_loose_pt100_MET300_Muon.root  `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_UL2017_Run2017B_v1_MET_pt100_MET300_Muon'`
hadd -f out_Data_UL2017_Run2017C_MET_phoID_loose_pt100_MET300_Muon.root  `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_UL2017_Run2017C_v1_MET_pt100_MET300_Muon'`
hadd -f out_Data_UL2017_Run2017D_MET_phoID_loose_pt100_MET300_Muon.root  `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_UL2017_Run2017D_v1_MET_pt100_MET300_Muon'`
hadd -f out_Data_UL2017_Run2017E_MET_phoID_loose_pt100_MET300_Muon.root  `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_UL2017_Run2017E_v1_MET_pt100_MET300_Muon'`
hadd -f out_Data_UL2017_Run2017F_MET_phoID_loose_pt100_MET300_Muon.root  `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_UL2017_Run2017F_v1_MET_pt100_MET300_Muon'`

hadd -f out_Data_UL2016APV_Run2016B_MET_phoID_loose_pt100_MET300_Electron.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_UL2016APV_Run2016B-UL2016_HIPM-ver2-v2_MET_pt100_MET300_Electron'`
hadd -f out_Data_UL2016APV_Run2016C_MET_phoID_loose_pt100_MET300_Electron.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_UL2016APV_Run2016C-UL2016_HIPM-v2_MET_pt100_MET300_Electron'`
hadd -f out_Data_UL2016APV_Run2016D_MET_phoID_loose_pt100_MET300_Electron.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_UL2016APV_Run2016D-UL2016_HIPM-v2_MET_pt100_MET300_Electron'`
hadd -f out_Data_UL2016APV_Run2016E_MET_phoID_loose_pt100_MET300_Electron.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_UL2016APV_Run2016E-UL2016_HIPM-v2_MET_pt100_MET300_Electron'`
hadd -f out_Data_UL2016APV_Run2016F_MET_phoID_loose_pt100_MET300_Electron.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_UL2016APV_Run2016F-UL2016_HIPM-v2_MET_pt100_MET300_Electron'`


hadd -f out_Data_UL2016APV_Run2016B_MET_phoID_loose_pt100_MET300_Muon.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_UL2016APV_Run2016B-UL2016_HIPM-ver2-v2_MET_pt100_MET300_Muon'`
hadd -f out_Data_UL2016APV_Run2016C_MET_phoID_loose_pt100_MET300_Muon.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_UL2016APV_Run2016C-UL2016_HIPM-v2_MET_pt100_MET300_Muon'`
hadd -f out_Data_UL2016APV_Run2016D_MET_phoID_loose_pt100_MET300_Muon.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_UL2016APV_Run2016D-UL2016_HIPM-v2_MET_pt100_MET300_Muon'`
hadd -f out_Data_UL2016APV_Run2016E_MET_phoID_loose_pt100_MET300_Muon.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_UL2016APV_Run2016E-UL2016_HIPM-v2_MET_pt100_MET300_Muon'`
hadd -f out_Data_UL2016APV_Run2016F_MET_phoID_loose_pt100_MET300_Muon.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_UL2016APV_Run2016F-UL2016_HIPM-v2_MET_pt100_MET300_Muon'`

hadd -f out_Data_UL2016_Run2016F_MET_phoID_loose_pt100_MET300_Muon.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_UL2016_Run2016F-UL2016-v2_MET_pt100_MET300_Muon'`
hadd -f out_Data_UL2016_Run2016G_MET_phoID_loose_pt100_MET300_Muon.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_UL2016_Run2016G-UL2016-v2_MET_pt100_MET300_Muon'`
hadd -f out_Data_UL2016_Run2016H_MET_phoID_loose_pt100_MET300_Muon.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_UL2016_Run2016H-UL2016-v2_MET_pt100_MET300_Muon'`
hadd -f out_Data_UL2016_Run2016F_MET_phoID_loose_pt100_MET300_Electron.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_UL2016_Run2016F-UL2016-v2_MET_pt100_MET300_Electron'`
hadd -f out_Data_UL2016_Run2016G_MET_phoID_loose_pt100_MET300_Electron.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_UL2016_Run2016G-UL2016-v2_MET_pt100_MET300_Electron'`
hadd -f out_Data_UL2016_Run2016H_MET_phoID_loose_pt100_MET300_Electron.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_UL2016_Run2016H-UL2016-v2_MET_pt100_MET300_Electron'`














hadd -f Summer20UL17_TTJets_HT_PhoIdloose_phopt100_MET300_MuonLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL17_TTJets_HT_v1_pt100_MET300_Muon'`
hadd -f Summer20UL16_TTJets_HT_PhoIdloose_phopt100_MET300_MuonLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL16_TTJets_HT_v1_pt100_MET300_Muon'`
hadd -f Summer20UL18_TTJets_HT_PhoIdloose_phopt100_MET300_MuonLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL18_TTJets_HT_v1_pt100_MET300_Muon'`
hadd -f Summer20UL17_TTJets_HT_PhoIdloose_phopt100_MET300_ElectronLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL17_TTJets_HT_v1_pt100_MET300_Electron'`
hadd -f Summer20UL16_TTJets_HT_PhoIdloose_phopt100_MET300_ElectronLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL16_TTJets_HT_v1_pt100_MET300_Electron'`
hadd -f Summer20UL18_TTJets_HT_PhoIdloose_phopt100_MET300_ElectronLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL18_TTJets_HT_v1_pt100_MET300_Electron'`

hadd -f Summer20UL16APV_TTJets_HT_PhoIdloose_phopt100_MET300_MuonLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL16APV_TTJets_HT_v1_pt100_MET300_Muon'`
hadd -f Summer20UL16APV_TTGJets_inc_PhoIdloose_phopt100_MET300_MuonLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL16APV_TTGJets_inc_v1_pt100_MET300_Muon'`
hadd -f Summer20UL16APV_WGJets_MonoPhoton_PtG-40to130_PhoIdloose_phopt100_MET300_MuonLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL16APV_WGJets_MonoPhoton_PtG-40to130_v1_pt100_MET300_Muon'`
hadd -f Summer20UL16APV_WGJets_MonoPhoton_PtG-130_PhoIdloose_phopt100_MET300_MuonLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL16APV_WGJets_MonoPhoton_PtG-130_v1_pt100_MET300_Muon'`
hadd -f Summer20UL16APV_WJetsToLNu_HT_PhoIdloose_phopt100_MET300_MuonLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL16APV_WJetsToLNu_HT_v1_pt100_MET300_Muon'`
hadd -f Summer20UL16APV_TTJets_inc_PhoIdloose_phopt100_MET300_MuonLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL16APV_TTJets_inc_v1_pt100_MET300_Muon'`

hadd -f Summer20UL16APV_TTJets_HT_PhoIdloose_phopt100_MET300_ElectronLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL16APV_TTJets_HT_v1_pt100_MET300_Electron'`
hadd -f Summer20UL16APV_TTGJets_inc_PhoIdloose_phopt100_MET300_ElectronLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL16APV_TTGJets_inc_v1_pt100_MET300_Electron'`
hadd -f Summer20UL16APV_WGJets_MonoPhoton_PtG-40to130_PhoIdloose_phopt100_MET300_ElectronLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL16APV_WGJets_MonoPhoton_PtG-40to130_v1_pt100_MET300_Electron'`
hadd -f Summer20UL16APV_WGJets_MonoPhoton_PtG-130_PhoIdloose_phopt100_MET300_ElectronLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL16APV_WGJets_MonoPhoton_PtG-130_v1_pt100_MET300_Electron'`
hadd -f Summer20UL16APV_WJetsToLNu_HT_PhoIdloose_phopt100_MET300_ElectronLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL16APV_WJetsToLNu_HT_v1_pt100_MET300_Electron'`
hadd -f Summer20UL16APV_TTJets_inc_PhoIdloose_phopt100_MET300_ElectronLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL16APV_TTJets_inc_v1_pt100_MET300_Electron'`



hadd -f Summer20UL17_TTGJets_inc_PhoIdloose_phopt100_MET300_MuonLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL17_TTGJets_inc_v1_pt100_MET300_Muon'`
hadd -f Summer20UL16_TTGJets_inc_PhoIdloose_phopt100_MET300_MuonLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL16_TTGJets_inc_v1_pt100_MET300_Muon'`
hadd -f Summer20UL18_TTGJets_inc_PhoIdloose_phopt100_MET300_MuonLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL18_TTGJets_inc_v1_pt100_MET300_Muon'`
hadd -f Summer20UL17_TTGJets_inc_PhoIdloose_phopt100_MET300_ElectronLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL17_TTGJets_inc_v1_pt100_MET300_Electron'`
hadd -f Summer20UL16_TTGJets_inc_PhoIdloose_phopt100_MET300_ElectronLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL16_TTGJets_inc_v1_pt100_MET300_Electron'`
hadd -f Summer20UL18_TTGJets_inc_PhoIdloose_phopt100_MET300_ElectronLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL18_TTGJets_inc_v1_pt100_MET300_Electron'`

hadd -f Summer20UL17_WGJets_MonoPhoton_PtG-40to130_PhoIdloose_phopt100_MET300_MuonLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL17_WGJets_MonoPhoton_PtG-40to130_v1_pt100_MET300_Muon'`
hadd -f Summer20UL16_WGJets_MonoPhoton_PtG-40to130_PhoIdloose_phopt100_MET300_MuonLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL16_WGJets_MonoPhoton_PtG-40to130_v1_pt100_MET300_Muon'`

hadd -f Summer20UL18_WGJets_MonoPhoton_PtG-40to130_PhoIdloose_phopt100_MET300_MuonLL_v1.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL18_WGJets_MonoPhoton_PtG-40to130_v1_v1_pt100_MET300_Muon'`
                                                                                               
hadd -f Summer20UL18_WGJets_MonoPhoton_PtG-40to130_PhoIdloose_phopt100_MET300_ElectronLL_v1.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL18_WGJets_MonoPhoton_PtG-40to130_v1_v1_pt100_MET300_Electron'`                                                                                      
hadd -f Summer20UL18_WGJets_MonoPhoton_PtG-130_PhoIdloose_phopt100_MET300_MuonLL_v1.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL18_WGJets_MonoPhoton_PtG-130_v1_v1_pt100_MET300_Muon'`

hadd -f Summer20UL18_WGJets_MonoPhoton_PtG-130_PhoIdloose_phopt100_MET300_ElectronLL_v1.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL18_WGJets_MonoPhoton_PtG-130_v1_v1_pt100_MET300_Electron'`


hadd -f Summer20UL17_WGJets_MonoPhoton_PtG-40to130_PhoIdloose_phopt100_MET300_ElectronLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL17_WGJets_MonoPhoton_PtG-40to130_v1_pt100_MET300_Electron'`
hadd -f Summer20UL16_WGJets_MonoPhoton_PtG-40to130_PhoIdloose_phopt100_MET300_ElectronLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL16_WGJets_MonoPhoton_PtG-40to130_v1_pt100_MET300_Electron'`
hadd -f Summer20UL18_WGJets_MonoPhoton_PtG-40to130_PhoIdloose_phopt100_MET300_ElectronLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL18_WGJets_MonoPhoton_PtG-40to130_v1_pt100_MET300_Electron'`

hadd -f Summer20UL17_WGJets_MonoPhoton_PtG-130_PhoIdloose_phopt100_MET300_MuonLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL17_WGJets_MonoPhoton_PtG-130_v1_pt100_MET300_Muon'`
hadd -f Summer20UL16_WGJets_MonoPhoton_PtG-130_PhoIdloose_phopt100_MET300_MuonLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL16_WGJets_MonoPhoton_PtG-130_v1_pt100_MET300_Muon'`
hadd -f Summer20UL18_WGJets_MonoPhoton_PtG-130_PhoIdloose_phopt100_MET300_MuonLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL18_WGJets_MonoPhoton_PtG-130_v1_pt100_MET300_Muon'`
hadd -f Summer20UL17_WGJets_MonoPhoton_PtG-130_PhoIdloose_phopt100_MET300_ElectronLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL17_WGJets_MonoPhoton_PtG-130_v1_pt100_MET300_Electron'`
hadd -f Summer20UL16_WGJets_MonoPhoton_PtG-130_PhoIdloose_phopt100_MET300_ElectronLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL16_WGJets_MonoPhoton_PtG-130_v1_pt100_MET300_Electron'`
hadd -f Summer20UL18_WGJets_MonoPhoton_PtG-130_PhoIdloose_phopt100_MET300_ElectronLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL18_WGJets_MonoPhoton_PtG-130_v1_pt100_MET300_Electron'`

# ##phoID_loose_runList_skimmed_Summer20UL18_WJetsToLNu_HT_v1_pt100_MET300
hadd -f Summer20UL17_WJetsToLNu_HT_PhoIdloose_phopt100_MET300_MuonLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL17_WJetsToLNu_HT_v1_pt100_MET300_Muon'`
hadd -f Summer20UL16_WJetsToLNu_HT_PhoIdloose_phopt100_MET300_MuonLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL16_WJetsToLNu_HT_v1_pt100_MET300_Muon'`
hadd -f Summer20UL18_WJetsToLNu_HT_PhoIdloose_phopt100_MET300_MuonLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL18_WJetsToLNu_HT_v1_pt100_MET300_Muon'`
hadd -f Summer20UL17_WJetsToLNu_HT_PhoIdloose_phopt100_MET300_ElectronLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL17_WJetsToLNu_HT_v1_pt100_MET300_Electron'`
hadd -f Summer20UL16_WJetsToLNu_HT_PhoIdloose_phopt100_MET300_ElectronLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL16_WJetsToLNu_HT_v1_pt100_MET300_Electron'`
hadd -f Summer20UL18_WJetsToLNu_HT_PhoIdloose_phopt100_MET300_ElectronLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL18_WJetsToLNu_HT_v1_pt100_MET300_Electron'`
hadd -f Summer20UL17_TTJets_inc_PhoIdloose_phopt100_MET300_MuonLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL17_TTJets_inc_v1_pt100_MET300_Muon'`
hadd -f Summer20UL16_TTJets_inc_PhoIdloose_phopt100_MET300_MuonLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL16_TTJets_inc_v1_pt100_MET300_Muon'`
hadd -f Summer20UL18_TTJets_inc_PhoIdloose_phopt100_MET300_MuonLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL18_TTJets_inc_v1_pt100_MET300_Muon'`
hadd -f Summer20UL17_TTJets_inc_PhoIdloose_phopt100_MET300_ElectronLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL17_TTJets_inc_v1_pt100_MET300_Electron'`
hadd -f Summer20UL16_TTJets_inc_PhoIdloose_phopt100_MET300_ElectronLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL16_TTJets_inc_v1_pt100_MET300_Electron'`
hadd -f Summer20UL18_TTJets_inc_PhoIdloose_phopt100_MET300_ElectronLL.root `xrdfsls -u /store/user/kalpana/ul_rootop_Analys_May2 | grep 'phoID_loose_runList_skimmed_Summer20UL18_TTJets_inc_v1_pt100_MET300_Electron'`
