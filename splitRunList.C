#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<iomanip>
#include<stdlib.h>

using namespace std;
void splitRunList(string infile,int nfPerJob, string datasetAna, string process, string LL, string phoID){
  //------------ needed for condor files --------------
  string exeCondor  = "worker2.sh";
  string exeAna     = "analyzeLightBSM";
  //  string datasetAna = "SR";
  string filesToTransfer = "map_crosssection_SMprocess_v1.txt ,TF_allin1_LLEstimation_binsV0_phoID_mva_wp90_08Aug23.root,TF_allin1_LLEstimation_binsV0_phoID_loose_08Aug23.root";//, TF_allin1_LLEstimation_electron_newTFbins.root, TF_allin1_LLEstimation_muon_newTFbins.root, TMVAClassification_BDT_100trees_2maxdepth.weights.xml";
  //---------------------------------------------------
  cout<<"executable at worker node : "<<exeCondor<<endl
      <<"Analysis executable : "<<exeAna<<endl
      <<"dataset name for analysis : "<<datasetAna<<endl;
  //----------------- split the input files into smaller ones ------------------
  ifstream file(infile);
  if(!file){cout<<"Couldn't Open File "<<infile<<endl;}
  string str,dataset=infile;
  dataset.pop_back();  dataset.pop_back();  dataset.pop_back();  dataset.pop_back();
  vector<string> fname;
  while (std::getline(file, str))
    {
      fname.push_back(str);
    }
  file.close();

  int jobid=0;
  char name[200];
  ofstream outf;
  for(int i=0,j=0;i<fname.size();){
    sprintf(name,"FileList_%s_job%i.txt",dataset.c_str(),jobid);
    outf.open(name);
    for(j=0;j<nfPerJob && i<fname.size();j++){
      outf<<fname[i]<<endl;
      i++;
    }
    jobid++;
    outf.close();
  }

  //--------------------- make files for codor ------------------------------------
  char fileListName[200],logFile[200];
  for(int i=0;i<jobid;i++){
    sprintf(name,"%s_job%i.jdl",dataset.c_str(),i);
    sprintf(fileListName,"FileList_%s_job%i.txt",dataset.c_str(),i);
    sprintf(logFile,"phoID_%s_%s_pt100_MET200_%s_job%i",phoID.c_str(),dataset.c_str(),LL.c_str(),i);
    outf.open(name);
    outf<<"universe = vanilla"<<endl
	<<"Executable = "<<exeCondor<<endl
	<<"request_disk = 1000000"<<endl
	<<"request_cpus = 1"<<endl
	<<"request_memory = 1.2GB"<<endl
	<<"Should_Transfer_Files = YES"<<endl
	<<"WhenToTransferOutput = ON_EXIT_OR_EVICT"<<endl
	<<"Transfer_Input_Files = "<<filesToTransfer<<","<<exeAna<<","<<fileListName<<","<<endl
      //	<<"PeriodicRemove = ( JobStatus == 2 ) && ( ( CurrentTime - EnteredCurrentStatus ) > 600 )"<<endl
	<<"Output = "<<logFile<<".stdout"<<endl
	<<"Error = "<<logFile<<".stderr"<<endl
	<<"Log = "<<logFile<<".condor"<<endl
	// <<"notification = Error"<<endl
	// <<"notify_user = vhegde@FNAL.GOV"<<endl        echo "x509userproxy = $X509_USER_PROXY">>$jdl_file
      //echo "use_x509userproxy = True">>$jdl_file
	<<"x509userproxy = $ENV(X509_USER_PROXY)"<<endl
	<<"use_x509userproxy = True"<<endl
	<<"Arguments = "<<exeAna<<" "<<fileListName<<" "<<logFile<<".root"<<" "<<datasetAna<<" "<<process<<" "<<LL<<" "<<phoID<<endl
	<<"+LENGTH=\"SHORT\""<<endl
	<<endl
	<<"Queue 1";
    outf.close();
  }
  //------------------------ submit to condor --------------------------------------
  int t1=100;
  cout<<"Do you want to submit "<<jobid<<" jobs? If yes enter 100"<<endl;
  //  cin>>t1;
  for(int i=0;i<jobid && t1==100;i++){
    sprintf(name,"condor_submit %s_job%i.jdl",dataset.c_str(),i);
    system(name); 
  }
  
}

void splitRunList(){
  cout<<"Please specify the input txt file to use and no. of files per job"<<endl;
  cout<<"splitRunList(string infile,int nfPerJob)"<<endl;
}
