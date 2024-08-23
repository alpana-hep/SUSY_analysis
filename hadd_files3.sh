#!/bin/bash                                                                                                                                      
path=/store/group/lpcsusyphotons/TreeMaker/

# for sample in ZNuNuGJets #WJets WGJets TTJets_inc TTJets_HT QCD GJets
# do
# hadd -f Autumn18_lowPhotpT_ZNuNuGJets_MonoPhoton_PtG-130_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/SkimmedNtuples/ | g# rep 'runList_Autumn18_lowPhopT_Autumn18.ZNuNuGJets_MonoPhoton_PtG-130'`
# hadd -f Autumn18_lowPhotpT_ZNuNuGJets_MonoPhoton_PtG-40to130_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/SkimmedNtuples/ | grep 'runList_Autumn18_lowPhopT_Autumn18.ZNuNuGJets_MonoPhoton_PtG-40to130'`

# hadd -f Autumn18_lowPhotpT_WJetsToLNu_HT-100To200_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/SkimmedNtuples/ | grep 'runList_Autumn18_lowPhopT_Autumn18.WJetsToLNu_HT-100To200_'`
# hadd -f Autumn18_lowPhotpT_WJetsToLNu_HT-200To400_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/SkimmedNtuples/ | grep 'runList_Autumn18_lowPhopT_Autumn18.WJetsToLNu_HT-200To400_'`
# hadd -f Autumn18_lowPhotpT_WJetsToLNu_HT-400To600_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/SkimmedNtuples/ | grep 'runList_Autumn18_lowPhopT_Autumn18.WJetsToLNu_HT-400To600_'`
# hadd -f Autumn18_lowPhotpT_WJetsToLNu_HT-600To800_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/SkimmedNtuples/ | grep 'runList_Autumn18_lowPhopT_Autumn18.WJetsToLNu_HT-600To800_'`
# hadd -f Autumn18_lowPhotpT_WJetsToLNu_HT-800To1200_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/SkimmedNtuples/ | grep 'runList_Autumn18_lowPhopT_Autumn18.WJetsToLNu_HT-800To1200_'`
# hadd -f Autumn18_lowPhotpT_WJetsToLNu_HT-1200To2500_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/SkimmedNtuples/ | grep 'runList_Autumn18_lowPhopT_Autumn18.WJetsToLNu_HT-1200To2500_'`
# hadd -f Autumn18_lowPhotpT_WJetsToLNu_HT-2500ToInf_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/SkimmedNtuples/ | grep 'runList_Autumn18_lowPhopT_Autumn18.WJetsToLNu_HT-2500ToInf_'`
#root://cmseos.fnal.gov//store/user/kalpana/Susy_phoMet/2018_WGJets
# hadd -f Autumn18_lowPhotpT_WGJets_MonoPhoton_LL_estimation_Electron_wPho_pT_g40_MET100_Dec22.root `xrdfsls -u /store/user/kalpana/updatedbkg_LL2022/ | grep 'runList_Autumn18_lowPhopT_WGJetsPtG'`
# hadd -f Autumn18_lowPhotpT_WJets_MonoPhoton_LL_estimation_Electron_wPho_pT_g40_MET100_Dec22.root `xrdfsls -u /store/user/kalpana/updatedbkg_LL2022/ | grep 'runList_Autumn18_lowPhopT_WJetsToLNu_HT_v18'`

#hadd -f Autumn18_lowPhotpT_WGJets_MonoPhoton_PtG-130_LL_estimation_Electron_wPho_pT_g40_MET100_phoID_loose.root `xrdfsls -u /store/user/kalpana/updatedbkg_LL2022/v1  | grep 'runList_Autumn18_lowPhopT_WGJetsPtG-130_v18_phoID_loose'`

# hadd -f Autumn18_lowPhotpT_WGJets_MonoPhoton_PtG-130_LL_estimation_Electron_wPho_pT_g40_MET100_phoID_medium.root `xrdfsls -u /store/user/kalpana/updatedbkg_LL2022/v1  | grep 'runList_Autumn18_lowPhopT_WGJetsPtG-130_v18_phoID_medium'`

# hadd -f Autumn18_lowPhotpT_WGJets_MonoPhoton_PtG-130_LL_estimation_Electron_wPho_pT_g40_MET100_phoID_tight.root `xrdfsls -u /store/user/kalpana/updatedbkg_LL2022/v1  | grep 'runList_Autumn18_lowPhopT_WGJetsPtG-130_v18_phoID_tight'`

# hadd -f Autumn18_lowPhotpT_WGJets_MonoPhoton_PtG-130_LL_estimation_Electron_wPho_pT_g40_MET100_phoID_mva_wp90.root `xrdfsls -u /store/user/kalpana/updatedbkg_LL2022/v1  | grep 'runList_Autumn18_lowPhopT_WGJetsPtG-130_v18_phoID_mva_wp90'`

