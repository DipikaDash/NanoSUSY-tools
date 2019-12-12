void std_pred_trad()
{
//=========Macro generated from canvas: c0/std_pred_trad
//=========  (Thu Nov 21 07:35:03 2019) by ROOT version6.10/09
   TCanvas *c0 = new TCanvas("c0", "std_pred_trad",0,0,600,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c0->Range(0,0,1,1);
   c0->SetFillColor(0);
   c0->SetBorderMode(0);
   c0->SetBorderSize(10);
   c0->SetTickx(1);
   c0->SetTicky(1);
   c0->SetLeftMargin(0.18);
   c0->SetRightMargin(0.05);
   c0->SetTopMargin(0.08);
   c0->SetBottomMargin(0.15);
   c0->SetFrameFillStyle(0);
   c0->SetFrameLineStyle(0);
   c0->SetFrameLineWidth(3);
   c0->SetFrameBorderMode(0);
   c0->SetFrameBorderSize(10);
  
// ------------>Primitives in pad: p1
   TPad *p1 = new TPad("p1", "p1",0,0.3,1,1);
   p1->Draw();
   p1->cd();
   p1->Range(-3.8,-2.458027,19.95,12.80955);
   p1->SetFillColor(0);
   p1->SetBorderMode(0);
   p1->SetBorderSize(2);
   p1->SetLogy();
   p1->SetTickx(1);
   p1->SetTicky(1);
   p1->SetLeftMargin(0.16);
   p1->SetRightMargin(0.04);
   p1->SetBottomMargin(0.03);
   p1->SetFrameFillStyle(0);
   p1->SetFrameBorderMode(0);
   p1->SetFrameFillStyle(0);
   p1->SetFrameBorderMode(0);
   
   TH1D *hbkgtotal__1 = new TH1D("hbkgtotal__1","",19,0,19);
   hbkgtotal__1->SetBinContent(1,982.0441);
   hbkgtotal__1->SetBinContent(2,45.2831);
   hbkgtotal__1->SetBinContent(3,21.41648);
   hbkgtotal__1->SetBinContent(4,4.612384);
   hbkgtotal__1->SetBinContent(5,120.3651);
   hbkgtotal__1->SetBinContent(6,53.05484);
   hbkgtotal__1->SetBinContent(7,16.91034);
   hbkgtotal__1->SetBinContent(8,32.14677);
   hbkgtotal__1->SetBinContent(9,3.805265);
   hbkgtotal__1->SetBinContent(10,1150643);
   hbkgtotal__1->SetBinContent(11,4.099838);
   hbkgtotal__1->SetBinContent(13,0.8013129);
   hbkgtotal__1->SetBinContent(14,0.1433269);
   hbkgtotal__1->SetBinContent(15,0.3781092);
   hbkgtotal__1->SetBinContent(16,35.25654);
   hbkgtotal__1->SetBinContent(17,1.857342);
   hbkgtotal__1->SetBinContent(18,0.5250649);
   hbkgtotal__1->SetBinError(1,17.69049);
   hbkgtotal__1->SetBinError(2,4.765987);
   hbkgtotal__1->SetBinError(3,2.167428);
   hbkgtotal__1->SetBinError(4,2.178404);
   hbkgtotal__1->SetBinError(5,10.43359);
   hbkgtotal__1->SetBinError(6,5.824908);
   hbkgtotal__1->SetBinError(7,2.243902);
   hbkgtotal__1->SetBinError(8,5.108575);
   hbkgtotal__1->SetBinError(9,1.05488);
   hbkgtotal__1->SetBinError(10,1202963);
   hbkgtotal__1->SetBinError(11,0.9536259);
   hbkgtotal__1->SetBinError(13,0.5007704);
   hbkgtotal__1->SetBinError(14,0.05018842);
   hbkgtotal__1->SetBinError(15,0.308187);
   hbkgtotal__1->SetBinError(16,1.371073);
   hbkgtotal__1->SetBinError(17,0.5792058);
   hbkgtotal__1->SetBinError(18,0.0744087);
   hbkgtotal__1->SetMinimum(0.01);
   hbkgtotal__1->SetMaximum(1.917738e+11);
   hbkgtotal__1->SetEntries(19);
   hbkgtotal__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#99ff33");
   hbkgtotal__1->SetFillColor(ci);
   hbkgtotal__1->SetLineStyle(0);

   ci = TColor::GetColor("#99ff33");
   hbkgtotal__1->SetMarkerColor(ci);
   hbkgtotal__1->SetMarkerStyle(20);
   hbkgtotal__1->GetXaxis()->SetTitle("Search Region");
   hbkgtotal__1->GetXaxis()->SetLabelFont(42);
   hbkgtotal__1->GetXaxis()->SetLabelOffset(0.2);
   hbkgtotal__1->GetXaxis()->SetLabelSize(0.05);
   hbkgtotal__1->GetXaxis()->SetTitleSize(0.06);
   hbkgtotal__1->GetXaxis()->SetTitleOffset(0.9);
   hbkgtotal__1->GetXaxis()->SetTitleFont(42);
   hbkgtotal__1->GetYaxis()->SetTitle("Events");
   hbkgtotal__1->GetYaxis()->SetLabelFont(42);
   hbkgtotal__1->GetYaxis()->SetLabelOffset(0.007);
   hbkgtotal__1->GetYaxis()->SetLabelSize(0.05);
   hbkgtotal__1->GetYaxis()->SetTitleSize(0.06);
   hbkgtotal__1->GetYaxis()->SetTitleOffset(1.25);
   hbkgtotal__1->GetYaxis()->SetTitleFont(42);
   hbkgtotal__1->GetZaxis()->SetLabelFont(42);
   hbkgtotal__1->GetZaxis()->SetLabelOffset(0.007);
   hbkgtotal__1->GetZaxis()->SetLabelSize(0.05);
   hbkgtotal__1->GetZaxis()->SetTitleSize(0.06);
   hbkgtotal__1->GetZaxis()->SetTitleFont(42);
   hbkgtotal__1->Draw("hist");
   
   THStack *qcd_pred_stack = new THStack();
   qcd_pred_stack->SetName("qcd_pred_stack");
   qcd_pred_stack->SetTitle("");
   
   TH1F *qcd_pred_stack_stack_1 = new TH1F("qcd_pred_stack_stack_1","",19,0,19);
   qcd_pred_stack_stack_1->SetMinimum(941.4424);
   qcd_pred_stack_stack_1->SetMaximum(3765770);
   qcd_pred_stack_stack_1->SetDirectory(0);
   qcd_pred_stack_stack_1->SetStats(0);
   qcd_pred_stack_stack_1->SetLineStyle(0);
   qcd_pred_stack_stack_1->SetMarkerStyle(20);
   qcd_pred_stack_stack_1->GetXaxis()->SetLabelFont(42);
   qcd_pred_stack_stack_1->GetXaxis()->SetLabelOffset(0.007);
   qcd_pred_stack_stack_1->GetXaxis()->SetLabelSize(0.05);
   qcd_pred_stack_stack_1->GetXaxis()->SetTitleSize(0.06);
   qcd_pred_stack_stack_1->GetXaxis()->SetTitleOffset(0.9);
   qcd_pred_stack_stack_1->GetXaxis()->SetTitleFont(42);
   qcd_pred_stack_stack_1->GetYaxis()->SetLabelFont(42);
   qcd_pred_stack_stack_1->GetYaxis()->SetLabelOffset(0.007);
   qcd_pred_stack_stack_1->GetYaxis()->SetLabelSize(0.05);
   qcd_pred_stack_stack_1->GetYaxis()->SetTitleSize(0.06);
   qcd_pred_stack_stack_1->GetYaxis()->SetTitleOffset(1.25);
   qcd_pred_stack_stack_1->GetYaxis()->SetTitleFont(42);
   qcd_pred_stack_stack_1->GetZaxis()->SetLabelFont(42);
   qcd_pred_stack_stack_1->GetZaxis()->SetLabelOffset(0.007);
   qcd_pred_stack_stack_1->GetZaxis()->SetLabelSize(0.05);
   qcd_pred_stack_stack_1->GetZaxis()->SetTitleSize(0.06);
   qcd_pred_stack_stack_1->GetZaxis()->SetTitleFont(42);
   qcd_pred_stack->SetHistogram(qcd_pred_stack_stack_1);
   
   
   TH1D *qcd_pred_stack_1 = new TH1D("qcd_pred_stack_1","",19,0,19);
   qcd_pred_stack_1->SetBinContent(1,982.0441);
   qcd_pred_stack_1->SetBinContent(2,45.2831);
   qcd_pred_stack_1->SetBinContent(3,21.41648);
   qcd_pred_stack_1->SetBinContent(4,4.612384);
   qcd_pred_stack_1->SetBinContent(5,120.3651);
   qcd_pred_stack_1->SetBinContent(6,53.05484);
   qcd_pred_stack_1->SetBinContent(7,16.91034);
   qcd_pred_stack_1->SetBinContent(8,32.14677);
   qcd_pred_stack_1->SetBinContent(9,3.805265);
   qcd_pred_stack_1->SetBinContent(10,1150643);
   qcd_pred_stack_1->SetBinContent(11,4.099838);
   qcd_pred_stack_1->SetBinContent(13,0.8013129);
   qcd_pred_stack_1->SetBinContent(14,0.1433269);
   qcd_pred_stack_1->SetBinContent(15,0.3781092);
   qcd_pred_stack_1->SetBinContent(16,35.25654);
   qcd_pred_stack_1->SetBinContent(17,1.857342);
   qcd_pred_stack_1->SetBinContent(18,0.5250649);
   qcd_pred_stack_1->SetBinError(1,17.69049);
   qcd_pred_stack_1->SetBinError(2,4.765987);
   qcd_pred_stack_1->SetBinError(3,2.167428);
   qcd_pred_stack_1->SetBinError(4,2.178404);
   qcd_pred_stack_1->SetBinError(5,10.43359);
   qcd_pred_stack_1->SetBinError(6,5.824908);
   qcd_pred_stack_1->SetBinError(7,2.243902);
   qcd_pred_stack_1->SetBinError(8,5.108575);
   qcd_pred_stack_1->SetBinError(9,1.05488);
   qcd_pred_stack_1->SetBinError(10,1202963);
   qcd_pred_stack_1->SetBinError(11,0.9536259);
   qcd_pred_stack_1->SetBinError(13,0.5007704);
   qcd_pred_stack_1->SetBinError(14,0.05018842);
   qcd_pred_stack_1->SetBinError(15,0.308187);
   qcd_pred_stack_1->SetBinError(16,1.371073);
   qcd_pred_stack_1->SetBinError(17,0.5792058);
   qcd_pred_stack_1->SetBinError(18,0.0744087);
   qcd_pred_stack_1->SetEntries(19);
   qcd_pred_stack_1->SetStats(0);

   ci = TColor::GetColor("#99ff33");
   qcd_pred_stack_1->SetFillColor(ci);
   qcd_pred_stack_1->SetLineStyle(0);

   ci = TColor::GetColor("#99ff33");
   qcd_pred_stack_1->SetMarkerColor(ci);
   qcd_pred_stack_1->SetMarkerStyle(20);
   qcd_pred_stack_1->GetXaxis()->SetTitle("Search Region");
   qcd_pred_stack_1->GetXaxis()->SetLabelFont(42);
   qcd_pred_stack_1->GetXaxis()->SetLabelOffset(0.007);
   qcd_pred_stack_1->GetXaxis()->SetLabelSize(0.05);
   qcd_pred_stack_1->GetXaxis()->SetTitleSize(0.06);
   qcd_pred_stack_1->GetXaxis()->SetTitleOffset(0.9);
   qcd_pred_stack_1->GetXaxis()->SetTitleFont(42);
   qcd_pred_stack_1->GetYaxis()->SetTitle("Events");
   qcd_pred_stack_1->GetYaxis()->SetLabelFont(42);
   qcd_pred_stack_1->GetYaxis()->SetLabelOffset(0.007);
   qcd_pred_stack_1->GetYaxis()->SetLabelSize(0.05);
   qcd_pred_stack_1->GetYaxis()->SetTitleSize(0.06);
   qcd_pred_stack_1->GetYaxis()->SetTitleOffset(1.25);
   qcd_pred_stack_1->GetYaxis()->SetTitleFont(42);
   qcd_pred_stack_1->GetZaxis()->SetLabelFont(42);
   qcd_pred_stack_1->GetZaxis()->SetLabelOffset(0.007);
   qcd_pred_stack_1->GetZaxis()->SetLabelSize(0.05);
   qcd_pred_stack_1->GetZaxis()->SetTitleSize(0.06);
   qcd_pred_stack_1->GetZaxis()->SetTitleFont(42);
   qcd_pred_stack->Add(qcd_pred_stack_1,"");
   qcd_pred_stack->Draw("histsame");
   
   Double_t Graph_from_hbkgtotal_fx3001[19] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   14.5,
   15.5,
   16.5,
   17.5,
   18.5};
   Double_t Graph_from_hbkgtotal_fy3001[19] = {
   982.0441,
   45.2831,
   21.41648,
   4.612384,
   120.3651,
   53.05484,
   16.91034,
   32.14677,
   3.805265,
   1150643,
   4.099838,
   0,
   0.8013129,
   0.1433269,
   0.3781092,
   35.25654,
   1.857342,
   0.5250649,
   0};
   Double_t Graph_from_hbkgtotal_felx3001[19] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_hbkgtotal_fely3001[19] = {
   17.69049,
   4.765987,
   2.167428,
   2.178404,
   10.43359,
   5.824908,
   2.243902,
   5.108575,
   1.05488,
   1202963,
   0.9536259,
   0,
   0.5007704,
   0.05018842,
   0.308187,
   1.371073,
   0.5792058,
   0.0744087,
   0};
   Double_t Graph_from_hbkgtotal_fehx3001[19] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_hbkgtotal_fehy3001[19] = {
   17.69049,
   4.765987,
   2.167428,
   2.178404,
   10.43359,
   5.824908,
   2.243902,
   5.108575,
   1.05488,
   1202963,
   0.9536259,
   0,
   0.5007704,
   0.05018842,
   0.308187,
   1.371073,
   0.5792058,
   0.0744087,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(19,Graph_from_hbkgtotal_fx3001,Graph_from_hbkgtotal_fy3001,Graph_from_hbkgtotal_felx3001,Graph_from_hbkgtotal_fehx3001,Graph_from_hbkgtotal_fely3001,Graph_from_hbkgtotal_fehy3001);
   grae->SetName("Graph_from_hbkgtotal");
   grae->SetTitle("");

   ci = TColor::GetColor("#0000ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3013);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);

   ci = TColor::GetColor("#99ff33");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_Graph_from_hbkgtotal3001 = new TH1F("Graph_Graph_from_hbkgtotal3001","",100,0,20.9);
   Graph_Graph_from_hbkgtotal3001->SetMinimum(2588.967);
   Graph_Graph_from_hbkgtotal3001->SetMaximum(2588967);
   Graph_Graph_from_hbkgtotal3001->SetDirectory(0);
   Graph_Graph_from_hbkgtotal3001->SetStats(0);
   Graph_Graph_from_hbkgtotal3001->SetLineStyle(0);
   Graph_Graph_from_hbkgtotal3001->SetMarkerStyle(20);
   Graph_Graph_from_hbkgtotal3001->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_hbkgtotal3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_hbkgtotal3001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_hbkgtotal3001->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_hbkgtotal3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_hbkgtotal3001->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_hbkgtotal3001->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_hbkgtotal3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_hbkgtotal3001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_hbkgtotal3001->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_hbkgtotal3001->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_hbkgtotal3001->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_hbkgtotal3001->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_hbkgtotal3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_hbkgtotal3001->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_hbkgtotal3001->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_hbkgtotal3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_hbkgtotal3001);
   
   grae->Draw("e2");
   
   Double_t Graph_from_data0_fx3002[19] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   14.5,
   15.5,
   16.5,
   17.5,
   18.5};
   Double_t Graph_from_data0_fy3002[19] = {
   2238,
   104,
   80,
   3,
   449,
   307,
   62,
   33,
   31,
   45,
   96,
   3,
   6,
   6,
   3,
   22,
   0,
   6,
   1};
   Double_t Graph_from_data0_felx3002[19] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0,
   0.5,
   0.5};
   Double_t Graph_from_data0_fely3002[19] = {
   47.30499,
   10.18183,
   8.925719,
   1.632727,
   21.18218,
   17.51224,
   7.852869,
   5.715412,
   5.537671,
   6.68331,
   9.781065,
   1.632727,
   2.379969,
   2.379969,
   1.632727,
   4.654589,
   0,
   2.379969,
   0.8272525};
   Double_t Graph_from_data0_fehx3002[19] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0,
   0.5,
   0.5};
   Double_t Graph_from_data0_fehy3002[19] = {
   48.3156,
   11.23099,
   9.981777,
   2.918242,
   22.20584,
   18.54085,
   8.916552,
   6.802707,
   6.627738,
   7.758066,
   10.83224,
   2.918242,
   3.583712,
   3.583712,
   2.918242,
   5.761484,
   1.841055,
   3.583712,
   2.29957};
   grae = new TGraphAsymmErrors(19,Graph_from_data0_fx3002,Graph_from_data0_fy3002,Graph_from_data0_felx3002,Graph_from_data0_fehx3002,Graph_from_data0_fely3002,Graph_from_data0_fehy3002);
   grae->SetName("Graph_from_data0");
   grae->SetTitle("");
   grae->SetFillStyle(0);
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_data03002 = new TH1F("Graph_Graph_from_data03002","",100,0,20.9);
   Graph_Graph_from_data03002->SetMinimum(2.514947);
   Graph_Graph_from_data03002->SetMaximum(2514.947);
   Graph_Graph_from_data03002->SetDirectory(0);
   Graph_Graph_from_data03002->SetStats(0);
   Graph_Graph_from_data03002->SetLineStyle(0);
   Graph_Graph_from_data03002->SetMarkerStyle(20);
   Graph_Graph_from_data03002->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_data03002->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_data03002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_data03002->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_data03002->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_data03002->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_data03002->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_data03002->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_data03002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_data03002->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_data03002->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_data03002->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_data03002->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_data03002->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_data03002->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_data03002->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_data03002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_data03002);
   
   grae->Draw("pz0");
   TLatex *   tex = new TLatex(0.96,0.92,"27987.8 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.196,0.86955,"CMS");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextSize(0.075);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.196,0.77955,"Preliminary");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.057);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.58,0.69,0.92,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.03);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("qcd_pred","QCD","F");

   ci = TColor::GetColor("#99ff33");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("data","Data","LP");
   entry->SetLineColor(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph_from_hbkgtotal","Bkg. Uncertainty","F");

   ci = TColor::GetColor("#0000ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3013);
   entry->SetLineColor(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   TH1D *hbkgtotal_copy__2 = new TH1D("hbkgtotal_copy__2","",19,0,19);
   hbkgtotal_copy__2->SetBinContent(1,982.0441);
   hbkgtotal_copy__2->SetBinContent(2,45.2831);
   hbkgtotal_copy__2->SetBinContent(3,21.41648);
   hbkgtotal_copy__2->SetBinContent(4,4.612384);
   hbkgtotal_copy__2->SetBinContent(5,120.3651);
   hbkgtotal_copy__2->SetBinContent(6,53.05484);
   hbkgtotal_copy__2->SetBinContent(7,16.91034);
   hbkgtotal_copy__2->SetBinContent(8,32.14677);
   hbkgtotal_copy__2->SetBinContent(9,3.805265);
   hbkgtotal_copy__2->SetBinContent(10,1150643);
   hbkgtotal_copy__2->SetBinContent(11,4.099838);
   hbkgtotal_copy__2->SetBinContent(13,0.8013129);
   hbkgtotal_copy__2->SetBinContent(14,0.1433269);
   hbkgtotal_copy__2->SetBinContent(15,0.3781092);
   hbkgtotal_copy__2->SetBinContent(16,35.25654);
   hbkgtotal_copy__2->SetBinContent(17,1.857342);
   hbkgtotal_copy__2->SetBinContent(18,0.5250649);
   hbkgtotal_copy__2->SetBinError(1,17.69049);
   hbkgtotal_copy__2->SetBinError(2,4.765987);
   hbkgtotal_copy__2->SetBinError(3,2.167428);
   hbkgtotal_copy__2->SetBinError(4,2.178404);
   hbkgtotal_copy__2->SetBinError(5,10.43359);
   hbkgtotal_copy__2->SetBinError(6,5.824908);
   hbkgtotal_copy__2->SetBinError(7,2.243902);
   hbkgtotal_copy__2->SetBinError(8,5.108575);
   hbkgtotal_copy__2->SetBinError(9,1.05488);
   hbkgtotal_copy__2->SetBinError(10,1202963);
   hbkgtotal_copy__2->SetBinError(11,0.9536259);
   hbkgtotal_copy__2->SetBinError(13,0.5007704);
   hbkgtotal_copy__2->SetBinError(14,0.05018842);
   hbkgtotal_copy__2->SetBinError(15,0.308187);
   hbkgtotal_copy__2->SetBinError(16,1.371073);
   hbkgtotal_copy__2->SetBinError(17,0.5792058);
   hbkgtotal_copy__2->SetBinError(18,0.0744087);
   hbkgtotal_copy__2->SetMinimum(0.01);
   hbkgtotal_copy__2->SetMaximum(1.917738e+11);
   hbkgtotal_copy__2->SetEntries(19);
   hbkgtotal_copy__2->SetDirectory(0);
   hbkgtotal_copy__2->SetStats(0);

   ci = TColor::GetColor("#99ff33");
   hbkgtotal_copy__2->SetFillColor(ci);
   hbkgtotal_copy__2->SetLineStyle(0);

   ci = TColor::GetColor("#99ff33");
   hbkgtotal_copy__2->SetMarkerColor(ci);
   hbkgtotal_copy__2->SetMarkerStyle(20);
   hbkgtotal_copy__2->GetXaxis()->SetTitle("Search Region");
   hbkgtotal_copy__2->GetXaxis()->SetLabelFont(42);
   hbkgtotal_copy__2->GetXaxis()->SetLabelOffset(0.2);
   hbkgtotal_copy__2->GetXaxis()->SetLabelSize(0.05);
   hbkgtotal_copy__2->GetXaxis()->SetTitleSize(0.06);
   hbkgtotal_copy__2->GetXaxis()->SetTitleOffset(0.9);
   hbkgtotal_copy__2->GetXaxis()->SetTitleFont(42);
   hbkgtotal_copy__2->GetYaxis()->SetTitle("Events");
   hbkgtotal_copy__2->GetYaxis()->SetLabelFont(42);
   hbkgtotal_copy__2->GetYaxis()->SetLabelOffset(0.007);
   hbkgtotal_copy__2->GetYaxis()->SetLabelSize(0.05);
   hbkgtotal_copy__2->GetYaxis()->SetTitleSize(0.06);
   hbkgtotal_copy__2->GetYaxis()->SetTitleOffset(1.25);
   hbkgtotal_copy__2->GetYaxis()->SetTitleFont(42);
   hbkgtotal_copy__2->GetZaxis()->SetLabelFont(42);
   hbkgtotal_copy__2->GetZaxis()->SetLabelOffset(0.007);
   hbkgtotal_copy__2->GetZaxis()->SetLabelSize(0.05);
   hbkgtotal_copy__2->GetZaxis()->SetTitleSize(0.06);
   hbkgtotal_copy__2->GetZaxis()->SetTitleFont(42);
   hbkgtotal_copy__2->Draw("sameaxis");
   p1->Modified();
   c0->cd();
  
// ------------>Primitives in pad: p2
   TPad *p2 = new TPad("p2", "p2",0,0,1,0.3);
   p2->Draw();
   p2->cd();
   p2->Range(-3.8,-1.283857,19.95,2.999);
   p2->SetFillColor(0);
   p2->SetBorderMode(0);
   p2->SetBorderSize(2);
   p2->SetGridy();
   p2->SetTickx(1);
   p2->SetTicky(1);
   p2->SetLeftMargin(0.16);
   p2->SetRightMargin(0.04);
   p2->SetTopMargin(0);
   p2->SetBottomMargin(0.3);
   p2->SetFrameFillStyle(0);
   p2->SetFrameBorderMode(0);
   p2->SetFrameFillStyle(0);
   p2->SetFrameBorderMode(0);
   
   TH1D *htmpaxis__3 = new TH1D("htmpaxis__3","",19,0,19);
   htmpaxis__3->SetBinContent(1,982.0441);
   htmpaxis__3->SetBinContent(2,45.2831);
   htmpaxis__3->SetBinContent(3,21.41648);
   htmpaxis__3->SetBinContent(4,4.612384);
   htmpaxis__3->SetBinContent(5,120.3651);
   htmpaxis__3->SetBinContent(6,53.05484);
   htmpaxis__3->SetBinContent(7,16.91034);
   htmpaxis__3->SetBinContent(8,32.14677);
   htmpaxis__3->SetBinContent(9,3.805265);
   htmpaxis__3->SetBinContent(10,1150643);
   htmpaxis__3->SetBinContent(11,4.099838);
   htmpaxis__3->SetBinContent(13,0.8013129);
   htmpaxis__3->SetBinContent(14,0.1433269);
   htmpaxis__3->SetBinContent(15,0.3781092);
   htmpaxis__3->SetBinContent(16,35.25654);
   htmpaxis__3->SetBinContent(17,1.857342);
   htmpaxis__3->SetBinContent(18,0.5250649);
   htmpaxis__3->SetBinError(1,17.69049);
   htmpaxis__3->SetBinError(2,4.765987);
   htmpaxis__3->SetBinError(3,2.167428);
   htmpaxis__3->SetBinError(4,2.178404);
   htmpaxis__3->SetBinError(5,10.43359);
   htmpaxis__3->SetBinError(6,5.824908);
   htmpaxis__3->SetBinError(7,2.243902);
   htmpaxis__3->SetBinError(8,5.108575);
   htmpaxis__3->SetBinError(9,1.05488);
   htmpaxis__3->SetBinError(10,1202963);
   htmpaxis__3->SetBinError(11,0.9536259);
   htmpaxis__3->SetBinError(13,0.5007704);
   htmpaxis__3->SetBinError(14,0.05018842);
   htmpaxis__3->SetBinError(15,0.308187);
   htmpaxis__3->SetBinError(16,1.371073);
   htmpaxis__3->SetBinError(17,0.5792058);
   htmpaxis__3->SetBinError(18,0.0744087);
   htmpaxis__3->SetMinimum(0.001);
   htmpaxis__3->SetMaximum(2.999);
   htmpaxis__3->SetEntries(19);
   htmpaxis__3->SetStats(0);

   ci = TColor::GetColor("#99ff33");
   htmpaxis__3->SetFillColor(ci);
   htmpaxis__3->SetLineStyle(0);

   ci = TColor::GetColor("#99ff33");
   htmpaxis__3->SetMarkerColor(ci);
   htmpaxis__3->SetMarkerStyle(20);
   htmpaxis__3->GetXaxis()->SetTitle("Search Region");
   htmpaxis__3->GetXaxis()->SetLabelFont(42);
   htmpaxis__3->GetXaxis()->SetLabelOffset(0.01);
   htmpaxis__3->GetXaxis()->SetLabelSize(0.1);
   htmpaxis__3->GetXaxis()->SetTitleSize(0.14);
   htmpaxis__3->GetXaxis()->SetTitleOffset(0.85);
   htmpaxis__3->GetXaxis()->SetTitleFont(42);
   htmpaxis__3->GetYaxis()->SetTitle("N_{obs}/N_{exp}");
   htmpaxis__3->GetYaxis()->CenterTitle(true);
   htmpaxis__3->GetYaxis()->SetNdivisions(305);
   htmpaxis__3->GetYaxis()->SetLabelFont(42);
   htmpaxis__3->GetYaxis()->SetLabelOffset(0.007);
   htmpaxis__3->GetYaxis()->SetLabelSize(0.12);
   htmpaxis__3->GetYaxis()->SetTitleSize(0.14);
   htmpaxis__3->GetYaxis()->SetTitleOffset(0.41);
   htmpaxis__3->GetYaxis()->SetTitleFont(42);
   htmpaxis__3->GetZaxis()->SetLabelFont(42);
   htmpaxis__3->GetZaxis()->SetLabelOffset(0.007);
   htmpaxis__3->GetZaxis()->SetLabelSize(0.05);
   htmpaxis__3->GetZaxis()->SetTitleSize(0.06);
   htmpaxis__3->GetZaxis()->SetTitleFont(42);
   htmpaxis__3->Draw("AXIS");
   
   Double_t Graph_from_data3_fx3003[19] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   14.5,
   15.5,
   16.5,
   17.5,
   18.5};
   Double_t Graph_from_data3_fy3003[19] = {
   2.27892,
   2.296662,
   3.735442,
   0.6504229,
   3.730318,
   5.786465,
   3.666396,
   1.026542,
   8.146608,
   3.910857e-05,
   23.41556,
   inf,
   7.487712,
   41.86236,
   7.934216,
   0.6239978,
   0,
   11.42716,
   inf};
   Double_t Graph_from_data3_felx3003[19] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_data3_fely3003[19] = {
   0.04817249,
   0.2252063,
   0.4176351,
   0.3580351,
   0.1760446,
   0.330251,
   0.4656328,
   0.1786979,
   1.463174,
   5.829961e-06,
   2.389841,
   0,
   2.971587,
   16.18823,
   4.202389,
   0.1330368,
   0,
   4.496563,
   0};
   Double_t Graph_from_data3_fehx3003[19] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_data3_fehy3003[19] = {
   0.04817249,
   0.2252063,
   0.4176351,
   0.6294792,
   0.1760446,
   0.330251,
   0.4656328,
   0.1786979,
   1.463174,
   5.829961e-06,
   2.389841,
   0,
   4.511602,
   25.3189,
   7.811274,
   0.1330368,
   0.9854084,
   6.910805,
   0};
   grae = new TGraphAsymmErrors(19,Graph_from_data3_fx3003,Graph_from_data3_fy3003,Graph_from_data3_felx3003,Graph_from_data3_fehx3003,Graph_from_data3_fely3003,Graph_from_data3_fehy3003);
   grae->SetName("Graph_from_data3");
   grae->SetTitle("");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_data33003 = new TH1F("Graph_Graph_from_data33003","",100,0,20.9);
   Graph_Graph_from_data33003->SetMinimum(0);
   Graph_Graph_from_data33003->SetMaximum(inf);
   Graph_Graph_from_data33003->SetDirectory(0);
   Graph_Graph_from_data33003->SetStats(0);
   Graph_Graph_from_data33003->SetLineStyle(0);
   Graph_Graph_from_data33003->SetMarkerStyle(20);
   Graph_Graph_from_data33003->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_data33003->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_data33003->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_data33003->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_data33003->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_data33003->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_data33003->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_data33003->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_data33003->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_data33003->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_data33003->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_data33003->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_data33003->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_data33003->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_data33003->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_data33003->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_data33003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_data33003);
   
   grae->Draw("pz0");
   
   Double_t Graph_from_hbkgtotal_fx3004[19] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   14.5,
   15.5,
   16.5,
   17.5,
   18.5};
   Double_t Graph_from_hbkgtotal_fy3004[19] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   0,
   1,
   1,
   1,
   1,
   1,
   1,
   0};
   Double_t Graph_from_hbkgtotal_felx3004[19] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_hbkgtotal_fely3004[19] = {
   0.01801394,
   0.1052487,
   0.1012038,
   0.4722947,
   0.08668285,
   0.1097903,
   0.1326941,
   0.1589141,
   0.277216,
   1.04547,
   0.2326009,
   0,
   0.6249374,
   0.3501676,
   0.815074,
   0.03888846,
   0.3118466,
   0.1417133,
   0};
   Double_t Graph_from_hbkgtotal_fehx3004[19] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_hbkgtotal_fehy3004[19] = {
   0.01801394,
   0.1052487,
   0.1012038,
   0.4722947,
   0.08668285,
   0.1097903,
   0.1326941,
   0.1589141,
   0.277216,
   1.04547,
   0.2326009,
   0,
   0.6249374,
   0.3501676,
   0.815074,
   0.03888846,
   0.3118466,
   0.1417133,
   0};
   grae = new TGraphAsymmErrors(19,Graph_from_hbkgtotal_fx3004,Graph_from_hbkgtotal_fy3004,Graph_from_hbkgtotal_felx3004,Graph_from_hbkgtotal_fehx3004,Graph_from_hbkgtotal_fely3004,Graph_from_hbkgtotal_fehy3004);
   grae->SetName("Graph_from_hbkgtotal");
   grae->SetTitle("");

   ci = TColor::GetColor("#0000ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3013);
   grae->SetLineStyle(0);
   grae->SetLineWidth(0);

   ci = TColor::GetColor("#99ff33");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_Graph_from_hbkgtotal3004 = new TH1F("Graph_Graph_from_hbkgtotal3004","",100,0,20.9);
   Graph_Graph_from_hbkgtotal3004->SetMinimum(-0.2545642);
   Graph_Graph_from_hbkgtotal3004->SetMaximum(2.254564);
   Graph_Graph_from_hbkgtotal3004->SetDirectory(0);
   Graph_Graph_from_hbkgtotal3004->SetStats(0);
   Graph_Graph_from_hbkgtotal3004->SetLineStyle(0);
   Graph_Graph_from_hbkgtotal3004->SetMarkerStyle(20);
   Graph_Graph_from_hbkgtotal3004->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_hbkgtotal3004->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_hbkgtotal3004->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_hbkgtotal3004->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_from_hbkgtotal3004->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_from_hbkgtotal3004->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_hbkgtotal3004->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_hbkgtotal3004->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_hbkgtotal3004->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_hbkgtotal3004->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_from_hbkgtotal3004->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_from_hbkgtotal3004->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_hbkgtotal3004->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_hbkgtotal3004->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_hbkgtotal3004->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_from_hbkgtotal3004->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_from_hbkgtotal3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_hbkgtotal3004);
   
   grae->Draw("e2");
   
   TH1D *htmpaxis_copy__4 = new TH1D("htmpaxis_copy__4","",19,0,19);
   htmpaxis_copy__4->SetBinContent(1,982.0441);
   htmpaxis_copy__4->SetBinContent(2,45.2831);
   htmpaxis_copy__4->SetBinContent(3,21.41648);
   htmpaxis_copy__4->SetBinContent(4,4.612384);
   htmpaxis_copy__4->SetBinContent(5,120.3651);
   htmpaxis_copy__4->SetBinContent(6,53.05484);
   htmpaxis_copy__4->SetBinContent(7,16.91034);
   htmpaxis_copy__4->SetBinContent(8,32.14677);
   htmpaxis_copy__4->SetBinContent(9,3.805265);
   htmpaxis_copy__4->SetBinContent(10,1150643);
   htmpaxis_copy__4->SetBinContent(11,4.099838);
   htmpaxis_copy__4->SetBinContent(13,0.8013129);
   htmpaxis_copy__4->SetBinContent(14,0.1433269);
   htmpaxis_copy__4->SetBinContent(15,0.3781092);
   htmpaxis_copy__4->SetBinContent(16,35.25654);
   htmpaxis_copy__4->SetBinContent(17,1.857342);
   htmpaxis_copy__4->SetBinContent(18,0.5250649);
   htmpaxis_copy__4->SetBinError(1,17.69049);
   htmpaxis_copy__4->SetBinError(2,4.765987);
   htmpaxis_copy__4->SetBinError(3,2.167428);
   htmpaxis_copy__4->SetBinError(4,2.178404);
   htmpaxis_copy__4->SetBinError(5,10.43359);
   htmpaxis_copy__4->SetBinError(6,5.824908);
   htmpaxis_copy__4->SetBinError(7,2.243902);
   htmpaxis_copy__4->SetBinError(8,5.108575);
   htmpaxis_copy__4->SetBinError(9,1.05488);
   htmpaxis_copy__4->SetBinError(10,1202963);
   htmpaxis_copy__4->SetBinError(11,0.9536259);
   htmpaxis_copy__4->SetBinError(13,0.5007704);
   htmpaxis_copy__4->SetBinError(14,0.05018842);
   htmpaxis_copy__4->SetBinError(15,0.308187);
   htmpaxis_copy__4->SetBinError(16,1.371073);
   htmpaxis_copy__4->SetBinError(17,0.5792058);
   htmpaxis_copy__4->SetBinError(18,0.0744087);
   htmpaxis_copy__4->SetMinimum(0.001);
   htmpaxis_copy__4->SetMaximum(2.999);
   htmpaxis_copy__4->SetEntries(19);
   htmpaxis_copy__4->SetDirectory(0);
   htmpaxis_copy__4->SetStats(0);

   ci = TColor::GetColor("#99ff33");
   htmpaxis_copy__4->SetFillColor(ci);
   htmpaxis_copy__4->SetLineStyle(0);

   ci = TColor::GetColor("#99ff33");
   htmpaxis_copy__4->SetMarkerColor(ci);
   htmpaxis_copy__4->SetMarkerStyle(20);
   htmpaxis_copy__4->GetXaxis()->SetTitle("Search Region");
   htmpaxis_copy__4->GetXaxis()->SetLabelFont(42);
   htmpaxis_copy__4->GetXaxis()->SetLabelOffset(0.01);
   htmpaxis_copy__4->GetXaxis()->SetLabelSize(0.1);
   htmpaxis_copy__4->GetXaxis()->SetTitleSize(0.14);
   htmpaxis_copy__4->GetXaxis()->SetTitleOffset(0.85);
   htmpaxis_copy__4->GetXaxis()->SetTitleFont(42);
   htmpaxis_copy__4->GetYaxis()->SetTitle("N_{obs}/N_{exp}");
   htmpaxis_copy__4->GetYaxis()->CenterTitle(true);
   htmpaxis_copy__4->GetYaxis()->SetNdivisions(305);
   htmpaxis_copy__4->GetYaxis()->SetLabelFont(42);
   htmpaxis_copy__4->GetYaxis()->SetLabelOffset(0.007);
   htmpaxis_copy__4->GetYaxis()->SetLabelSize(0.12);
   htmpaxis_copy__4->GetYaxis()->SetTitleSize(0.14);
   htmpaxis_copy__4->GetYaxis()->SetTitleOffset(0.41);
   htmpaxis_copy__4->GetYaxis()->SetTitleFont(42);
   htmpaxis_copy__4->GetZaxis()->SetLabelFont(42);
   htmpaxis_copy__4->GetZaxis()->SetLabelOffset(0.007);
   htmpaxis_copy__4->GetZaxis()->SetLabelSize(0.05);
   htmpaxis_copy__4->GetZaxis()->SetTitleSize(0.06);
   htmpaxis_copy__4->GetZaxis()->SetTitleFont(42);
   htmpaxis_copy__4->Draw("sameaxig");
   TLine *line = new TLine(0,1,19,1);
   line->SetLineWidth(2);
   line->Draw();
   p2->Modified();
   c0->cd();
   c0->Modified();
   c0->cd();
   c0->SetSelected(c0);
}
