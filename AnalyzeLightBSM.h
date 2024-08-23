#ifndef AnalyzeLightBSM_H
#define AnalyzeLightBSM_H
#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include "NtupleVariables.h"
#include "TH1F.h"
#include "TH2.h"
#include <TProfile.h>
#include "TFile.h"
#include "TLorentzVector.h"
#include "TDirectory.h"
#include"TGraphErrors.h"
#include"TGraphAsymmErrors.h"

#pragma link C++ class std::vector< std::vector >+; 
#pragma link C++ class std::vector< TLorentzVector >+;

class AnalyzeLightBSM : public NtupleVariables{

 public:
  AnalyzeLightBSM(const TString &inputFileList="foo.txt", const char *outFileName="histo.root",const char *dataset="data", const char *sample="sample", const char* LostlepFlag ="Flag", const char* phoID="phoID");
  //  std::cout<<"alpana"<<std::endl;
  ~AnalyzeLightBSM();
  Bool_t   FillChain(TChain *chain, const TString &inputFileList);
  Long64_t LoadTree(Long64_t entry);
  void     EventLoop(const char *,const char *,const char *,const char *, const char*, const char*);
  void     BookHistogram(const char *, const char *);
  int getBinNoV4(int);
  int getBinNoV7(int,int);
  int getBinNoV6(int);
  int getBinNoV6_WithOnlyBLSelec(int,int);
  TLorentzVector getBestPhoton(int);
  vector <TLorentzVector> getLorentzVector(int, Float_t[],Float_t[],Float_t[],Float_t[]);
  void FillHistogram_Kinematics(int ,int, int, double , double, double, double,double);
  void FillHistogram_Kinematics_varBin(int , int , int , double , double, double );
    void FillTFBins_Valid(int, int ,int, double);
  int Photons_OriginType();
  //  <vector>
  double getGendRLepPho(int);
  double getGendRElecPho(int);
  double getdR_GenPho_RecoPho(TLorentzVector);
  void CrossSection_Map_Init();
  double getGenLep1(TLorentzVector, bool);
  double getGenLep(TLorentzVector);
  double getGenRecodRLep(TLorentzVector);
  int getBinNoV7_le(int , int);
  int getBinNoV1_le(int , int);
  int getBinNoV2_st(int,int, int, int);
  int   getBinNoV7_highMET(int, int);
  std::vector<int>dR_recoPho_GenParticle(TLorentzVector);
  
  //Long64_t transMass(float , float, float, float);
  void print(Long64_t);
  //  void findObjMatchedtoG(TLorentzVector);
  double NumEvents;
  //  double   Weight;
  double wt,lumiInfb=35.9;//35.86;//36.814;//35.862824;//36.814;
  int bestPhotonIndxAmongPhotons=-100;
  int N_0emt=0,N_all=0,N_1e=0,N_2e=0,N_1m=0,N_2m=0,N_1t=0,N_2t=0;
  int n_electrons,n_muon,n_tau;
  Int_t zeroleptons =0, Nzeroleptons =0, Nelectrons =0,Nmuons = 0,Ntaus =0;
  Int_t lept_zeroleptons =0, lept_Nzeroleptons =0, lept_Nelectrons =0,lept_Nmuons = 0,lept_Ntaus =0;
  Int_t Iso_zeroleptons =0, Iso_Nzeroleptons =0, Iso_Nelectrons =0,Iso_Nmuons = 0,Iso_Ntaus =0;

  vector<TLorentzVector> GenElectrons_v1;
  vector<TLorentzVector> GenParticles_v1;
  vector<TLorentzVector> GenMuons_v1;
  vector<TLorentzVector> GenTaus_v1;
  vector<TLorentzVector> GenJets_v1;
  vector<TLorentzVector> Electrons_v1;
  vector<TLorentzVector> Photons_v1;
  vector<TLorentzVector> Muons_v1;
  vector<TLorentzVector> Taus_v1;
  vector<TLorentzVector> Jets_v1;
  
  int BTags;
  bool isSignal=false;
  vector<double> METLowEdge={200,270,350,450,750,2000};
  vector<double> METLowEdge1={100,200,270,350,450,750,2000};
  vector<double> METLowEdge2={100,200,270,350,450,2000};
  vector<double> METLowEdge_v3={100,300,370,450,600,750,900};
  vector<double> METLowEdge_v3_1={100,370,450,600,750};
  vector<double> METLowEdge_lowMET={100,370,450,600};
  vector<double> METLowEdge_highMET={300,370,450,600};

  TH1F *h_selectBaselineYields_;
  TH1F *h_selectBaselineYields_v1;
  TH1F *h_selectBaselineYields_v2;
  /* TH1F *h_selectBaselineYields_SR; */
  /* TH1F *h_selectBaselineYields_CR;  */
  /* TH1F *h_selectBaselineYields_MuSR; */
  /* TH1F *h_selectBaselineYields_MuCR; */
  /* TH2F *h_2d_genPromptPho_VsGenPho; */
  /* TH1F *h_isotrack; */
  /* TH1F *h_zerolepton; */
  TFile *oFile;
  /* TH1F *h_events; */
  /* TH1D *h_nEvts; */
  TH1I *h_RunNum;
  TH1D *h_intLumi;
  TH1D *h_Njets[60];
  TH1D *h_Njets_Varbin[10];
  TH1D *h_Nbjets[60];
  TH1D *h_Nbjets_Varbin[10];
  TH1F *h_MET_[60];
   TH1F *h_MET_Varbin[10];   
  TH1F *h_PhotonPt[60];
  /* TH1F *h_PhopT_fakeRate[60]; */

  TH1F *h_PhotonPt_Varbin[10];
  TH1F *h_Mt_PhoMET[60];
  TH1F *h_dPhi_PhoMET[60];
  TH1F *h_St[60];
  TH1F *h_St_Varbin[10];
  TH1F *h_HT[60];
  /* TH1D *h_Njets_CR[60]; */
  /* TH1D *h_Nbjets_CR[60]; */
  /* TH1F *h_MET__CR[60]; */
  /* TH1F *h_PhotonPt_CR[60]; */
  /* TH1F *h_Mt_PhoMET_CR[60]; */
  /* TH1F *h_dPhi_PhoMET_CR[60];   */
  TH1D *h_Njets_v1[100];
  TH1D *h_Nbjets_v1[100];
  TH1F *h_MET_v1[100];
  TH1F *h_PhotonPt_v1[100];
  TH1F *h_St_v1[100];
  /* TH1F *h_count_v1[100]; */
  /* TH2F *h_NonPrompt_ElectronFake[100]; */
  /* TH1F *h_NonPrompt[100]; */
  /* TH1F *h_ElectronFake[100]; */
  /* TH1F *h_hasGenPromptPhoton_v2[100]; */
  TH2F *h2d_mindRvspT_bestPho_genlep_v1[100];
  TH2F *h2d_mindRvspT_bestPho_genlep_v2[100];
  TH1F *h_ratio_bestPho_genlep_v1[100];
  TH1F *h_ratio_bestPho_genlep_v2[100];
  //  TH1F *h_hasGenPromptPhoton_v1[60];
  // TH1F *h_genPromptPho[100];
  //  TH1F *h_
 /*  TH1F *h_mindR_genJets[100]; */
 /*  TH1F *h_mindR_recoJets[100]; */
 /*  TH1F *h_Jets_chargedEmEnergyFraction[100]; */
 /*  TH1F *h_Jets_chargedHadronEnergyFraction[100]; */
 /*  TH1F *h_Jets_photonEnergyFraction[100]; */
 /*  TH1F *h_Jets_photonMultiplicity[100]; */
 /*  TH1F *h_Jets_neutralEmEnergyFraction[100]; */
 /*  TH1F *h_Jets_neutralHadronEnergyFraction[100]; */
 /* TH2F *h_mindR_recoJetsVs_chargedEmEnergyFraction[100]; */
 /* TH1F *h_Jets_chargedEmEnergyFraction_v1[100]; */
 /* TH1F *h_Jets_chargedHadronEnergyFraction_v1[100]; */
 /* TH1F *h_Jets_photonEnergyFraction_v1[100]; */
 /* TH1F *h_Jets_photonMultiplicity_v1[100]; */
 /* TH1F *h_Jets_neutralEmEnergyFraction_v1[100]; */
 /* TH1F *h_Jets_neutralHadronEnergyFraction_v1[100]; */

 /*  TH1F *h_St_CR[100]; */
 /*  TH1F *h_HT_CR[100]; */
  TH1F *h_mindr_Pho_genlep[10];
  TH1F *h_mindr_Pho_genElec[10];
  TH1F *h_mindr_Pho_RecoEle[10];
  TH1F *h_TFbins_LL_v1[100];
  TH1F *h_TFbins_LL_v2[100];
  TH1F *h_Sbins_LL_Validation[100];
  TH1F *h_Sbins_LL[100];
  TH1F *h_TFbins_ElecLL_validation[100];
  TH1F *h_TFbins_ElecLL_validation_v1[100];
  TH1F *h_mindR_elec_pho[40];
  TH1F *h_pTratio_elec_pho[40];
  TH2F *h_mindR_Vs_pTratio_elec_pho[40];

  // Gen level plots
  TH1F *h_W_pT;
  TH1F *h_Lep_pT;
  TH1F *h_Nu_pT;  
  TH1F *h_elec_pT;
  TH1F *h_mu_pT;
  TH1F *h_tau_pT;
  TH1F *h_W_Eta;
  TH1F *h_Lep_Eta;
  TH1F *h_Nu_Eta;
  TH1F *h_elec_Eta;
  TH1F *h_mu_Eta;
  TH1F *h_tau_Eta;
  TH1F *h_W_Phi;
  TH1F *h_Lep_Phi;
  TH1F *h_Nu_Phi;
  TH1F *h_elec_Phi;
  TH1F *h_mu_Phi;
  TH1F *h_tau_Phi;

  TH1F *h_W_E;
  TH1F *h_Lep_E;
  TH1F *h_Nu_E;
  TH1F *h_elec_E;
  TH1F *h_mu_E;
  TH1F *h_tau_E;
  TH1F *h_GenMET;
  TH1F *h_GenHT;
  TH1F *h_GenJets;
  TH1F *h_GenMET_passingTrigger;
  TH1F *h_MET_passingTrigger;
  TH1F *h_MET;
  TH1F *h_recoElec_pT;
  TH1F *h_recoPho_pT;
  TH1F *h_recoMu_pT;
  TH1F *h_recoElec_Eta;
  TH1F *h_recoPho_Eta;
  TH1F *h_recoMu_Eta;
  TH1F *h_recoElec_Phi;
  TH1F *h_recoPho_Phi;
  TH1F *h_recoMu_Phi;
  TH1F *h_recoElec_E;
  TH1F *h_recoPho_E;
  TH1F *h_recoMu_E;
  TH1F *h_leadJet_pT;
  TH1F *h_subleadJet_pT;
  TH1F *h_leadJet_Eta;
  TH1F *h_subleadJet_Eta;
  
  TH1F *h_counts;
  TH2F *h_2dcounts;
  TH2F *h_2d_elec_nu_pT;
  TH2F *h_2d_mu_nu_pT;
  TH2F *h_2d_Tau_nu_pT;
  TH2F *h_2d_WvsElec_pT;
  TH2F *h_2d_WvsElecNu_pT;
  TH2F *h_2d_WvsMu_pT;
  TH2F *h_2d_WvsMuNu_pT;
  TH2F *h_2d_WvsTau_pT;
  TH2F *h_2d_WvsTauNu_pT;
  
  TH2F *h_2d_elec_nu_Eta;
  TH2F *h_2d_mu_nu_Eta;
  TH2F *h_2d_Tau_nu_Eta;
  //  h_2d_WvsElecNu_Eta
  TH2F *h_2d_WvsElec_Eta;
  TH2F *h_2d_WvsElecNu_Eta;
  TH2F *h_2d_WvsMu_Eta;
  TH2F *h_2d_WvsMuNu_Eta;
  TH2F *h_2d_WvsTau_Eta;
  TH2F *h_2d_WvsTauNu_Eta;
  TH2F *h_2d_nu_MET_Eta;
  TH2F *h_2d_nu_MET_pT;
  // updated list of histogram eneded ////
  