# hadd -f Autumn18_lowPhotpT_WGJets_MonoPhoton_PtG-130_LL_estimation_Electron_wPho_pT_g40_MET100_phoID_mva_wp80.root `xrdfsls -u /store/user/kalpana/updatedbkg_LL2022/v1  | grep 'runList_Autumn18_lowPhopT_WGJetsPtG-130_v18_phoID_mva_wp80'`


# hadd -f Autumn18_lowPhotpT_WGJets_MonoPhoton_PtG-40to130_LL_estimation_Electron_wPho_pT_g40_MET100_phoID_loose.root `xrdfsls -u /store/user/kalpana/updatedbkg_LL2022/v1  | grep 'runList_Autumn18_lowPhopT_WGJetsPtG-40to130_v18_phoID_loose'`                                                                                                                                                                                            
# hadd -f Autumn18_lowPhotpT_WGJets_MonoPhoton_PtG-40to130_LL_estimation_Electron_wPho_pT_g40_MET100_phoID_medium.root `xrdfsls -u /store/user/kalpana/updatedbkg_LL2022/v1  | grep 'runList_Autumn18_lowPhopT_WGJetsPtG-40to130_v18_phoID_medium'`

# hadd -f Autumn18_lowPhotpT_WGJets_MonoPhoton_PtG-40to130_LL_estimation_Electron_wPho_pT_g40_MET100_phoID_tight.root `xrdfsls -u /store/user/kalpana/updatedbkg_LL2022/v1  | grep 'runList_Autumn18_lowPhopT_WGJetsPtG-40to130_v18_phoID_tight'`

# hadd -f Autumn18_lowPhotpT_WGJets_MonoPhoton_PtG-40to130_LL_estimation_Electron_wPho_pT_g40_MET100_phoID_mva_wp90.root `xrdfsls -u /store/user/kalpana/updatedbkg_LL2022/v1  | grep 'runList_Autumn18_lowPhopT_WGJetsPtG-40to130_v18_phoID_mva_wp90'`

# hadd -f Autumn18_lowPhotpT_WGJets_MonoPhoton_PtG-40to130_LL_estimation_Electron_wPho_pT_g40_MET100_phoID_mva_wp80.root `xrdfsls -u /store/user/kalpana/updatedbkg_LL2022/v1  | grep 'runList_Autumn18_lowPhopT_WGJetsPtG-40to130_v18_phoID_mva_wp80'`


#hadd -f Autumn18_lowPhotpT_WJetsToLNu_HT_LL_estimation_Electron_wPho_pT_g40_MET100_phoID_loose.root `xrdfsls -u /store/user/kalpana/updatedbkg_LL2022/v1  | grep 'runList_Autumn18_lowPhopT_WJetsToLNu_HT_v18_phoID_loose'`                                                                                                                                                                                         

# hadd -f Autumn18_lowPhotpT_WJetsToLNu_HT_LL_estimation_Electron_wPho_pT_g40_MET100_phoID_medium.root `xrdfsls -u /store/user/kalpana/updatedbkg_LL2022/v1  | grep 'runList_Autumn18_lowPhopT_WJetsToLNu_HT_v18_phoID_medium'`

# hadd -f Autumn18_lowPhotpT_WJetsToLNu_HT_LL_estimation_Electron_wPho_pT_g40_MET100_phoID_tight.root `xrdfsls -u /store/user/kalpana/updatedbkg_LL2022/v1  | grep 'runList_Autumn18_lowPhopT_WJetsToLNu_HT_v18_phoID_tight'`

hadd -f Autumn18_lowPhotpT_WJetsToLNu_HT_LL_estimation_Electron_wPho_pT_g40_MET100_phoID_mva_wp90.root `xrdfsls -u /store/user/kalpana/updatedbkg_LL2022/v1  | grep 'runList_Autumn18_lowPhopT_WJetsToLNu_HT_v18_phoID_mva_wp90'`

hadd -f Autumn18_lowPhotpT_WJetsToLNu_HT_LL_estimation_Electron_wPho_pT_g40_MET100_phoID_mva_wp80.root `xrdfsls -u /store/user/kalpana/updatedbkg_LL2022/v1  | grep 'runList_Autumn18_lowPhopT_WJetsToLNu_HT_v18_phoID_mva_wp80'`



















#hadd -f Autumn18_BK_lowPhotpT_WGJets_MonoPhoton_PtG-40to130_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/2018_WGJets | grep 'runList_Autumn18_lowPhopT_Autumn18.WGJets_MonoPhoton_PtG-40to130'`
# hadd -f Autumn18_lowPhotpT_TTGJets_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/SkimmedNtuples/ | grep 'runList_Autumn18_lowPhopT_Autumn18.TTGJets'`
# hadd -f Autumn18_lowPhotpT_TTJets_DiLept_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/SkimmedNtuples/ | grep 'runList_Autumn18_lowPhopT_Autumn18.TTJets_DiLept_'`

