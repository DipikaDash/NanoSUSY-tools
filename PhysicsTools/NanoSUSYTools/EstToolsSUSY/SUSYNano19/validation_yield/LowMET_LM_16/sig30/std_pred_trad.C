void std_pred_trad()
{
//=========Macro generated from canvas: c0/std_pred_trad
//=========  (Fri Nov 15 06:46:05 2019) by ROOT version6.10/09
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
   p1->Range(-3.8,-2.365903,19.95,9.830871);
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
   hbkgtotal__1->SetBinContent(1,592.5008);
   hbkgtotal__1->SetBinContent(2,30.18574);
   hbkgtotal__1->SetBinContent(3,9.046311);
   hbkgtotal__1->SetBinContent(4,0.1765789);
   hbkgtotal__1->SetBinContent(5,121.1229);
   hbkgtotal__1->SetBinContent(6,53.68193);
   hbkgtotal__1->SetBinContent(7,16.46925);
   hbkgtotal__1->SetBinContent(8,9.082916);
   hbkgtotal__1->SetBinContent(9,1.212014);
   hbkgtotal__1->SetBinContent(10,2.709379);
   hbkgtotal__1->SetBinContent(11,12.21479);
   hbkgtotal__1->SetBinContent(13,1.180709);
   hbkgtotal__1->SetBinContent(14,0.44055);
   hbkgtotal__1->SetBinContent(15,11.07236);
   hbkgtotal__1->SetBinContent(16,11.56442);
   hbkgtotal__1->SetBinContent(17,0.9556642);
   hbkgtotal__1->SetBinContent(18,11.04165);
   hbkgtotal__1->SetBinError(1,10.98216);
   hbkgtotal__1->SetBinError(2,3.200913);
   hbkgtotal__1->SetBinError(3,1.187478);
   hbkgtotal__1->SetBinError(4,0.2787605);
   hbkgtotal__1->SetBinError(5,8.594687);
   hbkgtotal__1->SetBinError(6,5.1447);
   hbkgtotal__1->SetBinError(7,1.704092);
   hbkgtotal__1->SetBinError(8,1.344709);
   hbkgtotal__1->SetBinError(9,0.6924119);
   hbkgtotal__1->SetBinError(10,0.8880127);
   hbkgtotal__1->SetBinError(11,2.17178);
   hbkgtotal__1->SetBinError(13,0.5777524);
   hbkgtotal__1->SetBinError(14,0.2855329);
   hbkgtotal__1->SetBinError(15,4.992318);
   hbkgtotal__1->SetBinError(16,0.8655498);
   hbkgtotal__1->SetBinError(17,0.3682994);
   hbkgtotal__1->SetBinError(18,1.126072);
   hbkgtotal__1->SetMinimum(0.01);
   hbkgtotal__1->SetMaximum(4.085017e+08);
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
   qcd_pred_stack_stack_1->SetMinimum(0.2413932);
   qcd_pred_stack_stack_1->SetMaximum(965.5728);
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
   qcd_pred_stack_1->SetBinContent(1,592.5008);
   qcd_pred_stack_1->SetBinContent(2,30.18574);
   qcd_pred_stack_1->SetBinContent(3,9.046311);
   qcd_pred_stack_1->SetBinContent(4,0.1765789);
   qcd_pred_stack_1->SetBinContent(5,121.1229);
   qcd_pred_stack_1->SetBinContent(6,53.68193);
   qcd_pred_stack_1->SetBinContent(7,16.46925);
   qcd_pred_stack_1->SetBinContent(8,9.082916);
   qcd_pred_stack_1->SetBinContent(9,1.212014);
   qcd_pred_stack_1->SetBinContent(10,2.709379);
   qcd_pred_stack_1->SetBinContent(11,12.21479);
   qcd_pred_stack_1->SetBinContent(13,1.180709);
   qcd_pred_stack_1->SetBinContent(14,0.44055);
   qcd_pred_stack_1->SetBinContent(15,11.07236);
   qcd_pred_stack_1->SetBinContent(16,11.56442);
   qcd_pred_stack_1->SetBinContent(17,0.9556642);
   qcd_pred_stack_1->SetBinContent(18,11.04165);
   qcd_pred_stack_1->SetBinError(1,10.98216);
   qcd_pred_stack_1->SetBinError(2,3.200913);
   qcd_pred_stack_1->SetBinError(3,1.187478);
   qcd_pred_stack_1->SetBinError(4,0.2787605);
   qcd_pred_stack_1->SetBinError(5,8.594687);
   qcd_pred_stack_1->SetBinError(6,5.1447);
   qcd_pred_stack_1->SetBinError(7,1.704092);
   qcd_pred_stack_1->SetBinError(8,1.344709);
   qcd_pred_stack_1->SetBinError(9,0.6924119);
   qcd_pred_stack_1->SetBinError(10,0.8880127);
   qcd_pred_stack_1->SetBinError(11,2.17178);
   qcd_pred_stack_1->SetBinError(13,0.5777524);
   qcd_pred_stack_1->SetBinError(14,0.2855329);
   qcd_pred_stack_1->SetBinError(15,4.992318);
   qcd_pred_stack_1->SetBinError(16,0.8655498);
   qcd_pred_stack_1->SetBinError(17,0.3682994);
   qcd_pred_stack_1->SetBinError(18,1.126072);
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
   592.5008,
   30.18574,
   9.046311,
   0.1765789,
   121.1229,
   53.68193,
   16.46925,
   9.082916,
   1.212014,
   2.709379,
   12.21479,
   0,
   1.180709,
   0.44055,
   11.07236,
   11.56442,
   0.9556642,
   11.04165,
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
   10.98216,
   3.200913,
   1.187478,
   0.2787605,
   8.594687,
   5.1447,
   1.704092,
   1.344709,
   0.6924119,
   0.8880127,
   2.17178,
   0,
   0.5777524,
   0.2855329,
   4.992318,
   0.8655498,
   0.3682994,
   1.126072,
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
   10.98216,
   3.200913,
   1.187478,
   0.2787605,
   8.594687,
   5.1447,
   1.704092,
   1.344709,
   0.6924119,
   0.8880127,
   2.17178,
   0,
   0.5777524,
   0.2855329,
   4.992318,
   0.8655498,
   0.3682994,
   1.126072,
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
   Graph_Graph_from_hbkgtotal3001->SetMinimum(0.6638313);
   Graph_Graph_from_hbkgtotal3001->SetMaximum(663.8313);
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
   2402,
   85,
   35,
   4,
   668,
   414,
   76,
   31,
   15,
   56,
   137,
   7,
   8,
   15,
   5,
   20,
   1,
   10,
   0};
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
   0.5,
   0.5,
   0};
   Double_t Graph_from_data0_fely3002[19] = {
   49.00785,
   9.20156,
   5.887788,
   1.914367,
   25.83978,
   20.33921,
   8.69875,
   5.537671,
   3.829449,
   7.461048,
   11.69064,
   2.581513,
   2.768432,
   3.829449,
   2.159724,
   4.43453,
   0.8272525,
   3.108748,
   0};
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
   0.5,
   0.5,
   0};
   Double_t Graph_from_data0_fehy3002[19] = {
   50.01809,
   10.25594,
   6.972554,
   3.162815,
   26.85918,
   21.36384,
   9.756266,
   6.627738,
   4.958839,
   8.528058,
   12.73347,
   3.770356,
   3.94522,
   4.958839,
   3.382539,
   5.546633,
   2.29957,
   4.267035,
   1.841055};
   grae = new TGraphAsymmErrors(19,Graph_from_data0_fx3002,Graph_from_data0_fy3002,Graph_from_data0_felx3002,Graph_from_data0_fehx3002,Graph_from_data0_fely3002,Graph_from_data0_fehy3002);
   grae->SetName("Graph_from_data0");
   grae->SetTitle("");
   grae->SetFillStyle(0);
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_data03002 = new TH1F("Graph_Graph_from_data03002","",100,0,20.35);
   Graph_Graph_from_data03002->SetMinimum(2.69722);
   Graph_Graph_from_data03002->SetMaximum(2697.22);
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
   TLatex *   tex = new TLatex(0.96,0.92,"35815.2 fb^{-1} (13 TeV)");
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
   hbkgtotal_copy__2->SetBinContent(1,592.5008);
   hbkgtotal_copy__2->SetBinContent(2,30.18574);
   hbkgtotal_copy__2->SetBinContent(3,9.046311);
   hbkgtotal_copy__2->SetBinContent(4,0.1765789);
   hbkgtotal_copy__2->SetBinContent(5,121.1229);
   hbkgtotal_copy__2->SetBinContent(6,53.68193);
   hbkgtotal_copy__2->SetBinContent(7,16.46925);
   hbkgtotal_copy__2->SetBinContent(8,9.082916);
   hbkgtotal_copy__2->SetBinContent(9,1.212014);
   hbkgtotal_copy__2->SetBinContent(10,2.709379);
   hbkgtotal_copy__2->SetBinContent(11,12.21479);
   hbkgtotal_copy__2->SetBinContent(13,1.180709);
   hbkgtotal_copy__2->SetBinContent(14,0.44055);
   hbkgtotal_copy__2->SetBinContent(15,11.07236);
   hbkgtotal_copy__2->SetBinContent(16,11.56442);
   hbkgtotal_copy__2->SetBinContent(17,0.9556642);
   hbkgtotal_copy__2->SetBinContent(18,11.04165);
   hbkgtotal_copy__2->SetBinError(1,10.98216);
   hbkgtotal_copy__2->SetBinError(2,3.200913);
   hbkgtotal_copy__2->SetBinError(3,1.187478);
   hbkgtotal_copy__2->SetBinError(4,0.2787605);
   hbkgtotal_copy__2->SetBinError(5,8.594687);
   hbkgtotal_copy__2->SetBinError(6,5.1447);
   hbkgtotal_copy__2->SetBinError(7,1.704092);
   hbkgtotal_copy__2->SetBinError(8,1.344709);
   hbkgtotal_copy__2->SetBinError(9,0.6924119);
   hbkgtotal_copy__2->SetBinError(10,0.8880127);
   hbkgtotal_copy__2->SetBinError(11,2.17178);
   hbkgtotal_copy__2->SetBinError(13,0.5777524);
   hbkgtotal_copy__2->SetBinError(14,0.2855329);
   hbkgtotal_copy__2->SetBinError(15,4.992318);
   hbkgtotal_copy__2->SetBinError(16,0.8655498);
   hbkgtotal_copy__2->SetBinError(17,0.3682994);
   hbkgtotal_copy__2->SetBinError(18,1.126072);
   hbkgtotal_copy__2->SetMinimum(0.01);
   hbkgtotal_copy__2->SetMaximum(4.085017e+08);
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
   htmpaxis__3->SetBinContent(1,592.5008);
   htmpaxis__3->SetBinContent(2,30.18574);
   htmpaxis__3->SetBinContent(3,9.046311);
   htmpaxis__3->SetBinContent(4,0.1765789);
   htmpaxis__3->SetBinContent(5,121.1229);
   htmpaxis__3->SetBinContent(6,53.68193);
   htmpaxis__3->SetBinContent(7,16.46925);
   htmpaxis__3->SetBinContent(8,9.082916);
   htmpaxis__3->SetBinContent(9,1.212014);
   htmpaxis__3->SetBinContent(10,2.709379);
   htmpaxis__3->SetBinContent(11,12.21479);
   htmpaxis__3->SetBinContent(13,1.180709);
   htmpaxis__3->SetBinContent(14,0.44055);
   htmpaxis__3->SetBinContent(15,11.07236);
   htmpaxis__3->SetBinContent(16,11.56442);
   htmpaxis__3->SetBinContent(17,0.9556642);
   htmpaxis__3->SetBinContent(18,11.04165);
   htmpaxis__3->SetBinError(1,10.98216);
   htmpaxis__3->SetBinError(2,3.200913);
   htmpaxis__3->SetBinError(3,1.187478);
   htmpaxis__3->SetBinError(4,0.2787605);
   htmpaxis__3->SetBinError(5,8.594687);
   htmpaxis__3->SetBinError(6,5.1447);
   htmpaxis__3->SetBinError(7,1.704092);
   htmpaxis__3->SetBinError(8,1.344709);
   htmpaxis__3->SetBinError(9,0.6924119);
   htmpaxis__3->SetBinError(10,0.8880127);
   htmpaxis__3->SetBinError(11,2.17178);
   htmpaxis__3->SetBinError(13,0.5777524);
   htmpaxis__3->SetBinError(14,0.2855329);
   htmpaxis__3->SetBinError(15,4.992318);
   htmpaxis__3->SetBinError(16,0.8655498);
   htmpaxis__3->SetBinError(17,0.3682994);
   htmpaxis__3->SetBinError(18,1.126072);
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
   4.054003,
   2.815899,
   3.86898,
   22.65277,
   5.515058,
   7.712092,
   4.614659,
   3.413001,
   12.37609,
   20.66894,
   11.21591,
   inf,
   6.775591,
   34.04835,
   0.451575,
   1.729443,
   1.046393,
   0.9056617,
   -nan};
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
   0.08271753,
   0.3054271,
   0.6539771,
   10.908,
   0.213384,
   0.3790286,
   0.5293377,
   0.612993,
   3.195493,
   2.762004,
   0.9582396,
   0,
   2.336335,
   8.791246,
   0.1909411,
   0.3867152,
   0.8613785,
   0.2815843,
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
   0.08271753,
   0.3054271,
   0.6539771,
   17.9454,
   0.213384,
   0.3790286,
   0.5293377,
   0.612993,
   3.195493,
   2.762004,
   0.9582396,
   0,
   3.357058,
   8.791246,
   0.3043318,
   0.3867152,
   2.474189,
   0.3962443,
   0};
   grae = new TGraphAsymmErrors(19,Graph_from_data3_fx3003,Graph_from_data3_fy3003,Graph_from_data3_felx3003,Graph_from_data3_fehx3003,Graph_from_data3_fely3003,Graph_from_data3_fehy3003);
   grae->SetName("Graph_from_data3");
   grae->SetTitle("");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_data33003 = new TH1F("Graph_Graph_from_data33003","",100,0,20.9);
   Graph_Graph_from_data33003->SetMinimum(0.1665127);
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
   0.01853526,
   0.1060406,
   0.1312665,
   1.578674,
   0.07095838,
   0.09583672,
   0.1034711,
   0.1480482,
   0.5712902,
   0.3277551,
   0.1777991,
   0,
   0.4893268,
   0.6481282,
   0.4508811,
   0.07484595,
   0.3853857,
   0.101984,
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
   0.01853526,
   0.1060406,
   0.1312665,
   1.578674,
   0.07095838,
   0.09583672,
   0.1034711,
   0.1480482,
   0.5712902,
   0.3277551,
   0.1777991,
   0,
   0.4893268,
   0.6481282,
   0.4508811,
   0.07484595,
   0.3853857,
   0.101984,
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
   Graph_Graph_from_hbkgtotal3004->SetMinimum(-0.8944091);
   Graph_Graph_from_hbkgtotal3004->SetMaximum(2.894409);
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
   htmpaxis_copy__4->SetBinContent(1,592.5008);
   htmpaxis_copy__4->SetBinContent(2,30.18574);
   htmpaxis_copy__4->SetBinContent(3,9.046311);
   htmpaxis_copy__4->SetBinContent(4,0.1765789);
   htmpaxis_copy__4->SetBinContent(5,121.1229);
   htmpaxis_copy__4->SetBinContent(6,53.68193);
   htmpaxis_copy__4->SetBinContent(7,16.46925);
   htmpaxis_copy__4->SetBinContent(8,9.082916);
   htmpaxis_copy__4->SetBinContent(9,1.212014);
   htmpaxis_copy__4->SetBinContent(10,2.709379);
   htmpaxis_copy__4->SetBinContent(11,12.21479);
   htmpaxis_copy__4->SetBinContent(13,1.180709);
   htmpaxis_copy__4->SetBinContent(14,0.44055);
   htmpaxis_copy__4->SetBinContent(15,11.07236);
   htmpaxis_copy__4->SetBinContent(16,11.56442);
   htmpaxis_copy__4->SetBinContent(17,0.9556642);
   htmpaxis_copy__4->SetBinContent(18,11.04165);
   htmpaxis_copy__4->SetBinError(1,10.98216);
   htmpaxis_copy__4->SetBinError(2,3.200913);
   htmpaxis_copy__4->SetBinError(3,1.187478);
   htmpaxis_copy__4->SetBinError(4,0.2787605);
   htmpaxis_copy__4->SetBinError(5,8.594687);
   htmpaxis_copy__4->SetBinError(6,5.1447);
   htmpaxis_copy__4->SetBinError(7,1.704092);
   htmpaxis_copy__4->SetBinError(8,1.344709);
   htmpaxis_copy__4->SetBinError(9,0.6924119);
   htmpaxis_copy__4->SetBinError(10,0.8880127);
   htmpaxis_copy__4->SetBinError(11,2.17178);
   htmpaxis_copy__4->SetBinError(13,0.5777524);
   htmpaxis_copy__4->SetBinError(14,0.2855329);
   htmpaxis_copy__4->SetBinError(15,4.992318);
   htmpaxis_copy__4->SetBinError(16,0.8655498);
   htmpaxis_copy__4->SetBinError(17,0.3682994);
   htmpaxis_copy__4->SetBinError(18,1.126072);
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
