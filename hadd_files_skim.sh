#!/bin/bash


hadd -f skimmed_Autumn18_WGJets_MonoPhoton_LL_estimation_wPho_pT_g40_MET100_phoID_loose_Electron.root `xrdfsls -u /store/user/kalpana/updatedbkg_LL2022/skims_output/  | grep 'runList_skimmed_Autumn18_lowPhopT_WGJetsPtG-*_v18_phoID_loose_pt40_Electron'`

hadd -f skimmed_Autumn18_WJets_LL_estimation_wPho_pT_g40_MET100_phoID_tight_Electron.root `xrdfsls -u /store/user/kalpana/updatedbkg_LL2022/skims_output/  | grep 'runList_skimmed_Autumn18_lowPhopT_WJetsToLNu_HT_v18_phoID_tight_pt40_Electron'`