# hadd -f Autumn18_lowPhotpT_TTJets_SingleLept_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/SkimmedNtuples/ | grep 'runList_Autumn18_lowPhopT_Autumn18.TTJets_SingleLept'`
# hadd -f Autumn18_lowPhotpT_TTJets_HT-600to800_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/SkimmedNtuples/ | grep 'runList_Autumn18_lowPhopT_Autumn18.TTJets_HT-600to800_'`
# hadd -f Autumn18_lowPhotpT_TTJets_HT-800to1200_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/SkimmedNtuples/ | grep 'runList_Autumn18_lowPhopT_Autumn18.TTJets_HT-800to1200_'`
# hadd -f Autumn18_lowPhotpT_TTJets_HT-1200to2500_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/SkimmedNtuples/ | grep 'runList_Autumn18_lowPhopT_Autumn18.TTJets_HT-1200to2500_'`
# hadd -f Autumn18_lowPhotpT_TTJets_HT-2500toInf_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/SkimmedNtuples/ | grep 'runList_Autumn18_lowPhopT_Autumn18.TTJets_HT-2500toInf_'`

# # ##
# hadd -f Autumn18_lowPhotpT_GJets_DR-0p4_HT-100To200_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/SkimmedNtuples/ | grep 'runList_Autumn18_lowPhopT_Autumn18.GJets_DR-0p4_HT-100To200_'` 
# hadd -f Autumn18_lowPhotpT_GJets_DR-0p4_HT-200To400_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/SkimmedNtuples/ | grep 'runList_Autumn18_lowPhopT_Autumn18.GJets_DR-0p4_HT-200To400_'`
# hadd -f Autumn18_lowPhotpT_GJets_DR-0p4_HT-400To600_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/SkimmedNtuples/ | grep 'runList_Autumn18_lowPhopT_Autumn18.GJets_DR-0p4_HT-400To600_'`
# hadd -f Autumn18_lowPhotpT_GJets_DR-0p4_HT-600ToInf_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/SkimmedNtuples/ | grep 'runList_Autumn18_lowPhopT_Autumn18.GJets_DR-0p4_HT-600ToInf_'`

# #3
# hadd -f Autumn18_lowPhotpT_QCD_HT200to300_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/SkimmedNtuples/ | grep 'runList_Autumn18_lowPhopT_Autumn18.QCD_HT200to300_'`
# hadd -f Autumn18_lowPhotpT_QCD_HT300to500_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/SkimmedNtuples/ | grep 'runList_Autumn18_lowPhopT_Autumn18.QCD_HT300to500_'`
# hadd -f Autumn18_lowPhotpT_QCD_HT500to700_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/SkimmedNtuples/ | grep 'runList_Autumn18_lowPhopT_Autumn18.QCD_HT500to700_'`
# hadd -f Autumn18_lowPhotpT_QCD_HT700to1000_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/SkimmedNtuples/ | grep 'runList_Autumn18_lowPhopT_Autumn18.QCD_HT700to1000_'`
# hadd -f Autumn18_lowPhotpT_QCD_HT1000to1500_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/SkimmedNtuples/ | grep 'runList_Autumn18_lowPhopT_Autumn18.QCD_HT1000to1500_'`
# hadd -f Autumn18_lowPhotpT_QCD_HT1500to2000_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/SkimmedNtuples/ | grep 'runList_Autumn18_lowPhopT_Autumn18.QCD_HT1500to2000_'`
# hadd -f Autumn18_lowPhotpT_QCD_HT2000toInf_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/SkimmedNtuples/ | grep 'runList_Autumn18_lowPhopT_Autumn18.QCD_HT2000toInf_'`

# ##


















# hadd -f Autumn18_lowPhotpT_WGJets_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/SkimmedNtuples/ | grep 'runList_WGJets_Autumn18_'`
# hadd -f Autumn18_lowPhotpT_WJets_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/SkimmedNtuples/ | grep 'runList_WJets_Autumn18_'`
# hadd -f Autumn18_lowPhotpT_GJets_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/SkimmedNtuples/ | grep 'runList_GJets_Autumn18_'`
# hadd -f Autumn18_lowPhotpT_TTGJets_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/SkimmedNtuples/ | grep 'runList_TTGJets_Autumn18_'`
# hadd -f Autumn18_lowPhotpT_TTJets_HT_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/SkimmedNtuples/ | grep 'runList_TTJets_HT_Autumn18_'`
# hadd -f Autumn18_lowPhotpT_TTJets_inc_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/SkimmedNtuples/ | grep 'runList_TTJets_inc_Autumn18_'`
# hadd -f Autumn18_lowPhotpT_QCD_updateOptiStudi_v18.root `xrdfsls -u /store/user/kalpana/Susy_phoMet/SkimmedNtuples/ | grep 'runList_QCD_Autumn18_'`






# #done
