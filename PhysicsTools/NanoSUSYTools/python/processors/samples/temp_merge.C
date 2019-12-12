void temp_merge(){
  TChain *mychain = new TChain("Events");
  mychain->Add("/eos/uscms/store/user/ddash/nanoAOD/ana_samples/qcd_smear_2016_tree.root");
  mychain->Add("/eos/uscms/store/user/ddash/nanoAOD/ana_samples/qcd_orig_2016_tree.root");
  mychain->Merge("/eos/uscms/store/user/ddash/nanoAOD/ana_samples/qcd_total_2016_tree.root");

}