  /* TH1F *h_Lep_pT_AfterBL; */
  /* TH1F *h_elec_pT_AfterBL; */
  /* TH1F *h_mu_pT_AfterBL; */
  /* TH1F *h_tau_pT_AfterBL; */
  /* TH1F *h_counts_AfterBL; */
  /* TH2F *h_2dcounts_AfterBL; */
  /* TH2F *h_2d_elec_nu_pT_AfterBL; */
  /* TH2F *h_2d_mu_nu_pT_AfterBL; */
  /* TH2F *h_2d_nu_MET_pT_AfterBL; */
  /* // electron - photon matching   */
  TH2F *h_njets_vs_ST[60];
  TH2F *h_njets_vs_HT[60];
  TH2F *h_ST_vs_ptPho[60];
  TH1F *h_mindR_genPho_recoPho;
  TH1F *h_mindR_recoPho_recoElec;
  TH1F *h_mindR_recoPho_genElec;
  /* TH2F* h2d_mindRvs_pt_bestPho_genElec;     */
  /* TH1F *h_HT_njets_2_4; */
  /* TH1F *h_HT_njets_5_6; */
  /* TH1F *h_HT_njets_7; */
  /* TH1F *h_HT_njets_2_4_Met250; */
  /* TH1F *h_HT_njets_5_6_Met250; */
  /* TH1F *h_HT_njets_7_Met250; */

  //Met>100GeV
  /* TH1D *h_NJets; */
  /* TH1D *h_NbJets; */
  /* TH1F *h_MeT; */
  /* TH1F *h_PhoPt; */
  /* //  TH1F *h_HT; */
  /* /\* TH1F *h_dPhi_PhoMET; *\/ */
  /* /\* TH1F *h_Mt_PhoMET; *\/ */
  /* TH1F *h_check_PhoPt; */
  /* TH1F *h_minDR_PhoLep; */
  /* TH1F *h_madminPhotDeltaR; */
  /* //  TH1F *h_selectBaselineYields_; */
  /* //MET>250GeV */
  /* TH1D *h_NJets_Met250GeV; */
  /* TH1D *h_NbJets_Met250GeV; */
  /* TH1F *h_MeT_Met250GeV; */
  /* TH1F *h_HT_Met250GeV; */
  /* TH1F *h_check_PhoPt_Met250GeV; */
  /* TH1F *h_Mt_PhoMET_Met250GeV; */
  /* TH1F *h_dPhi_PhoMET_Met250GeV; */

  /* //MET>600GeV */
  /* TH1D *h_NJets_Met600GeV; */
  /* TH1D *h_NbJets_Met600GeV; */
  /* TH1F *h_MeT_Met600GeV; */
  /* TH1F *h_HT_Met600GeV; */
  /* TH1F *h_check_PhoPt_Met600GeV; */
  /* TH1F *h_Mt_PhoMET_Met600GeV; */
  /* TH1F *h_dPhi_PhoMET_Met600GeV; */
  /* // 2d plots to check jet multiplicity */
  
  /* /\* TH2F *h_njets_vs_ST; *\/ */
  /* /\* TH2F *h_njets_vs_HT; *\/ */
  /* /\* TH2F *h_ST_vs_ptPho; *\/ */

  TH1D *h_SBins_v7_CD;
  TH1F *h_dPhi_Met_hadJets[6];
  TH1F *h_dPhi_Met_hadJets_after[6];
  TH2F *h_dPhivsMET[6];
  TH2F *h_dPhivsMET_after[6];
  TH2F *h_dPhi1vsdPhi2;
  TH1F *h_madminPhotonDeltaR_noSelection;
  TH1F *h_madminPhotonDeltaR_beforeStitching;
  TH1F *h_madminPhotonDeltaR_preSelection;
  
  /* TH1F *h_minPho_lep; */
  /* TH1F *h_minPho_lep_after; */
  /* TH1F *h_madHT; */
  /* TH1F *h_madHT_after; */
  TH1F *h_hasGenPromptPhoton;
  /* TH1F *h_phoPt_promptPho; */
  /* TH1F *h_phoPt_promptPho_after; */
  TH1F *h_phoPt_promptPho_rejected;
  TH1F *h_;
  /* TH1F *h_phoPt_promptPho_mindr_qgl0p5; */
  /* TH1F *h_phoPt_promptPho_mindr_qgh0p5; */
  /* TH1F *h_phoPt_promptPho_mindr_lepl0p5; */
  /* TH1F *h_phoPt_promptPho_mindr_leph0p5; */
  /* TH1F *h_phoPt_NopromptPho; */

  TH1F *h_Sbins_v6_withOnlyBL_Selec_Met100;
  TH1F *h_Sbins_v6_withOnlyBL_Selec;
  TH1F *h_Sbins_v6_withOnlyBL_Selec_PrevAna;
  TH1F *h_Sbins_v6_withOnlyBL_Selec_HT1TeV_Met100;
  TH1F *h_Sbins_v6_withOnlyBL_Selec_HT1TeV_Met250;
  TH1F *h_Sbins_v6_withOnlyBL_Selec_HT1TeV_Met250_Pt100;
  TH1F *h_Sbins_v6_withOnlyBL_Selec_HT15TeV_Met100;
  TH1F *h_Sbins_v6_withOnlyBL_Selec_HT15TeV_Met250;
  TH1F *h_Sbins_v6_withOnlyBL_Selec_HT15TeV_Met250_Pt100;
  TH1F *h_Sbins_v6_withOnlyBL_Selec_HT175TeV_Met100;
  TH1F *h_Sbins_v6_withOnlyBL_Selec_HT175TeV_Met250;
  TH1F *h_Sbins_v6_withOnlyBL_Selec_HT175TeV_Met250_Pt100;
  TH1F *h_Sbins_v6_withOnlyBL_Selec_HT2TeV_Met100;
  TH1F *h_Sbins_v6_withOnlyBL_Selec_HT2TeV_Met250;
  TH1F *h_Sbins_v6_withOnlyBL_Selec_HT2TeV_Met250_Pt100;
  
  /* TH1F *h_mvaResponse_baseline[60]; */
  TH1F *h_mvaResponse;
  
  /* TH1F *h_GenpT[31]; */
  /* TH1F *h_GenEta[31]; */
  /* TH1F *h_GenPhi[31]; */
  /* TH1F *h_GenEn[31]; */
  /* TH1F *h_GenMET[31]; */
  /* TH1F *h_RecoMET[31]; */
  
  /* TH2F *h_2d_pT[31]; */
  /* TH2F *h_2d_Eta[31]; */
  /* TH2F *h_2d_Phi[31]; */
  /* TH2F *h_2d_Et[31]; */
  /* TH2F *h_GenpTvsEta[31]; */
  /* TH2F *h_GenEtavsPhi[31]; */
  /* TH2F *h_GenEnvsEta[31]; */
  /* TH2F *h_GenPtvsPhi[31]; */
  /* TH2F *h_GenMETvsGenpT[31]; */
  TH2F *NphotonsVsPhotPt;
  TH1F *BestPhotPt_;
  TH1F *BestPhotPt_1;
  TH1F *h_Sbins_v6_withOnlyBL_njetsvsHTbin;
  /* TH1F* h_phopT_BeamRemenant; */
  /* TH1F* h_parID_matchRecoPho; */
  /* TH2F* h_parentID_vsPartId_matchPho; */

  /* TH1F* h_mindR_genVsreco_Elec; */
  /* TH2F* h_mindRVspT_recoElec; */
  /* TH2F* h_mindRVsEta_recoElec; */
  /* TH2F* h_mindRVspT_genElec; */
  /* TH2F* h_mindRVsEta_genElec; */
  /* TH1F* h_nele; */
  /* TH2F* h_pT_recovsGen; */
  /* TH2F* h_eta_recoVsGen; */

};
#endif

#ifdef AnalyzeLightBSM_cxx

void AnalyzeLightBSM::BookHistogram(const char *outFileName, const char *N2_mass) {
  int chi2_mass= atoi(N2_mass);
  //  char hname[200], htit[200];
  double xlow = 0.0,  xhigh = 3200, xhigh1 = 3500,xhigh2=300;//4.0*(2350-chi2_mass);
  //  int nbins = 2000;
  char name[100],title[100];
  char hname[1000],hname1[1000], hname1_2d[1000],hname_2d[10000],hname_njets[10000],hname_nBjets[10000], hname_Met[10000],hname_PhoPt[10000],hname_Mt_phopt[10000],hname_dPhi[10000],hname_st[1000],hname_ht[1000],hname_njet_vs_ST[1000],hname_njet_vs_HT[1000],hname_ST_vs_ptPho[1000];
  vector<string> selection = {"No_selection","lepton_veto","veto_chargTracks","photon_pT40","MET_200","nJets_2","ST_300","Trig_eff","Event_Cleaning","dPhi_cut","overlap_removal"};
  //  const char *baseline[25]= {"Nocut","skim","bkg_comp","Met-filter","veto-lep","veto-iso","dPhi_Met","pt_jet","ST_300","Met_250","pT_100","nocut","HT_1TeV_Met100","HT_1TeV_Met250","HT_1TeV_Met250_pt_100","HT_15TeV_Met100","HT_15TeV_Met250","HT_15TeV_Met250_pt_100","HT_175TeV_Met100","HT_175TeV_Met250","HT_175TeV_Met250_pt_100","HT_2TeV_Met100","HT_2TeV_Met250","HT_2TeV_Met250_pt_100","nocut_sam"};//"st_300_Met100","pt_st_Met_250","st_300_Met250","nocut"};
  //Double_t xbins_PhotPt[110]={};//{20,25,30,35,40,,7,10,20,30,40,50,80,90,100,150};
  //const char *baseline[24]= {"Nocut","skim","bkg_comp","Met-filter","veto-lep","veto-iso","dPhi_Met","pt_jet","ST_300","Met_250","pT_100","nocut","HT_1TeV_Met100","HT_1TeV_Met250","HT_1TeV_Met250_pt_100","HT_15TeV_Met100","HT_15TeV_Met250","HT_15TeV_Met250_pt_100","HT_175TeV_Met100","HT_175TeV_Met250","HT_175TeV_Met250_pt_100","HT_2TeV_Met100","HT_2TeV_Met250","HT_2TeV_Met250_pt_100"};
  //  const char *baseline[25]={"Nocut","photon_selec","Phot_pT_20","nHadJets_2","MET_100","ST_300","bkg_comp","Met_cleaning","lept_veto","veto_chargedTracks","dPhi_MET","jet_pT_Pho_pT","MET_250","pho_pt_100","Final","Pho_pT_30","HT_1TeV_Met250","HT_1TeV_Met250_pt_100","HT_15TeV_Met100","HT_15TeV_Met250","HT_15TeV_Met250_pt_100","HT_175TeV_Met100","nocut_sam","basic_sam"};//"st_300_Met100","pt_st_Met_250","st_300_Met250","nocut"
  //const char *baseline[48]={"Nocut","SignalRegion","ControlRegion","lostElec_SR","lostMu_SR","lostTau_SR","else_pho_SR","lostElec_CR","lostMu_CR","lostTau_CR","else_pho_CR","else_SR","else_CR","lostElecTau_SR","lostMuTau_SR","Tau_hadronic_SR","lostElec_SR_Accept","lostElec_SR_ident","SignalRegion_BDTcut1","ControlRegion_BDTcut1","lostElec_SR_BDTcut1","lostMu_SR_BDTcut1","lostTau_SR_BDTcut1","else_pho_SR_BDTcut1","else_SR_BDTcut1","lostElecTau_SR_BDTcut1","lostMuTau_SR_BDTcut1","Tau_hadronic_SR_BDTcut1","lostElec_CR_BDTcut1","lostMu_CR_BDTcut1","lostTau_CR_BDTcut1","else_pho_CR_BDTcut1","else_CR_BDTcut1","SignalRegion_BDTcut2","ControlRegion_BDTcut2","lostElec_SR_BDTcut2","lostMu_SR_BDTcut2","lostTau_SR_BDTcut2","else_pho_SR_BDTcut2","else_SR_BDTcut2","lostElecTau_SR_BDTcut2","lostMuTau_SR_BDTcut2","Tau_hadronic_SR_BDTcut2","lostElec_CR_BDTcut2","lostMu_CR_BDTcut2","lostTau_CR_BDTcut2","else_pho_CR_BDTcut2","else_CR_BDTcut2"};

  vector<string> baseline = {"NoSelection","PreSelection","preSelection_promptPho_v1","preSelection_NonpromptPho_v1","preSelection_ElecFake","preSelection_Else","Elec_CR","Mu_CR","Elec_SR","FailAcep_ElecSR","FailId_ElecSR","FailIso_ElecSR","Elec_failEtacut_SR","Elec_failpTcut_SR","Mu_SR","FailAcep_MuSR","FailId_MuSR","FailIso_MuSR","Mu_failEtacut_SR","Mu_failpTcut_SR","TauHad_SR","Elec_SR_valid","Mu_SR_valid","Elec_CR_promptPho_v1","Elec_CR_NonpromptPho_v1","Elec_CR_ElecFake","Elec_CR_Else","Elec_SR_promptPho_v1","Elec_SR_NonpromptPho_v1","Elec_SR_ElecFake","Elec_SR_Else","Mu_CR_promptPho_v1","Mu_CR_NonpromptPho_v1","Mu_CR_ElecFake","Mu_CR_Else","Mu_SR_promptPho_v1","Mu_SR_NonpromptPho_v1","Mu_SR_ElecFake","Mu_SR_Else","TauHad_SR_promptPho_v1","TauHad_SR_NonpromptPho_v1","TauHad_SR_ElecFake","TauHad_SR_Else"};
  cout<<"size of baseline vector"<<"\t"<<baseline.size()<<endl;
  vector <string> baseline1={"Elect_Inc","Mu_Inc","Tau_Inc","Elect_Inc_v1","Mu_Inc_v1","Tau_Inc_v1","Elect_SR_bin0","Elect_SR_v1_bin1","Elect_SR_bin1","Mu_SR_bin0","Mu_SR_v1_bin0","Mu_SR_bin1","Mu_SR_v1_bin1","Mu_CR","Tau_Inc","Tau_SR","Tau_CR","Tau_ElecSR","Tau_ElecCR","Tau_MuSR","Tau_MuCR","ElecNu_Inc","ElecNu_SR","MuNu_Inc","MuNu_SR","TauNu_Inc","TauNu_SR","ElecNu_CR","MuNu_CR","TauNu_CR",""};

  /* vector<string> baseline_v1 = {"PreSelection","Elec_CR_FR","Elec_CR_promptPho","Elec_CR_NonpromptPho","Elec_CR","Elec_SR_promptPho","Elec_SR_promptPho_GenMatch","Elec_SR_promptPho_NoGenMatch","Elec_SR_promptPho_NoGenMatch_noFR","Elec_SR_promptPho_NoGenMatch_FR","Elec_SR_promptPho_NoGenMatch_Else","Elec_SR_noPromptPho","Elec_SR_noPromptPho_noFR","Elec_SR_noPromptPho_FR","Elec_SR_noPromptPho_FR_else"}; */

  vector<string> baseline_v2 = {"NoSelection","PreSelection","Elec_CR_FR","Elec_CR_promptPho","Elec_CR_NonpromptPho","Elec_CR","Elec_SR_promptPho","Elec_SR_promptPho_GenMatch","Elec_SR_promptPho_noGenPhoInfo","Elec_SR_promptPho_NoGenMatch","Elec_SR_promptPho_NoGenMatch_noFR","Elec_SR_promptPho_NoGenMatch_noFR_tauMatch","Elec_SR_promptPho_NoGenMatch_noFR_qgmatch","Elec_SR_promptPho_NoGenMatch_Else","Elec_SR_promptPho_NoGenMatch_FR","2e_SR_noFR","2e_SR_FR","2e_SR_noFR_else","Elec_SR_noPromptPho","Elec_SR_noPromptPho_noFR","Elec_SR_noPromptPho_noFR_tauMatch","Elec_SR_noPromptPho_noFR_qgmatch","Elec_SR_noPromptPho_Else","Elec_SR_noPromptPho_FR","2e_SR_noPrompt_noFR","2e_SR_noPrompt_FR","2e_SR_noPrompt_noFR_else","Mu_CR_FR","Mu_CR_promptPho","Mu_CR_NonpromptPho","Mu_CR","Mu_SR_promptPho","Mu_SR_promptPho_GenMatch","Mu_SR_promptPho_noGenPhoInfo","Mu_SR_promptPho_NoGenMatch","Mu_SR_promptPho_NoGenMatch_noFR","Mu_SR_promptPho_NoGenMatch_noFR_qgmatch","Mu_SR_promptPho_NoGenMatch_Else","Mu_SR_promptPho_NoGenMatch_FR","Mu_SR_promptPho_1tauHad","Mu_SR_promptPho_2tauHad","Mu_SR_noPromptPho","Mu_SR_noPromptPho_noFR","Mu_SR_noPromptPho_NoGenMatch_noFR_qgmatch","Mu_SR_noPromptPho_NoGenMatch_Else","Mu_SR_noPromptPho_NoGenMatch_FR","Mu_SR_noPromptPho_1tauHad","Mu_SR_noPromptPho_2tauHad","Elec_CR_0Pho","Elec_CR_Phol40","Elec_SR_0Pho","Elec_SR_Phol40","Elec_CR_promptPho_v1","Elec_CR_NonpromptPho_v1","Elec_CR_ElecFake","Elec_CR_Else","Elec_CR_Else_v1","Elec_SR_promptPho_v1","Elec_SR_NonpromptPho_v1","Elec_SR_ElecFake","Elec_SR_Else","Elec_SR_Else_v1","Elec_CR_promptPho_hasTrue","Elec_CR_NonpromptPho_hasTrue","Elec_CR_ElecFake_hasTrue","Elec_CR_Else_hasTrue","Elec_CR_promptPho_hasNot_True","Elec_CR_NonpromptPho_hasNot_True","Elec_CR_ElecFake_hasNot_True","Elec_CR_Else_hasNot_True","Elec_SR_promptPho_hasTrue","Elec_SR_NonpromptPho_hasTrue","Elec_SR_ElecFake_hasTrue","Elec_SR_Else_hasTrue","Elec_SR_promptPho_hasNot_True","Elec_SR_NonpromptPho_hasNot_True","Elec_SR_ElecFake_hasNot_True","Elec_SR_Else_hasNotTrue","Mu_CR_promptPho_v1","Mu_CR_NonpromptPho_v1","Mu_CR_ElecFake","Mu_CR_Else","Mu_CR_Else_v1","Mu_SR_promptPho_v1","Mu_SR_NonpromptPho_v1","Mu_SR_ElecFake","Mu_SR_Else","Mu_SR_Else_v1","TauHad_SR_promptPho_v1","TauHad_SR_NonpromptPho_v1","TauHad_SR_ElecFake","TauHad_SR_Else","TauHad_SR_Else_v1","preSelection_promptPho_v1","preSelection_NonpromptPho_v1","preSelection_ElecFake","preSelection_Else","preSelection_Else_v1","preSelection"};
  cout<<"length of baseline_v2 vector"<<"\t"<<baseline_v2.size()<<endl;
  const char *baseline3[18]={"Wjets_Inclusive","Wjets_SR","Wjets_CR","Wjets_lostElec","Wjets_lostMu","Wjets_lostTau","Wjets_photon","Wjets_unidentified","Elect_Inc","Elect_SR","Elect_CR","Mu_Inc","Mu_SR","Mu_CR","Tau_Inc","Tau_SR","Tau_CR"};//

  const char *baseline2[5]={"WjetsVsElec","WjetsVsMu","WjetsVsTau","TauVsElec","TauVsMu"};
  
  vector<string> checks={"NoSelection","PreSelection","Elec_CR","Elec_SR","Mu_CR","Mu_SR","Elec_CR_promptPho_v1","Elec_CR_NonpromptPho_v1","Elec_CR_ElecFake","Elec_CR_Else","Elec_CR_Else_v1","Elec_SR_promptPho_v1","Elec_SR_NonpromptPho_v1","Elec_SR_ElecFake","Elec_SR_Else","Elec_SR_Else_v1","Mu_CR_promptPho_v1","Mu_CR_NonpromptPho_v1","Mu_CR_ElecFake","Mu_CR_Else","Mu_CR_Else_v1","Mu_SR_promptPho_v1","Mu_SR_NonpromptPho_v1","Mu_SR_ElecFake","Mu_SR_Else","Mu_SR_Else_v1","TauHad_SR_promptPho_v1","TauHad_SR_NonpromptPho_v1","TauHad_SR_ElecFake","TauHad_SR_Else","TauHad_SR_Else_v1"};

  /* char check1[1000]; */
  /* for(int c =0; c<checks.size();c++) */
  /*   { */
  /*     sprintf(check1,"h_mindR_elec_pho_%s",checks[c].str()); */
  /*     h_mindR_elec_pho[c] = new TH1F(check1,"mindR(#gamma, e), where e is gen e if SR or reco e if CR",1000,0,10); */
  /*     sprintf(check1,"h_pTratio_elec_pho_%s",checks[c].str()); */
  /*     h_pTratio_elec_pho[c] = new TH1F(check1,"#frac{p_{T}^{#gamma}}{p_{T}^{e}} where e is gen e if SR or reco e if CR",1000,0,10); */
  /*     sprintf(check1,"h_mindR_Vs_pTratio_elec_pho_%s",checks[c].str()); */
  /*     h_mindR_Vs_pTratio_elec_pho[c] = new TH2F(check1,"mindR(#gamma, e) vs #frac{p_{T}^{#gamma}}{p_{T}^{e}} where e is gen e if SR or reco e if CR",1000,0,10,1000,0,10); */
  /*   } */

  oFile = new TFile(outFileName, "recreate");
  TH1::SetDefaultSumw2(1);
  vector<double> xbins_PhotPt;
  vector<double> xbins_Eta;
  vector<double> xbins_En;
  vector<double> xbins_Phi;
  
  


  /* TH1F *h_GenpT[25]; */
  /* TH1F *h_GenEta[25]; */
  /* TH1F *h_GenPhi[25]; */
  /* TH1F *h_GenEn[25]; */
  for(int i_bin=0;i_bin<200;i_bin++)
    {
      if(i_bin<=20) xbins_PhotPt.push_back(0+(1*(i_bin)));
      if(i_bin>20 && i_bin<=40) xbins_PhotPt.push_back(20+(5*(i_bin-20)));
      if(i_bin>40 && i_bin<=100) xbins_PhotPt.push_back(120+(10*(i_bin-40)));
      if(i_bin>100) xbins_PhotPt.push_back(720+(20*(i_bin-70)));     
      
    }

  //  vector<double> METLowEdge={200,270,350,450,750,2000};
  vector<double> METLowEdge_LL={100,200,300,370,450,600,750,900,2000};
  vector<double> Pho_pt_Edge_LL={30,40,50,70,90,100,150,200,300,500,700,1000};
  vector<double> NHadjets_Edge_LL={2,4,5,6,7,8,9,10,11,12,13,14};
  vector<double> NBjets_Edge_LL={0,1,2,4,5,6,7,8,9,10,11,12,13,14};
  vector<double> ST_Edge_LL={300,400,500,700,900,1000,1500};

  /* for (int i =0; i<14;i++) */
  /*   { */
  /*     sprintf(hname,"h_GenpT_%s",baseline1[i].c_str()); */
  /*     h_GenpT[i] = new TH1F(hname,hname,3000,0,6000);///xbins_PhotPt.size()-1,&(xbins_PhotPt[0])); */
  /*     sprintf(hname,"h_GenEta_%s",baseline1[i].c_str()); */
  /*     h_GenEta[i] = new TH1F(hname,hname,500,-8,8); */
  /*     /\* sprintf(hname,"h_GenPhi_%s",baseline1[i].c_str()); *\/ */
  /*     /\* h_GenPhi[i] = new TH1F(hname,hname,500,-10,10); *\/ */
  /*     /\* sprintf(hname,"h_GenEn_%s",baseline1[i].c_str()); *\/ */
  /*     /\* h_GenEn[i] = new TH1F(hname,hname,3000,0,6000);//xbins_PhotPt.size()-1,&(xbins_PhotPt[0])); *\/ */
  /*     /\* sprintf(hname,"h_GenMET_%s",baseline1[i].c_str()); *\/ */
  /*     /\* h_GenMET[i] = new TH1F(hname,hname,3000,0,6000);//xbins_PhotPt.size()-1,&(xbins_PhotPt[0])); *\/ */
  /*     /\* sprintf(hname,"h_RecoMET_%s",baseline1[i].c_str()); *\/ */
  /*     /\* h_RecoMET[i] = new TH1F(hname,hname,3000,0,6000);//xbins_PhotPt.size()-1,&(xbins_PhotPt[0])); *\/ */

  /*   } */

  /* sprintf(hname,"h_mindR_genVsreco_Elec"); */
  /* h_mindR_genVsreco_Elec  = new TH1F(hname,"mindR(gen e-, reco e-)",1000,0,10); */
  /* sprintf(hname,"h_mindRVspT_recoElec"); */
  /* h_mindRVspT_recoElec = new TH2F(hname,"mindR(gen e-, reco e-)[X-axis] vs p^{reco elec}_{T}",1000,0,10,1000,0,2000); */
  /* sprintf(hname,"h_mindRVspT_genElec"); */
  /* h_mindRVspT_genElec = new TH2F(hname,"mindR(gen e-, reco e-)[X-axis] vs p^{gen elec}_{T}",1000,0,10,1000,0,2000); */
  /* sprintf(hname,"h_mindRVsEta_recoElec"); */
  /* h_mindRVsEta_recoElec = new TH2F(hname,"mindR(gen e-, reco e-)[X-axis] vs Eta^{reco elec}",1000,0,10,1000,-4,4); */
  /* sprintf(hname,"h_mindRVsEta_genElec"); */
  /* h_mindRVsEta_genElec = new TH2F(hname,"mindR(gen e-, reco e-)[X-axis] vs Eta^{gen elec}",1000,0,10,1000,-4,4); */
  /* sprintf(hname,"h_nele"); */
  /* h_nele = new TH1F(hname,"nelectrons_reco",2,0,2); */
  /* sprintf(hname,"h_pT_recovsGen"); */
  /* h_pT_recovsGen = new TH2F(hname,"p_{T}: Gen electron vs reco electron",1000,0,2000, 1000,0,2000); */
  /* sprintf(hname,"h_eta_recoVsGen"); */
  /* h_eta_recoVsGen = new TH2F(hname,"Eta: Gen electron vs reco electron",500,-4,4,500,-4,4); */
  
      
  char check1[1000];
  /* for(int c =2; c<6;c++)//checks.size();c++) */
  /*   { */
  /*     sprintf(check1,"h_mindR_elec_pho_%s",checks[c].c_str()); */
  /*     h_mindR_elec_pho[c] = new TH1F(check1,"mindR(#gamma, e), where e is gen e if SR or reco e if CR",1000,0,10); */
  /*     sprintf(check1,"h_pTratio_elec_pho_%s",checks[c].c_str()); */
  /*     h_pTratio_elec_pho[c] = new TH1F(check1,"#frac{p_{T}^{#gamma}}{p_{T}^{e}} where e is gen e if SR or reco e if CR",1000,0,10); */
  /*     sprintf(check1,"h_mindR_Vs_pTratio_elec_pho_%s",checks[c].c_str()); */
  /*     h_mindR_Vs_pTratio_elec_pho[c] = new TH2F(check1,"mindR(#gamma, e) vs #frac{p_{T}^{#gamma}}{p_{T}^{e}} where e is gen e if SR or reco e if CR",1000,0,10,1000,0,10); */
  /*     sprintf(hname_njets,"h_NhadJets_bin_%s",checks[c].c_str()); */
  /*     h_Njets_Varbin[c]= new TH1D(hname_njets, hname_njets,int(NHadjets_Edge_LL.size())-1,&(NHadjets_Edge_LL[0])); */
  /*     sprintf(hname_nBjets,"h_NBJets_bin_%s",checks[c].c_str()); */
  /*     h_Nbjets_Varbin[c] = new TH1D(hname_nBjets, hname_nBjets,int(NBjets_Edge_LL.size())-1,&(NBjets_Edge_LL[0])); */
  /*     sprintf(hname_Met,"h_MET_bin_%s",checks[c].c_str()); */
  /*     h_MET_Varbin[c] = new TH1F(hname_Met,hname_Met,int(METLowEdge_LL.size())-1,&(METLowEdge_LL[0])); */
  /*     sprintf(hname_PhoPt,"h_PhoPt_bin_%s",checks[c].c_str()); */
  /*     h_PhotonPt_Varbin[c]= new TH1F(hname_PhoPt,hname_PhoPt,int(Pho_pt_Edge_LL.size())-1,&(Pho_pt_Edge_LL[0])); */
  /*     sprintf(hname_st,"h_St_bin_%s",checks[c].c_str()); */
  /*     h_St_Varbin[c] = new TH1F(hname_st,hname_st,int(ST_Edge_LL.size())-1,&(ST_Edge_LL[0])); */
  /*     /\* sprintf(hname_st,"mindr_Pho_genlep_%s",checks[c].c_str()); *\/ */
  /*     /\* h_mindr_Pho_genlep[c]= new TH1F(hname_st,"mindR(gen-l,#gamma)",1000,0,10); *\/ */
  /*     /\* sprintf(hname_st,"mindr_Pho_genElec_%s",checks[c].c_str()); *\/ */
  /*     /\* h_mindr_Pho_genElec[c] = new TH1F(hname_st,"mindR(gen e,#gamma)",1000,0,10); *\/ */
  /*     /\* sprintf(hname_st,"mindr_Pho_RecoElec_%s",checks[c].c_str()); *\/ */
  /*     /\* h_mindr_Pho_RecoEle[c] = new TH1F(hname_st,"mindR(reco e, #gamma)",1000,0,10); *\/ */

  /*   } */

  for(int i=0;i<selection.size();i++)
    {
      sprintf(hname_njets,"h_NhadJets_v1_%s",selection[i].c_str());
      sprintf(hname_nBjets,"h_NBJets_v1_%s",selection[i].c_str());
      sprintf(hname_Met,"h_MET_v1_%s",selection[i].c_str());
      sprintf(hname_PhoPt,"h_PhoPt_v1_%s",selection[i].c_str());
      sprintf(hname_st,"h_St_v1_%s",selection[i].c_str());
      h_Njets_v1[i]= new TH1D(hname_njets, hname_njets,20,0,20);
      h_Nbjets_v1[i]= new TH1D(hname_nBjets, hname_nBjets,15,0,15);
      h_MET_v1[i] = new TH1F(hname_Met,hname_Met,400,0,1500);
      h_PhotonPt_v1[i]= new TH1F(hname_PhoPt,hname_PhoPt,500,0,1000);
      h_St_v1[i]=new TH1F(hname_st,hname_st,250,0,2500);
    }
  /* for (int i =0; i<5;i++) */
  /*   { */
  /*     sprintf(hname,"h_2d_pT_%s",baseline2[i]); */
  /*     h_2d_pT[i] = new TH2F(hname,hname,3000,0,6000,3000,0,6000); */
  /*     sprintf(hname,"h_2d_Eta_%s",baseline2[i]); */
  /*     h_2d_Eta[i] = new TH2F(hname,hname,500,-8,8,500,-8,8); */
  /*     sprintf(hname,"h_2d_Phi_%s",baseline2[i]); */
  /*     h_2d_Phi[i] = new TH2F(hname,hname,500,-8,8,500,-8,8); */
  /*     sprintf(hname,"h_2d_Et_%s",baseline2[i]); */
  /*     h_2d_Et[i] = new TH2F(hname,hname,3000,0,6000,3000,0,6000); */
      
  /*   } /\*  *\/ */
  /* for (int i =0; i<18;i++) */
  /*   { */
  /*     sprintf(hname,"h_GenpTvsEta_%s",baseline3[i]); */
  /*     h_GenpTvsEta[i] = new TH2F(hname,hname,3000,0,6000,500,-8,8); */
  /*     sprintf(hname,"h_GenEtavsPhi_%s",baseline3[i]); */
  /*     h_GenEtavsPhi[i] = new TH2F(hname,hname,500,-8,8,500,-8,8); */
  /*     sprintf(hname,"h_GenEnvsEta_%s",baseline3[i]); */
  /*     h_GenEnvsEta[i] = new TH2F(hname,hname,3000,0,6000,500,-8,8); */
  /*     sprintf(hname,"h_GenPtvsPhi_%s",baseline3[i]); */
  /*     h_GenPtvsPhi[i] = new TH2F(hname,hname,3000,0,6000,500,-8,8); */
  /*     sprintf(hname,"h_GenMETvsGenpT_%s",baseline3[i]); */
  /*     h_GenMETvsGenpT[i] = new TH2F(hname,hname,3000,0,6000,500,-8,8); */
  /*   }   */
  /* NphotonsVsPhotPt = new TH2F("NphotonsVsPhotPt_elecSR","n-#gamma vs pT of #gamma",10,0,10,500,0,1000); */
  /* BestPhotPt_ = new TH1F("bestPho_pT","first good photon's pT",500,0,1000); */
  /* BestPhotPt_1 =new TH1F("bestPho_pT_1","first good photon's pT",500,0,1000); */

  /* h_2d_genPromptPho_VsGenPho = new TH2F("genPromptPho_VsGenPho","hasGenPromptPhoton vs P_{T}^{#gamma}",3,0,3,10,0,10); */

  h_selectBaselineYields_ = new TH1F("cutflows","cutflows",60,-0.5,60.5);
  h_selectBaselineYields_v1 = new TH1F("cutflows_LL","cutflows_LL",60,-0.5,60.5);
  h_selectBaselineYields_v2 = new TH1F("cutflows_v1","cutflows",60,-0.5,60.5);
  /* h_selectBaselineYields_CR = new TH1F("cutflows_LL_CR","cutflows_LL_CR",60,-0.5,60.5); */
  /* h_selectBaselineYields_SR = new TH1F("cutflows_LL_SR","cutflows_LL_SR",60,-0.5,60.5); */
  /* h_mvaResponse = new TH1F("h_mvaResponse","BDT response per event",500,-2,2); */
  /* h_madminPhotonDeltaR_noSelection= new TH1F("h_madminPhotonDeltaR_noSelection","",200,0,5); */
  /* h_madminPhotonDeltaR_beforeStitching= new TH1F("h_madminPhotonDeltaR_beforeStitching","",200,0,5); */
  /* h_madminPhotonDeltaR_preSelection= new TH1F("h_madminPhotonDeltaR_preSelection","",200,0,5); */

  /* h_minPho_lep = new TH1F("h_minPho_lep","mindR(best photon & gen lep)",1000,0,10); */

  /* h_minPho_lep_after = new TH1F("h_minPho_lep_after","mindR(best photon & gen lep)",1000,0,10); */
  /* h_madHT = new TH1F("h_madHT","madHT distributions",500,0,10000); */
  /* h_madHT_after = new TH1F("h_madHT_after","madHT distributions",500,0,10000); */
/*   h_mindR_genPho_recoPho = new TH1F("h_mindR_genPho_recoPho","dR(Gen-#gamma, Rec-#gamma)",1000,0,10); */
/*   h_mindR_recoPho_recoElec = new TH1F("h_mindR_recoPho_recoElec","dR(#gamma, Gen -e^{-})",1000,0,10); */
/*   h_mindR_recoPho_genElec = new TH1F("h_mindR_recoPho_genElec","dR(#gamma, Reco-e^{-})",1000,0,10); */
/*   /\* h2d_mindRvs_pt_bestPho_genElec = new TH2F("h2d_mindRvs_pt_bestPho_genElec","dR(#gamma, e^{-}) [X-axis], pT_{#gamma}/pT_{e^{-}}",1000,0,10,1000,0,10); *\/ */
/*   h_hasGenPromptPhoton =new TH1F("h_hasGenPromptPhoton","h_hasGenPromptPhoton",2,0,2); */
/*   char* hists_list = new char[1000]; */
/*   /\* for(int i=0;i<2;i++)//baseline_v2.size();i++) *\/ */
/*   /\*   { *\/ */
/*   /\*     cout<<i<<"\t"<<baseline_v2[i]<<endl; *\/ */
/*   /\*     sprintf(hname_njets,"h_NhadJets_v1_%s",baseline_v2[i].c_str()); *\/ */
/*   /\*     sprintf(hname_nBjets,"h_NBJets_v1_%s",baseline_v2[i].c_str()); *\/ */
/*   /\*     sprintf(hname_Met,"h_MET_v1_%s",baseline_v2[i].c_str()); *\/ */
/*   /\*     sprintf(hname_PhoPt,"h_PhoPt_v1_%s",baseline_v2[i].c_str()); *\/ */
/*   /\*     sprintf(hname_st,"h_St_v1_%s",baseline_v2[i].c_str()); *\/ */
/*   /\*     h_Njets_v1[i]= new TH1D(hname_njets, hname_njets,20,0,20); *\/ */
/*   /\*     h_Nbjets_v1[i]= new TH1D(hname_nBjets, hname_nBjets,15,0,15); *\/ */
/*   /\*     h_MET_v1[i] = new TH1F(hname_Met,hname_Met,400,0,1500); *\/ */
/*   /\*     h_PhotonPt_v1[i]= new TH1F(hname_PhoPt,hname_PhoPt,500,0,1000); *\/ */
/*   /\*     h_St_v1[i]=new TH1F(hname_st,hname_st,250,0,2500); *\/ */
/*       /\* sprintf(hname_st,"h_count_%s",baseline_v2[i].c_str()); *\/ */
/*       /\* h_count_v1[i] = new TH1F(hname_st,hname_st,250,0,250); *\/ */
/*       /\* sprintf(hname_st,"h_NonPrompt_ElectronFake_%s",baseline_v2[i].c_str()); *\/ */
/*       /\* h_NonPrompt_ElectronFake[i] = new TH2F(hname_st,"Non-prompt #gamma flag vs e fakes #gamma flag",3,0,3,3,0,3); *\/ */
/*       /\* sprintf(hname_st,"h_NonPrompt_%s",baseline_v2[i].c_str()); *\/ */
/*       /\* h_NonPrompt[i]= new TH1F(hname_st,"Non-prompt #gamma flag",3,0,3); *\/ */
/*       /\* sprintf(hname_st,"h_ElectronFake_%s",baseline_v2[i].c_str()); *\/ */
/*       /\* h_ElectronFake[i] = new TH1F(hname_st,"e fakes #gamma flag",3,0,3); *\/ */
/*       /\* sprintf(hname_st,"hasGenPromptPhoton_v2_%s",baseline_v2[i].c_str()); *\/ */
/*       /\* h_hasGenPromptPhoton_v2[i] =new TH1F(hname_st,hname_st,2,0,2); *\/ */
/*       /\* sprintf(hname_st,"h_genPromptPho_%s",baseline_v2[i].c_str()); *\/ */
/*       /\* h_genPromptPho[i] = new TH1F(hname_st,hname_st,3,0,3); *\/ */

/*       /\* sprintf(hists_list,"h_mindR_genJets_%s",baseline_v2[i].c_str());       *\/ */
/*       /\* h_mindR_genJets[i] = new TH1F(hists_list,hists_list,1000,0,10); *\/ */
/*       /\* sprintf(hists_list,"h_mindR_recoJets_%s",baseline_v2[i].c_str()); *\/ */
/*       /\* h_mindR_recoJets[i] = new TH1F(hists_list,hists_list,1000,0,10); *\/ */
/*       /\* sprintf(hists_list,"h_Jets_chargedEmEnergyFraction_%s",baseline_v2[i].c_str());       *\/ */
/*       /\* h_Jets_chargedEmEnergyFraction[i] = new TH1F(hists_list,hists_list,1000,0,1.1); *\/ */
/*       /\* sprintf(hists_list,"h_Jets_chargedHadronEnergyFraction_%s",baseline_v2[i].c_str()); *\/ */
/*       /\* h_Jets_chargedHadronEnergyFraction[i] = new TH1F(hists_list,hists_list,1000,0,1.1); *\/ */
/*       /\* sprintf(hists_list,"h_Jets_photonEnergyFraction_%s",baseline_v2[i].c_str()); *\/ */
/*       /\* h_Jets_photonEnergyFraction[i] = new TH1F(hists_list,hists_list,1000,0,1.1); *\/ */
/*       /\* sprintf(hists_list,"h_Jets_photonMultiplicity_%s",baseline_v2[i].c_str()); *\/ */
/*       /\* h_Jets_photonMultiplicity[i] = new TH1F(hists_list,hists_list,1000,0,1.1); *\/ */
      
/*       /\* sprintf(hists_list,"h_Jets_neutralEmEnergyFraction_%s",baseline_v2[i].c_str()); *\/ */
/*       /\* h_Jets_neutralEmEnergyFraction[i] = new TH1F(hists_list,hists_list,1000,0,1.1); *\/ */
/*       /\* sprintf(hists_list,"h_Jets_neutralHadronEnergyFraction_%s",baseline_v2[i].c_str()); *\/ */
/*       /\* h_Jets_neutralHadronEnergyFraction[i] = new TH1F(hists_list,hists_list,1000,0,1.1); *\/ */

/*       /\* sprintf(hists_list,"h_Jets_chargedEmEnergyFraction_v1_%s",baseline_v2[i].c_str()); *\/ */
/*       /\* h_Jets_chargedEmEnergyFraction_v1[i] = new TH1F(hists_list,hists_list,1000,0,1.1); *\/ */
/*       /\* sprintf(hists_list,"h_Jets_chargedHadronEnergyFraction_v1_%s",baseline_v2[i].c_str()); *\/ */
/*       /\* h_Jets_chargedHadronEnergyFraction_v1[i] = new TH1F(hists_list,hists_list,1000,0,1.1); *\/ */
/*       /\* sprintf(hists_list,"h_Jets_photonEnergyFraction_v1_%s",baseline_v2[i].c_str()); *\/ */
/*       /\* h_Jets_photonEnergyFraction_v1[i] = new TH1F(hists_list,hists_list,1000,0,1.1); *\/ */
/*       /\* sprintf(hists_list,"h_Jets_photonMultiplicity_v1_%s",baseline_v2[i].c_str()); *\/ */
/*       /\* h_Jets_photonMultiplicity_v1[i] = new TH1F(hists_list,hists_list,1000,0,1.1); *\/ */

/*       /\* sprintf(hists_list,"h_Jets_neutralEmEnergyFraction_v1_%s",baseline_v2[i].c_str()); *\/ */
/*       /\* h_Jets_neutralEmEnergyFraction_v1[i] = new TH1F(hists_list,hists_list,1000,0,1.1); *\/ */
/*       /\* sprintf(hists_list,"h_Jets_neutralHadronEnergyFraction_v1_%s",baseline_v2[i].c_str()); *\/ */
/*       /\* h_Jets_neutralHadronEnergyFraction_v1[i] = new TH1F(hists_list,hists_list,1000,0,1.1); *\/ */

/*     /\* } *\/ */
  
/* char hist_name1[1000]; */
/*   /\* sprintf(hist_name1,"h_phoPt_promptPho");   *\/ */
/*   /\* h_phoPt_promptPho = new TH1F(hist_name1,"p_{T}^{#gamma} for the events with a gen prompt photon",500,0,1000); *\/ */
/*   /\* sprintf(hist_name1,"h_phoPt_promptPho_after"); *\/ */
/*   /\* h_phoPt_promptPho_after = new TH1F(hist_name1,"p_{T}^{#gamma} for the events with a gen prompt photon - after overlap removal",500,0,1000); *\/ */
/*   sprintf(hist_name1,"h_phoPt_promptPho_rejected"); */
/*   h_phoPt_promptPho_rejected = new TH1F(hist_name1,"p_{T}^{#gamma} for the events with a gen prompt photon - rejected overlap removal",500,0,1000); */
/*   /\* sprintf(hist_name1,"h_phoPt_promptPho_mindr_qgl0p5"); *\/ */
/*   /\* h_phoPt_promptPho_mindr_qgl0p5 = new TH1F(hist_name1,"p_{T}^{reco #gamma} events with mindR(gen #gamma, q/g)<0.5",500,0,1000); *\/ */
/*   /\* sprintf(hist_name1,"h_phoPt_promptPho_mindr_qgh0p5"); *\/ */
/*   /\* h_phoPt_promptPho_mindr_qgh0p5 = new TH1F(hist_name1,"p_{T}^{reco #gamma} events with mindR(gen #gamma, q/g)>0.5",500,0,1000); *\/ */
/*   /\* sprintf(hist_name1,"h_phoPt_promptPho_mindr_lepl0p5"); *\/ */
/*   /\* h_phoPt_promptPho_mindr_lepl0p5 = new TH1F(hist_name1,"p_{T}^{reco #gamma} events with mindR(reco #gamma, gen lep)<0.5",500,0,1000); *\/ */
/*   /\* sprintf(hist_name1,"h_phoPt_promptPho_mindr_leph0p5"); *\/ */
/*   /\* h_phoPt_promptPho_mindr_leph0p5 = new TH1F(hist_name1,"p_{T}^{reco-#gamma} events with mindR(reco #gamma, gen lep)>0.5",500,0,1000); *\/ */
/*   /\* sprintf(hist_name1,"h_phoPt_NopromptPho"); *\/ */
/*   /\* h_phoPt_NopromptPho = new TH1F(hist_name1,"p_{T}^{reco-#gamma} events with no gen prompt photon",500,0,1000); *\/ */

/*   /\* h_phopT_BeamRemenant = new TH1F("h_phopT_BeamRemenant","#gamma-pT, #gamma coming from other particles with different status",500,0,1000); *\/ */
/*   /\* h_parID_matchRecoPho = new TH1F("h_parID_matchRecoPho","particle ID: mindR(reco- #gamma, particle)<0.2",200,-100,100); *\/ */
/*   /\* h_parentID_vsPartId_matchPho = new TH2F("h_parentID_vsPartId_matchPho","particle ID vs parent ID: mindR(reco- #gamma, particle)<0.2",200,-10,100,200,-100,100); *\/ */

/*  for(int i=0;i<baseline.size();i++) */
/*     { */
/*       cout<<i<<"\t"<<baseline[i]<<endl; */
/*       sprintf(hname_njet_vs_ST,"h_njets_vs_ST_%s",baseline[i].c_str()); */
/*       sprintf(hname_njet_vs_HT,"h_njets_vs_HT_%s",baseline[i].c_str()); */
/*       sprintf(hname_ST_vs_ptPho,"h_ST_vs_ptPho_%s",baseline[i].c_str()); */
      
/*       sprintf(hname_njets,"h_NhadJets_%s",baseline[i].c_str()); */
/*       sprintf(hname_nBjets,"h_NBJets_%s",baseline[i].c_str()); */
/*       sprintf(hname_Met,"h_MET_%s",baseline[i].c_str()); */
/*       sprintf(hname_PhoPt,"h_PhoPt_%s",baseline[i].c_str()); */
/*       sprintf(hname_Mt_phopt,"h_Mt_phoMET_%s",baseline[i].c_str()); */
/*       sprintf(hname_dPhi,"h_dPhi_phoMet_%s",baseline[i].c_str()); */
/*       sprintf(hname_st,"h_St_%s",baseline[i].c_str()); */
/*       sprintf(hname_ht,"h_HT_%s",baseline[i].c_str()); */
/*       h_Njets[i]= new TH1D(hname_njets, hname_njets,20,0,20); */
/*       h_Nbjets[i]= new TH1D(hname_nBjets, hname_nBjets,15,0,15); */
/*       h_MET_[i] = new TH1F(hname_Met,hname_Met,400,0,1500); */
/*       h_PhotonPt[i]= new TH1F(hname_PhoPt,hname_PhoPt,500,0,1000); */
/*       h_Mt_PhoMET[i]= new TH1F(hname_Mt_phopt,hname_Mt_phopt,500,0,2500); */
/*       h_dPhi_PhoMET[i]= new TH1F(hname_dPhi,hname_dPhi,200,0,5); */
/*       h_St[i]=new TH1F(hname_st,hname_st,250,0,2500); */
/*       h_HT[i]= new TH1F(hname_ht,hname_ht,250,0,2500); */
/*       sprintf(hname_st,"h_TFbins_ElecLL_v1_%s",baseline[i].c_str()); */
/*       h_TFbins_LL_v1[i] = new TH1F(hname_st,hname_st,30,0,30); */
/*       sprintf(hname_st,"h_TFbins_ElecLL_v2_%s",baseline[i].c_str()); */
/*       h_TFbins_LL_v2[i] = new TH1F(hname_st,hname_st,30,0,30); */
/*       sprintf(hname_st,"h_TFbins_ElecLL_validation_v1_%s",baseline[i].c_str()); */
/*       h_TFbins_ElecLL_validation[i] = new TH1F(hname_st,hname_st,30,0,30); */
/*       sprintf(hname_st,"h_TFbins_ElecLL_validation_v2_%s",baseline[i].c_str()); */
/*       h_TFbins_ElecLL_validation_v1[i] = new TH1F(hname_st,hname_st,30,0,30); */
/*       sprintf(hname_st,"h_Sbins_LL_Validation_%s",baseline[i].c_str()); */
/*       h_Sbins_LL_Validation[i] = new TH1F(hname_st,"search bins SP:[0b,1b] x [(NJ=2to4),(NJ:5or6),(NJ>=7)]",52,0,52); */
/*       sprintf(hname_st,"h_Sbins_LL_%s",baseline[i].c_str()); */
/*       h_Sbins_LL[i] = new TH1F(hname_st,"search bins SP:[0b,1b] x [(NJ=2to4),(NJ:5or6),(NJ>=7)]",52,0,52); */

/*       sprintf(hname_st,"mindr_Pho_genlep_%s",baseline[i].c_str()); */
/*       h_mindr_Pho_genlep[i]= new TH1F(hname_st,"mindR(gen-l,#gamma)",1000,0,10); */
/*       sprintf(hname_st,"mindr_Pho_genElec_%s",baseline[i].c_str()); */
/*       h_mindr_Pho_genElec[i] = new TH1F(hname_st,"mindR(gen e,#gamma)",1000,0,10); */
/*       sprintf(hname_st,"mindr_Pho_RecoElec_%s",baseline[i].c_str()); */
/*       h_mindr_Pho_RecoEle[i] = new TH1F(hname_st,"mindR(reco e, #gamma)",1000,0,10); */

/*       /\* h_njets_vs_ST[i]= new TH2F(hname_njet_vs_ST,hname_njet_vs_HT,20,0,20,120,0,12000); *\/ */
/*       /\* h_njets_vs_HT[i] = new TH2F(hname_njet_vs_HT,hname_njet_vs_HT,20,0,20,120,0,12000); *\/ */
/*       /\* h_ST_vs_ptPho[i]= new TH2F(hname_ST_vs_ptPho,hname_ST_vs_ptPho,100,0,2000,120,0,12000); *\/ */
/*       /\* sprintf(hname,"h_BDT_response_%s",baseline[i].c_str()); *\/ */
/*       /\* h_mvaResponse_baseline[i]= new TH1F(hname,hname,500,-2,2); *\/ */
/*       /\* sprintf(hname_st,"mindr_Pho_genlep_%s",baseline[i].c_str()); *\/ */
/*       /\* h_mindr_Pho_genlep[i]= new TH1F(hname_st,"mindR(gen-l,#gamma)",1000,0,10); *\/ */
/*       /\* sprintf(hname_st,"mindr_Pho_genElec_%s",baseline[i].c_str()); *\/ */
/*       /\* h_mindr_Pho_genElec[i] = new TH1F(hname_st,"mindR(gen e,#gamma)",1000,0,10); *\/ */
/*       /\* sprintf(hname_st,"mindr_Pho_RecoElec_%s",baseline[i].c_str()); *\/ */
/*       /\* h_mindr_Pho_RecoEle[i] = new TH1F(hname_st,"mindR(reco e, #gamma)",1000,0,10); *\/ */
      
/*       /\* sprintf(hname_st,"hasGenPromptPhoton_%s",baseline[i].c_str()); *\/ */
/*       /\* h_hasGenPromptPhoton_v1[i] =new TH1F(hname_st,hname_st,2,0,2); *\/ */
/*       /\* sprintf(hname_st,"mindRvspT_bestPhoLep1_%s",baseline[i].c_str()); *\/ */
/*       /\* h2d_mindRvspT_bestPho_genlep_v1[i]= new TH2F(hname_st,hname_st,1000,0,10,1000,0,10); *\/ */
/*       /\* sprintf(hname_st,"mindRvspT_bestPhoLep2_%s",baseline[i].c_str()); *\/ */
/*       /\* h2d_mindRvspT_bestPho_genlep_v2[i]= new TH2F(hname_st,hname_st,1000,0,10,1000,0,10); *\/ */
/*       /\* sprintf(hname_st,"ratio_bestPho_genLep_v1_%s",baseline[i].c_str()); *\/ */
/*       /\* h_ratio_bestPho_genlep_v1[i] = new TH1F(hname_st,hname_st,1000,0,10); *\/ */
/*       /\* sprintf(hname_st,"ratio_bestPho_genLep_v2_%s",baseline[i].c_str()); *\/ */
/*       /\* h_ratio_bestPho_genlep_v2[i] = new TH1F(hname_st,hname_st,1000,0,10); *\/ */
      
/*     } */
/*   char hist_name[10000];//= new char[1000]; */
/*   /\* sprintf(hist_name,"h_Lep_pT_Wjets"); *\/ */
/*   /\* h_Lep_pT=new TH1F(hist_name,"Lept-pT from W at gen level",500,0,2000); *\/ */
/*   /\* sprintf(hist_name,"h_elec_pT"); *\/ */
/*   /\* h_elec_pT=new TH1F(hist_name,"p_{T} of Electrons",500,0,2000); *\/ */
/*   /\* sprintf(hist_name,"h_W_pT"); *\/ */
/*   /\* h_W_pT = new TH1F(hist_name,"p_{T} of W",500,0,2000); *\/ */
/*   /\* sprintf(hist_name,"h_Nu_pT"); *\/ */
/*   /\* h_Nu_pT = new TH1F(hist_name,"p_{T} of Neutrino",500,0,2000);   *\/ */
/*   /\* sprintf(hist_name,"h_mu_pT"); *\/ */
/*   /\* h_mu_pT=new TH1F(hist_name,"p_{T} of Muons",500,0,2000); *\/ */
/*   /\* sprintf(hist_name,"h_tau_pT"); *\/ */
/*   /\* h_tau_pT=new TH1F(hist_name,"p_{T} of Taus",500,0,2000); *\/ */
/*   /\* sprintf(hist_name,"h_elec_Eta"); *\/ */
/*   /\* h_elec_Eta=new TH1F(hist_name,"Eta coordinate for Eletcrons",500,-5,5		     ); *\/ */
/*   /\* sprintf(hist_name,"h_W_Eta"); *\/ */
/*   /\* h_W_Eta = new TH1F(hist_name,"Eta coordinate for W",500,-5,5); *\/ */
/*   /\* sprintf(hist_name,"h_Nu_Eta"); *\/ */
/*   /\* h_Nu_Eta = new TH1F(hist_name,"Eta coordinate for Neutrino",500,-5,5); *\/ */
/*   /\* sprintf(hist_name,"h_mu_Eta"); *\/ */
/*   /\* h_mu_Eta=new TH1F(hist_name,"Eta coordinate for Muons",500,-5,5); *\/ */
/*   /\* sprintf(hist_name,"h_tau_Eta"); *\/ */
/*   /\* h_tau_Eta=new TH1F(hist_name,"Eta coordinate for Taus",500,-5,5); *\/ */

/*   /\* sprintf(hist_name,"h_elec_Phi"); *\/ */
/*   /\* h_elec_Phi=new TH1F(hist_name,"Phi coordinate for Eletcrons",500,-5,5              ); *\/ */
/*   /\* sprintf(hist_name,"h_W_Phi"); *\/ */
/*   /\* h_W_Phi = new TH1F(hist_name,"Phi coordinate for W",500,-5,5); *\/ */
/*   /\* sprintf(hist_name,"h_Nu_Phi"); *\/ */
/*   /\* h_Nu_Phi = new TH1F(hist_name,"Phi coordinate for Neutrino",500,-5,5); *\/ */
/*   /\* sprintf(hist_name,"h_mu_Phi"); *\/ */
/*   /\* h_mu_Phi=new TH1F(hist_name,"Phi coordinate for Muons",500,-5,5); *\/ */
/*   /\* sprintf(hist_name,"h_tau_Phi"); *\/ */
/*   /\* h_tau_Phi=new TH1F(hist_name,"Phi coordinate for Taus",500,-5,5); *\/ */
  
/*   /\* sprintf(hist_name,"h_elec_E"); *\/ */
/*   /\* h_elec_E=new TH1F(hist_name,"Energy of Electrons",500,0,2000); *\/ */
/*   /\* sprintf(hist_name,"h_W_E"); *\/ */
/*   /\* h_W_E = new TH1F(hist_name,"Energy of W",500,0,2000); *\/ */
/*   /\* sprintf(hist_name,"h_Nu_E"); *\/ */
/*   /\* h_Nu_E = new TH1F(hist_name,"Energy of Neutrino",500,0,2000); *\/ */
/*   /\* sprintf(hist_name,"h_mu_E"); *\/ */
/*   /\* h_mu_E=new TH1F(hist_name,"Energy of Muons",500,0,2000); *\/ */
/*   /\* sprintf(hist_name,"h_tau_E"); *\/ */
/*   /\* h_tau_E=new TH1F(hist_name,"Energy of Taus",500,0,2000); *\/ */
/*   /\* sprintf(hist_name,"h_counts_"); *\/ */
/*   /\* h_counts = new TH1F(hist_name,"",20,0,20); *\/ */
/*   /\* sprintf(hist_name,"h_2dcounts"); *\/ */
/*   /\* h_2dcounts = new TH2F(hist_name,"",20,0,20,20,0,20); *\/ */
/*   /\* sprintf(hist_name,"h_2d_elec_nu_pT"); *\/ */
/*   /\* h_2d_elec_nu_pT = new TH2F(hist_name,"",500,0,2000,500,0,2000); *\/ */
/*   /\* h_2d_elec_nu_pT->GetXaxis()->SetTitle("p_{T} of electron "); *\/ */
/*   /\* h_2d_elec_nu_pT->GetYaxis()->SetTitle("p_{T} of neutrino "); *\/ */
/*   /\* sprintf(hist_name,"h_2d_nu_MET_pT"); *\/ */
/*   /\* h_2d_nu_MET_pT = new TH2F(hist_name,"",500,0,2000,500,0,2000); *\/ */
/*   /\* h_2d_nu_MET_pT->GetXaxis()->SetTitle("p_{T} of neutron "); *\/ */
/*   /\* h_2d_nu_MET_pT->GetXaxis()->SetTitle("p^{miss}_{T} "); *\/ */
/*   /\* sprintf(hist_name,"h_2d_mu_nu_pT"); *\/ */
/*   /\* h_2d_mu_nu_pT = new TH2F(hist_name,"",500,0,2000,500,0,2000); *\/ */
/*   /\* h_2d_mu_nu_pT->GetXaxis()->SetTitle("p_{T} of muon "); *\/ */
/*   /\* h_2d_mu_nu_pT->GetYaxis()->SetTitle("p_{T} of neutrino "); *\/ */
/*   /\* sprintf(hist_name,"h_2d_tau_nu_pT"); *\/ */
/*   /\* h_2d_Tau_nu_pT = new TH2F(hist_name,"",500,0,2000,500,0,2000); *\/ */
/*   /\* h_2d_Tau_nu_pT->GetXaxis()->SetTitle("p_{T} of tau "); *\/ */
/*   /\* h_2d_Tau_nu_pT->GetYaxis()->SetTitle("p_{T} of neutrino "); *\/ */
/*   /\* sprintf(hist_name,"h_2d_WvsElec_pT"); *\/ */
/*   /\* h_2d_WvsElec_pT = new TH2F(hist_name,"",500,0,2000,500,0,2000); *\/ */
/*   /\* h_2d_WvsElec_pT->GetXaxis()->SetTitle("p_{T} of W "); *\/ */
/*   /\* h_2d_WvsElec_pT->GetYaxis()->SetTitle("p_{T} of Electron "); *\/ */
/*   /\* sprintf(hist_name,"h_2d_WvsMu_pT"); *\/ */
/*   /\* h_2d_WvsMu_pT = new TH2F(hist_name,"",500,0,2000,500,0,2000); *\/ */
/*   /\* h_2d_WvsMu_pT->GetXaxis()->SetTitle("p_{T} of W "); *\/ */
/*   /\* h_2d_WvsMu_pT->GetYaxis()->SetTitle("p_{T} of Muon "); *\/ */

/*   /\* sprintf(hist_name,"h_2d_WvsTau_pT"); *\/ */
/*   /\* h_2d_WvsTau_pT = new TH2F(hist_name,"",500,0,2000,500,0,2000); *\/ */
/*   /\* h_2d_WvsTau_pT->GetXaxis()->SetTitle("p_{T} of W "); *\/ */
/*   /\* h_2d_WvsTau_pT->GetYaxis()->SetTitle("p_{T} of Tau "); *\/ */

/*   /\* sprintf(hist_name,"h_2d_WvsElecNu_pT"); *\/ */
/*   /\* h_2d_WvsElecNu_pT = new TH2F(hist_name,"",500,0,2000,500,0,2000); *\/ */
/*   /\* h_2d_WvsElecNu_pT->GetXaxis()->SetTitle("p_{T} of W "); *\/ */
/*   /\* h_2d_WvsElecNu_pT->GetYaxis()->SetTitle("p_{T} of Electron-Nu "); *\/ */
/*   /\* sprintf(hist_name,"h_2d_WvsMuNu_pT"); *\/ */
/*   /\* h_2d_WvsMuNu_pT = new TH2F(hist_name,"",500,0,2000,500,0,2000); *\/ */
/*   /\* h_2d_WvsMuNu_pT->GetXaxis()->SetTitle("p_{T} of W "); *\/ */
/*   /\* h_2d_WvsMuNu_pT->GetYaxis()->SetTitle("p_{T} of Mu-Nu"); *\/ */
/*   /\* sprintf(hist_name,"h_2d_WvsTauNu_pT"); *\/ */
/*   /\* h_2d_WvsTauNu_pT= new TH2F(hist_name,"",500,0,2000,500,0,2000); *\/ */
/*   /\* h_2d_WvsTauNu_pT->GetXaxis()->SetTitle("p_{T} of W "); *\/ */
/*   /\* h_2d_WvsTauNu_pT->GetYaxis()->SetTitle("p_{T} of Tau-Nu "); *\/ */

/*   /\* sprintf(hist_name,"h_2d_elec_nu_Eta"); *\/ */
/*   /\* h_2d_elec_nu_Eta = new TH2F(hist_name,"",500,-5,5,500,-5,5); *\/ */
/*   /\* h_2d_elec_nu_Eta->GetXaxis()->SetTitle("Eta coordinate of electron "); *\/ */
/*   /\* h_2d_elec_nu_Eta->GetYaxis()->SetTitle("Eta coordinate of neutrino "); *\/ */
/*   /\* sprintf(hist_name,"h_2d_nu_MET_Eta"); *\/ */
/*   /\* h_2d_nu_MET_Eta = new TH2F(hist_name,"",500,-5,5,500,-5,5); *\/ */
/*   /\* h_2d_nu_MET_Eta->GetXaxis()->SetTitle("Eta coordinate of neutron "); *\/ */
/*   /\* h_2d_nu_MET_Eta->GetXaxis()->SetTitle("p^{miss}_{T} "); *\/ */
/*   /\* sprintf(hist_name,"h_2d_mu_nu_Eta"); *\/ */
/*   /\* h_2d_mu_nu_Eta = new TH2F(hist_name,"",500,-5,5,500,-5,5); *\/ */
/*   /\* h_2d_mu_nu_Eta->GetXaxis()->SetTitle("Eta coordinate of muon "); *\/ */
/*   /\* h_2d_mu_nu_Eta->GetYaxis()->SetTitle("Eta coordinate of neutrino "); *\/ */
/*   /\* sprintf(hist_name,"h_2d_tau_nu_Eta"); *\/ */
/*   /\* h_2d_Tau_nu_Eta = new TH2F(hist_name,"",500,-5,5,500,-5,5); *\/ */
/*   /\* h_2d_Tau_nu_Eta->GetXaxis()->SetTitle("Eta coordinate of tau "); *\/ */
/*   /\* h_2d_Tau_nu_Eta->GetYaxis()->SetTitle("Eta coordinate of neutrino "); *\/ */
/*   /\* sprintf(hist_name,"h_2d_WvsElec_Eta"); *\/ */
/*   /\* h_2d_WvsElec_Eta = new TH2F(hist_name,"",500,-5,5,500,-5,5); *\/ */
/*   /\* h_2d_WvsElec_Eta->GetXaxis()->SetTitle("Eta coordinate of W "); *\/ */
/*   /\* h_2d_WvsElec_Eta->GetYaxis()->SetTitle("Eta coordinate of Electron "); *\/ */
/*   /\* sprintf(hist_name,"h_2d_WvsMu_Eta"); *\/ */
/*   /\* h_2d_WvsMu_Eta = new TH2F(hist_name,"",500,-5,5,500,-5,5); *\/ */
/*   /\* h_2d_WvsMu_Eta->GetXaxis()->SetTitle("Eta coordinate of W "); *\/ */
/*   /\* h_2d_WvsMu_Eta->GetYaxis()->SetTitle("Eta coordinate of Muon "); *\/ */
/*   /\* sprintf(hist_name,"h_2d_WvsTau_Eta"); *\/ */
/*   /\* h_2d_WvsTau_Eta= new TH2F(hist_name,"",500,-5,5,500,-5,5); *\/ */
/*   /\* h_2d_WvsTau_Eta->GetXaxis()->SetTitle("Eta coordinate of W "); *\/ */
/*   /\* h_2d_WvsTau_Eta->GetYaxis()->SetTitle("Eta coordinate of Tau "); *\/ */
  
/*   /\* sprintf(hist_name,"h_2d_WvsElecNu_Eta"); *\/ */
/*   /\* h_2d_WvsElecNu_Eta = new TH2F(hist_name,"",500,-5,5,500,-5,5); *\/ */
/*   /\* h_2d_WvsElecNu_Eta->GetXaxis()->SetTitle("Eta coordinate of W "); *\/ */
/*   /\* h_2d_WvsElecNu_Eta->GetYaxis()->SetTitle("Eta coordinate of Electron-Nu "); *\/ */
/*   /\* sprintf(hist_name,"h_2d_WvsMuNu_Eta"); *\/ */
/*   /\* h_2d_WvsMuNu_Eta = new TH2F(hist_name,"",500,-5,5,500,-5,5); *\/ */
/*   /\* h_2d_WvsMuNu_Eta->GetXaxis()->SetTitle("Eta coordinate of W "); *\/ */
/*   /\* h_2d_WvsMuNu_Eta->GetYaxis()->SetTitle("Eta coordinate of Mu-Nu"); *\/ */
/*   /\* sprintf(hist_name,"h_2d_WvsTauNu_Eta"); *\/ */
/*   /\* h_2d_WvsTauNu_Eta= new TH2F(hist_name,"",500,-5,5,500,-5,5); *\/ */
/*   /\* h_2d_WvsTauNu_Eta->GetXaxis()->SetTitle("Eta coordinate of W "); *\/ */
/*   /\* h_2d_WvsTauNu_Eta->GetYaxis()->SetTitle("Eta coordinate of Tau-Nu "); *\/ */
/*   /\* sprintf(hist_name,"h_GenMET"); *\/ */
/*   /\* h_GenMET = new TH1F(hist_name,"",500,0,2000); *\/ */
/*   /\* sprintf(hist_name,"h_GenHT"); *\/ */
/*   /\* h_GenHT = new TH1F(hist_name,"",500,0,2000); *\/ */
/*   /\* sprintf(hist_name,"h_GenJets"); *\/ */
/*   /\* h_GenJets  = new TH1F(hist_name,"",50,0,50); *\/ */
/*   /\* sprintf(hist_name,"h_GenMET_passingTrigger"); *\/ */
/*   /\* h_GenMET_passingTrigger = new  TH1F(hist_name,"",500,0,2000); *\/ */
/*   /\* sprintf(hist_name,"h_MET_passingTrigger"); *\/ */
/*   /\* h_MET_passingTrigger = new  TH1F(hist_name,"",500,0,2000); *\/ */
/*   /\* sprintf(hist_name,"h_MET"); *\/ */
/*   /\* h_MET = new  TH1F(hist_name,"",500,0,2000); *\/ */
/*   /\* sprintf(hist_name,"h_recoElec_pT"); *\/ */
/*   /\* h_recoElec_pT = new TH1F(hist_name,"",500,0,2000); *\/ */
/*   /\* sprintf(hist_name,"h_recoPho_pT"); *\/ */
/*   /\* h_recoPho_pT= new TH1F(hist_name,"",500,0,2000); *\/ */
/*   /\* sprintf(hist_name,"h_recoMu_pT"); *\/ */
/*   /\* h_recoMu_pT = new TH1F(hist_name,"",500,0,2000); *\/ */
/*   /\* sprintf(hist_name,"h_recoMu_Eta"); *\/ */
/*   /\* h_recoMu_Eta = new TH1F(hist_name,"",500,-5,5); *\/ */
/*   /\* sprintf(hist_name,"h_recoElec_Eta"); *\/ */
/*   /\* h_recoElec_Eta = new TH1F(hist_name,"",500,-5,5);   *\/ */
/*   /\* sprintf(hist_name,"h_recoPho_Eta"); *\/ */
/*   /\* h_recoPho_Eta = new TH1F(hist_name,"",500,-5,5); *\/ */
/*   /\* sprintf(hist_name,"h_recoMu_Phi"); *\/ */
/*   /\* h_recoMu_Phi = new TH1F(hist_name,"",500,-5,5); *\/ */
/*   /\* sprintf(hist_name,"h_recoElec_Phi"); *\/ */
/*   /\* h_recoElec_Phi = new TH1F(hist_name,"",500,-5,5); *\/ */
/*   /\* sprintf(hist_name,"h_recoPho_Phi"); *\/ */
/*   /\* h_recoPho_Phi = new TH1F(hist_name,"",500,-5,5); *\/ */
/*   /\* sprintf(hist_name,"h_leadJet_pT"); *\/ */
/*   /\* h_leadJet_pT = new TH1F(hist_name,"",500,0,2000); *\/ */
/*   /\* sprintf(hist_name,"h_subleadJet_pT");  *\/ */
/*   /\* h_subleadJet_pT = new TH1F(hist_name,"",500,0,2000); *\/ */
/*   /\* sprintf(hist_name,"h_leadJet_Eta");  *\/ */
/*   /\* h_leadJet_Eta= new TH1F(hist_name,"",500,-5,5);  *\/ */
/*   /\* sprintf(hist_name,"h_subleadJet_Eta"); *\/ */
/*   /\* h_subleadJet_Eta= new TH1F(hist_name,"",500,-5,5); *\/ */

/*   /\* sprintf(hist_name,"h_Lep_pT_Wjets_AfterBL"); *\/ */
/*  /\* h_Lep_pT_AfterBL =new TH1F(hist_name,"Lept-pT from W at gen level",500,0,2000); *\/ */
/*  /\* sprintf(hist_name,"h_elec_pT_Wjets_AfterBL"); *\/ */
/*  /\* h_elec_pT_AfterBL =new TH1F(hist_name,"Elec-pT from W at gen level",500,0,2000); *\/ */
/*  /\* sprintf(hist_name,"h_tau_pT_Wjets_AfterBL"); *\/ */
/*  /\* h_tau_pT_AfterBL =new TH1F(hist_name,"tau-pT from W at gen level",500,0,2000); *\/ */
/*  /\* sprintf(hist_name,"h_tau_pT_Wjets_AfterBL"); *\/ */
/*  /\* h_tau_pT_AfterBL =new TH1F(hist_name,"Tau-pT from W at gen level",500,0,2000); *\/ */
/*  /\* sprintf(hist_name,"h_counts__AfterBL"); *\/ */
/*  /\* h_counts_AfterBL = new TH1F(hist_name,"",20,0,20); *\/ */
/*  /\* sprintf(hist_name,"h_2dcounts_AfterBL"); *\/ */
/*  /\* h_2dcounts_AfterBL = new TH2F(hist_name,"",20,0,20,20,0,20); *\/ */
/*  /\* sprintf(hist_name,"h_2d_elec_nu_pT_AfterBL"); *\/ */
/*  /\* h_2d_elec_nu_pT_AfterBL = new TH2F(hist_name,"",500,0,2000,500,0,2000); *\/ */
/*  /\* sprintf(hist_name,"h_2d_nu_MET_pT_AfterBL"); *\/ */
/*  /\* h_2d_nu_MET_pT_AfterBL = new TH2F(hist_name,"",500,0,2000,500,0,2000); *\/ */

/*   /\* for(int i=0;i<6;i++) *\/ */
/*   /\*   { *\/ */
/*   /\*     sprintf(hname,"h_dPhi_btw_Met_%02d_HadJets",i);  *\/ */
/*   /\*     sprintf(hname_2d,"h_dPhi_vs_Met_%02d_HadJets",i); *\/ */
/*   /\*     sprintf(hname1,"h_dPhi_btw_Met_%02d_HadJets_After",i); *\/ */
/*   /\*     sprintf(hname1_2d,"h_dPhi1_vs_MET_%02d_HadJets_After",i); *\/ */
/*   /\*     h_dPhi_Met_hadJets[i]= new TH1F(hname, hname,100,0,6); *\/ */
/*   /\*     h_dPhivsMET[i]=new TH2F(hname_2d,hname_2d,100,0,10,70,0,2100); *\/ */
/*   /\*     h_dPhi_Met_hadJets_after[i]= new TH1F(hname1, hname1,100,0,6); *\/ */
/*   /\*     h_dPhivsMET_after[i]=new TH2F(hname1_2d,hname1_2d,100,0,10,70,0,2100); *\/ */

/*   /\*     //      h_dPhi1vsdPhi2[i]=new TH2F(hname1_2d,hname1_2d,100,0,6); *\/ */
/*   /\*   } *\/ */
/*   /\* h_HT_njets_2_4 = new TH1F("h_HT_njets_2_4","HT distribution for nhadjet >=2 & <=4",120,0,12000); *\/ */
/*   /\* h_HT_njets_5_6 = new  TH1F("h_HT_njets_5_6","HT distribution for nhadjet >=5 & <=6",120,0,12000); *\/ */
/*   /\* h_HT_njets_7 = new  TH1F("h_HT_njets_7","HT distribution for nhadjet >=7 ",120,0,12000); *\/ */
/*   /\* h_HT_njets_2_4_Met250 = new TH1F("h_HT_njets_2_4_Met250","HT distribution for nhadjet >=2 & <=4",120,0,12000); *\/ */
/*   /\* h_HT_njets_5_6_Met250 = new  TH1F("h_HT_njets_5_6_Met250","HT distribution for nhadjet >=5 & <=6",120,0,12000); *\/ */
/*   /\* h_HT_njets_7_Met250 = new  TH1F("h_HT_njets_7_Met250","HT distribution for nhadjet >=7 ",120,0,12000); *\/ */


/*   /\* h_dPhi1vsdPhi2= new TH2F("h_dPhi1vsdPhi2","dPhi1 vs dPhi2",100,0,6,100,0,6); *\/ */
/*   /\* //  h_selectBaselineYields_ = new TH1F("cutflows","cutflows",10,-0.5,9.5); *\/ */
/*   /\* h_minDR_PhoLep = new TH1F("h_minDR_PhoLep","",300,0,2); *\/ */
/*   /\* h_madminPhotDeltaR = new TH1F ("h_madminPhotDeltaR","",300,0,2); *\/ */
/*   /\* h_PhoPt=new TH1F("h_PhoPt","Photon -Pt >20GeV ",96,0,2000);//xbins_PhotPt); *\/ */
/*   /\* h_MeT=new TH1F ("h_MeT","MET >100",50,0,1500); *\/ */
/*   /\* h_NJets=new TH1D("h_NJets","N hadronic jets (>=2)",20,0,20); *\/ */
/*   /\* h_NbJets=new TH1D("h_NbJets","B-tagged jets",15,0,15); *\/ */
/*   //  h_HT= new TH1F("h_HT","Sum of pt for all hadronic jets",100,0,10000); */
/*   /\* h_check_PhoPt= new TH1F("h_check_PhoPt","check Pt distribution",100,0,2000); *\/ */
/*   /\* h_dPhi_PhoMET = new TH1F("h_dPhi_PhoMET","dPhi (Best Phot & MET)",200,0,5); *\/ */
/*   /\* h_Mt_PhoMET = new TH1F("h_Mt_PhoMET","Mt (Photon & MET)",500,0,2500); *\/ */
  
/*   h_Sbins_v6_withOnlyBL_Selec= new TH1F("h_Sbins_v6_withOnlyBL_Selec","search bins SP:[0b,1b] x [(NJ=2to4),(NJ:5or6),(NJ>=7)]",52,0,52); */
/*   h_Sbins_v6_withOnlyBL_Selec_PrevAna= new TH1F("h_Sbins_v6_withOnlyBL_Selec_PrevAna","search bins SP:[0b,1b] x [(NJ=2to4),(NJ:5or6),(NJ>=7)]",52,0,52); */
/*   h_Sbins_v6_withOnlyBL_Selec_Met100= new TH1F("h_Sbins_v6_withOnlyBL_Selec_Met100","search bins SP:[0b,1b] x [(NJ=2to4),(NJ:5or6),(NJ>=7)]",52,0,52); */
/*   h_Sbins_v6_withOnlyBL_Selec_HT1TeV_Met100 = new TH1F("h_Sbins_v6_withOnlyBL_Selec_HT1TeV_Met100","search bins SP:[(NJ=2to4),(NJ:5or6),(NJ>=7)]",52,0,52); */
/*   h_Sbins_v6_withOnlyBL_njetsvsHTbin = new TH1F("h_Sbins_v6_withOnlyBL_njetsvsHTbin","search bins SP:[0b,1b] x [(NJ=2to4),(NJ:5or6),(NJ>=7)]",52,0,52); */
/*   h_Sbins_v6_withOnlyBL_Selec_HT1TeV_Met250 = new TH1F("h_Sbins_v6_withOnlyBL_Selec_HT1TeV_Met250","search bins SP:[0b,1b] x [(NJ=2to4),(NJ:5or6),(NJ>=7)]",52,0,52); */
/*   h_Sbins_v6_withOnlyBL_Selec_HT1TeV_Met250_Pt100 = new TH1F("h_Sbins_v6_withOnlyBL_Selec_HT1TeV_Met250_Pt100","search bins SP:[0b,1b] x [(NJ=2to4),(NJ:5or6),(NJ>=7)]",52,0,52); */
/*   h_Sbins_v6_withOnlyBL_Selec_HT15TeV_Met250 = new TH1F("h_Sbins_v6_withOnlyBL_Selec_HT15TeV_Met250","search bins SP:[0b,1b] x [(NJ=2to4),(NJ:5or6),(NJ>=7)]",52,0,52); */
/*   h_Sbins_v6_withOnlyBL_Selec_HT15TeV_Met250_Pt100 = new TH1F("h_Sbins_v6_withOnlyBL_Selec_HT15TeV_Met250_Pt100","search bins SP:[0b,1b] x [(NJ=2to4),(NJ:5or6),(NJ>=7)]",52,0,52); */
/*   h_Sbins_v6_withOnlyBL_Selec_HT15TeV_Met100 = new TH1F("h_Sbins_v6_withOnlyBL_Selec_HT15TeV_Met100","search bins SP:[(NJ=2to4),(NJ:5or6),(NJ>=7)]",52,0,52); */
/*   h_Sbins_v6_withOnlyBL_Selec_HT175TeV_Met250 = new TH1F("h_Sbins_v6_withOnlyBL_Selec_HT175TeV_Met250","search bins SP:[0b,1b] x [(NJ=2to4),(NJ:5or6),(NJ>=7)]",52,0,52 */
/* 							 ); */
/*   h_Sbins_v6_withOnlyBL_Selec_HT175TeV_Met250_Pt100 = new TH1F("h_Sbins_v6_withOnlyBL_Selec_HT175TeV_Met250_Pt100","search bins SP:[0b,1b] x [(NJ=2to4),(NJ:5or6),(NJ>=7)]",52,0,52); */
/*   h_Sbins_v6_withOnlyBL_Selec_HT175TeV_Met100 = new TH1F("h_Sbins_v6_withOnlyBL_Selec_HT175TeV_Met100","search bins SP:[(NJ=2to4),(NJ:5or6),(NJ>=7)]",52,0,52); */
/*   h_Sbins_v6_withOnlyBL_Selec_HT2TeV_Met250 = new TH1F("h_Sbins_v6_withOnlyBL_Selec_HT2TeV_Met250","search bins SP:[0b,1b] x [(NJ=2to4),(NJ:5or6),(NJ>=7)]",52,0,52 */
/* 							 ); */
/*   h_Sbins_v6_withOnlyBL_Selec_HT2TeV_Met250_Pt100 = new TH1F("h_Sbins_v6_withOnlyBL_Selec_HT2TeV_Met250_Pt100","search bins SP:[0b,1b] x [(NJ=2to4),(NJ:5or6),(NJ>=\ */
/* 7)]",52,0,52); */
/*   h_Sbins_v6_withOnlyBL_Selec_HT2TeV_Met100 = new TH1F("h_Sbins_v6_withOnlyBL_Selec_HT2TeV_Met100","search bins SP:[(NJ=2to4),(NJ:5or6),(NJ>=7)]",52,0,52); */


/*   //					h_SBins_v7_CD_SP_elec1_closure = new TH1D("AllSBins_v7_CD_SP_elec1_closure","search bins SP:[0b,1b] x [(NJ=2to4),(NJ:5or6),(NJ>=7)] + EW : Wtag & Htag",10,1,11); */

  
/*   /\* h_MeT_Met250GeV=new TH1F ("h_MeT_Met250GeV","MET >100",50,0,1500); *\/ */
/*   /\* h_NJets_Met250GeV=new TH1D("h_NJets_Met250GeV","N hadronic jets (>_Met250GeV=2)",20,0,20); *\/ */
/*   /\* h_NbJets_Met250GeV=new TH1D("h_NbJets_Met250GeV","B-tagged jets",15,0,15); *\/ */
/*   /\* h_HT_Met250GeV= new TH1F("h_HT_Met250GeV","Sum of pt for all hadronic jets",100,0,10000); *\/ */
/*   /\* h_check_PhoPt_Met250GeV= new TH1F("h_check_PhoPt_Met250GeV","check Pt distribution",100,0,2000); *\/ */
/*   /\* h_dPhi_PhoMET_Met250GeV = new TH1F("h_dPhi_PhoMET_Met250GeV","dPhi (Best Phot & MET)",200,0,5); *\/ */
/*   /\* h_Mt_PhoMET_Met250GeV = new TH1F("h_Mt_PhoMET_Met250GeV","Mt (Photon & MET)",500,0,2500); *\/ */

/*   /\* h_MeT_Met600GeV=new TH1F ("h_MeT_Met600GeV","MET >100",50,500,1500); *\/ */
/*   /\* h_NJets_Met600GeV=new TH1D("h_NJets_Met600GeV","N hadronic jets (>_Met600GeV=2)",20,0,20); *\/ */
/*   /\* h_NbJets_Met600GeV=new TH1D("h_NbJets_Met600GeV","B-tagged jets",15,0,15); *\/ */
/*   /\* h_HT_Met600GeV= new TH1F("h_HT_Met600GeV","Sum of pt for all hadronic jets",100,0,10000); *\/ */
/*   /\* h_check_PhoPt_Met600GeV= new TH1F("h_check_PhoPt_Met600GeV","check Pt distribution",100,0,2000); *\/ */
/*   /\* h_dPhi_PhoMET_Met600GeV = new TH1F("h_dPhi_PhoMET_Met600GeV","dPhi (Best Phot & MET)",200,0,5); *\/ */
/*   /\* h_Mt_PhoMET_Met600GeV = new TH1F("h_Mt_PhoMET_Met600GeV","Mt (Photon & MET)",500,0,2500); *\/ */



/*   /\* //  cout<<h_PhoPt->GetNbinsX()<<"\t"<<endl; *\/ */
 
/*   /\* h_SBins_v7_CD = new TH1D("AllSBins_v7_CD","search bins v7:[0b,1b] x [(NJ=2to4),(NJ:5or6),(NJ>=7)]_CD",31,0.5,31.5); *\/ */

  
/*   /\* h_events = new TH1F("h_events","binwise filling of events",10,0,10); *\/ */
  
/*   /\* const char *ee[10] = {"h-h","e-h","t-h","m-h","e-e","t-t","m-m","e-m","e-t","t-m"}; *\/ */
/*   /\* for(Int_t j =1; j<11;j++) *\/ */
/*   /\*   {h_events->GetXaxis()->SetBinLabel(j,ee[j-1]); *\/ */
/*   /\*   } *\/ */
/*   /\* h_isotrack = new TH1F("h_isotrack","binwise filling of events",10,0,10); *\/ */

/*   /\* //  const char *ee[10] = {"h-h","e-h","t-h","m-h","e-e","t-t","m-m","e-m","e-t","t-m"}; *\/ */
/*   /\* for(Int_t j =1; j<11;j++) *\/ */
/*   /\*   {h_isotrack->GetXaxis()->SetBinLabel(j,ee[j-1]); *\/ */
/*   /\*   } *\/ */
/*   /\* h_zerolepton = new TH1F("h_zerolepton","binwise filling of events",10,0,10); *\/ */

/*   /\* //  const char *ee[10] = {"h-h","e-h","t-h","m-h","e-e","t-t","m-m","e-m","e-t","t-m"}; *\/ */
/*   /\* for(Int_t j =1; j<11;j++) *\/ */
/*   /\*   {h_zerolepton->GetXaxis()->SetBinLabel(j,ee[j-1]); *\/ */
/*   /\*   } *\/ */

}


AnalyzeLightBSM::AnalyzeLightBSM(const TString &inputFileList, const char *outFileName, const char* dataset, const char* N2_mass, const char* LostlepFlag, const char* phoID) {
  string nameData=dataset;//vvv
  //TDirectory * dir = new TDirectory("TreeMaker2");
    TChain *tree = new TChain("TreeMaker2/PreSelection");
    //  TChain *tree = new TChain("PreSelection");
  if( ! FillChain(tree, inputFileList) ) {
    std::cerr << "Cannot get the tree " << std::endl;
  } else {
    std::cout << "Initiating analysis of dataset " << dataset << std::endl;
  }

  if(nameData!="signalH") nameData="BG";
  if(nameData=="signalH") nameData="signal";
  cout<<"Treating the input files as "<<nameData<<" for setting tree branches"<<endl;
  NtupleVariables::Init(tree,nameData);
  
  BookHistogram(outFileName, N2_mass);
  CrossSection_Map_Init();

  //Jets = 0;
}
void AnalyzeLightBSM::CrossSection_Map_Init()
{
  char *f_name_EH = new char[2000];
  sprintf(f_name_EH,"./map_crosssection_SMprocess_v1.txt");//,chi2_method);
  std::ifstream in_EH(f_name_EH);
  if(!in_EH) {
    cout<<"ERROR => "<<f_name_EH<<" Not found"<<endl;
    //return;                                                                                                                                
    exit(0);
  }
  string process_name;
  float value, entries;
  cout<<"File name = "<<f_name_EH<<endl;
  while(in_EH>>process_name>>value>>entries){
    std::pair<std::string, float> temp_pair;
    /* std::vector<float> temp_vector; */
    /* temp_vector.push_back(w1); */
    /* temp_vector.push_back(w2); */
    /* temp_vector.push_back(w3); */
    float weight =value/entries;

    temp_pair = std::make_pair(process_name,weight);
    cross_sectionValues.insert(temp_pair);
  }
}
Bool_t AnalyzeLightBSM::FillChain(TChain *chain, const TString &inputFileList) {

  ifstream infile(inputFileList, ifstream::in);
  std::string buffer;

  if(!infile.is_open()) {
    std::cerr << "** ERROR: Can't open '" << inputFileList << "' for input" << std::endl;
    return kFALSE;
  }

  std::cout << "TreeUtilities : FillChain " << std::endl;
  while(1) {
    infile >> buffer;
    if(!infile.good()) break;
    //std::cout << "Adding tree from " << buffer.c_str() << std::endl;                                                              
    chain->Add(buffer.c_str());
  }
  std::cout << "No. of Entries in this tree : " << chain->GetEntries() << std::endl;
  return kTRUE;
}

Long64_t AnalyzeLightBSM::LoadTree(Long64_t entry) {
  // Set the environment to read one entry                                                                                          
  if (!fChain) return -5;
  Long64_t centry = fChain->LoadTree(entry);
  if (centry < 0) return centry;
  if (!fChain->InheritsFrom(TChain::Class()))  return centry;
  TChain *chain = (TChain*)fChain;
  if (chain->GetTreeNumber() != fCurrent) {
    fCurrent = chain->GetTreeNumber();
    //    Notify();
  }
  return centry;
}

AnalyzeLightBSM::~AnalyzeLightBSM() { 

  if (!fChain) return;
  delete fChain->GetCurrentFile();
  oFile->cd();
  oFile->Write();
  oFile->Close();

}

#endif

