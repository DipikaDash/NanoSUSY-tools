void std_pred_trad()
{
//=========Macro generated from canvas: c0/std_pred_trad
//=========  (Wed Nov 27 06:08:47 2019) by ROOT version6.10/09
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
   p1->Range(-3.8,-2.386437,19.95,10.4948);
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
   hbkgtotal__1->SetBinContent(1,3186.957);
   hbkgtotal__1->SetBinContent(2,151.6136);
   hbkgtotal__1->SetBinContent(3,91.60352);
   hbkgtotal__1->SetBinContent(4,11.34146);
   hbkgtotal__1->SetBinContent(5,445.3204);
   hbkgtotal__1->SetBinContent(6,162.1611);
   hbkgtotal__1->SetBinContent(7,102.6767);
   hbkgtotal__1->SetBinContent(8,87.4785);
   hbkgtotal__1->SetBinContent(9,18.20213);
   hbkgtotal__1->SetBinContent(10,33.80027);
   hbkgtotal__1->SetBinContent(11,60.53405);
   hbkgtotal__1->SetBinContent(12,32.90119);
   hbkgtotal__1->SetBinContent(13,3.69296);
   hbkgtotal__1->SetBinContent(14,5.989064);
   hbkgtotal__1->SetBinContent(15,6.047715);
   hbkgtotal__1->SetBinContent(16,105.1461);
   hbkgtotal__1->SetBinContent(17,10.05633);
   hbkgtotal__1->SetBinContent(18,23.59369);
   hbkgtotal__1->SetBinContent(19,0.842364);
   hbkgtotal__1->SetBinError(1,27.24673);
   hbkgtotal__1->SetBinError(2,7.619843);
   hbkgtotal__1->SetBinError(3,4.334148);
   hbkgtotal__1->SetBinError(4,2.852397);
   hbkgtotal__1->SetBinError(5,16.04507);
   hbkgtotal__1->SetBinError(6,7.861112);
   hbkgtotal__1->SetBinError(7,5.121705);
   hbkgtotal__1->SetBinError(8,6.118852);
   hbkgtotal__1->SetBinError(9,2.447902);
   hbkgtotal__1->SetBinError(10,4.600693);
   hbkgtotal__1->SetBinError(11,5.756803);
   hbkgtotal__1->SetBinError(12,17.18019);
   hbkgtotal__1->SetBinError(13,0.7236802);
   hbkgtotal__1->SetBinError(14,0.978165);
   hbkgtotal__1->SetBinError(15,1.370491);
   hbkgtotal__1->SetBinError(16,2.557374);
   hbkgtotal__1->SetBinError(17,0.9712111);
   hbkgtotal__1->SetBinError(18,1.371139);
   hbkgtotal__1->SetBinError(19,0.2246336);
   hbkgtotal__1->SetMinimum(0.01);
   hbkgtotal__1->SetMaximum(1.609462e+09);
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
   qcd_pred_stack_stack_1->SetMinimum(0.1929727);
   qcd_pred_stack_stack_1->SetMaximum(5632.592);
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
   qcd_pred_stack_1->SetBinContent(1,3186.957);
   qcd_pred_stack_1->SetBinContent(2,151.6136);
   qcd_pred_stack_1->SetBinContent(3,91.60352);
   qcd_pred_stack_1->SetBinContent(4,11.34146);
   qcd_pred_stack_1->SetBinContent(5,445.3204);
   qcd_pred_stack_1->SetBinContent(6,162.1611);
   qcd_pred_stack_1->SetBinContent(7,102.6767);
   qcd_pred_stack_1->SetBinContent(8,87.4785);
   qcd_pred_stack_1->SetBinContent(9,18.20213);
   qcd_pred_stack_1->SetBinContent(10,33.80027);
   qcd_pred_stack_1->SetBinContent(11,60.53405);
   qcd_pred_stack_1->SetBinContent(12,32.90119);
   qcd_pred_stack_1->SetBinContent(13,3.69296);
   qcd_pred_stack_1->SetBinContent(14,5.989064);
   qcd_pred_stack_1->SetBinContent(15,6.047715);
   qcd_pred_stack_1->SetBinContent(16,105.1461);
   qcd_pred_stack_1->SetBinContent(17,10.05633);
   qcd_pred_stack_1->SetBinContent(18,23.59369);
   qcd_pred_stack_1->SetBinContent(19,0.842364);
   qcd_pred_stack_1->SetBinError(1,27.24673);
   qcd_pred_stack_1->SetBinError(2,7.619843);
   qcd_pred_stack_1->SetBinError(3,4.334148);
   qcd_pred_stack_1->SetBinError(4,2.852397);
   qcd_pred_stack_1->SetBinError(5,16.04507);
   qcd_pred_stack_1->SetBinError(6,7.861112);
   qcd_pred_stack_1->SetBinError(7,5.121705);
   qcd_pred_stack_1->SetBinError(8,6.118852);
   qcd_pred_stack_1->SetBinError(9,2.447902);
   qcd_pred_stack_1->SetBinError(10,4.600693);
   qcd_pred_stack_1->SetBinError(11,5.756803);
   qcd_pred_stack_1->SetBinError(12,17.18019);
   qcd_pred_stack_1->SetBinError(13,0.7236802);
   qcd_pred_stack_1->SetBinError(14,0.978165);
   qcd_pred_stack_1->SetBinError(15,1.370491);
   qcd_pred_stack_1->SetBinError(16,2.557374);
   qcd_pred_stack_1->SetBinError(17,0.9712111);
   qcd_pred_stack_1->SetBinError(18,1.371139);
   qcd_pred_stack_1->SetBinError(19,0.2246336);
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
   3186.957,
   151.6136,
   91.60352,
   11.34146,
   445.3204,
   162.1611,
   102.6767,
   87.4785,
   18.20213,
   33.80027,
   60.53405,
   32.90119,
   3.69296,
   5.989064,
   6.047715,
   105.1461,
   10.05633,
   23.59369,
   0.842364};
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
   27.24673,
   7.619843,
   4.334148,
   2.852397,
   16.04507,
   7.861112,
   5.121705,
   6.118852,
   2.447902,
   4.600693,
   5.756803,
   17.18019,
   0.7236802,
   0.978165,
   1.370491,
   2.557374,
   0.9712111,
   1.371139,
   0.2246336};
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
   27.24673,
   7.619843,
   4.334148,
   2.852397,
   16.04507,
   7.861112,
   5.121705,
   6.118852,
   2.447902,
   4.600693,
   5.756803,
   17.18019,
   0.7236802,
   0.978165,
   1.370491,
   2.557374,
   0.9712111,
   1.371139,
   0.2246336};
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
   Graph_Graph_from_hbkgtotal3001->SetMinimum(0.5559573);
   Graph_Graph_from_hbkgtotal3001->SetMaximum(3535.563);
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
   9559,
   382,
   302,
   17,
   2370,
   1548,
   314,
   165,
   133,
   226,
   508,
   21,
   26,
   69,
   18,
   108,
   5,
   37,
   3};
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
   0.5};
   Double_t Graph_from_data0_fely3002[19] = {
   97.77054,
   19.53668,
   17.36889,
   4.082258,
   48.68026,
   39.34123,
   17.71099,
   12.83247,
   11.51829,
   15.02249,
   22.53192,
   4.545892,
   5.066111,
   8.28661,
   4.202964,
   10.37641,
   2.159724,
   6.05526,
   1.632727};
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
   0.5};
   Double_t Graph_from_data0_fehy3002[19] = {
   98.77569,
   20.56233,
   18.39774,
   5.203825,
   49.69057,
   40.35398,
   18.73927,
   13.8715,
   12.56176,
   16.05583,
   23.55416,
   5.655298,
   6.164451,
   9.346974,
   5.321116,
   11.42465,
   3.382539,
   7.137703,
   2.918242};
   grae = new TGraphAsymmErrors(19,Graph_from_data0_fx3002,Graph_from_data0_fy3002,Graph_from_data0_felx3002,Graph_from_data0_fehx3002,Graph_from_data0_fely3002,Graph_from_data0_fehy3002);
   grae->SetName("Graph_from_data0");
   grae->SetTitle("");
   grae->SetFillStyle(0);
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_data03002 = new TH1F("Graph_Graph_from_data03002","",100,0,20.9);
   Graph_Graph_from_data03002->SetMinimum(1.230546);
   Graph_Graph_from_data03002->SetMaximum(10623.42);
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
   TLatex *   tex = new TLatex(0.96,0.92,"136.7 fb^{-1} (13 TeV)");
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
   hbkgtotal_copy__2->SetBinContent(1,3186.957);
   hbkgtotal_copy__2->SetBinContent(2,151.6136);
   hbkgtotal_copy__2->SetBinContent(3,91.60352);
   hbkgtotal_copy__2->SetBinContent(4,11.34146);
   hbkgtotal_copy__2->SetBinContent(5,445.3204);
   hbkgtotal_copy__2->SetBinContent(6,162.1611);
   hbkgtotal_copy__2->SetBinContent(7,102.6767);
   hbkgtotal_copy__2->SetBinContent(8,87.4785);
   hbkgtotal_copy__2->SetBinContent(9,18.20213);
   hbkgtotal_copy__2->SetBinContent(10,33.80027);
   hbkgtotal_copy__2->SetBinContent(11,60.53405);
   hbkgtotal_copy__2->SetBinContent(12,32.90119);
   hbkgtotal_copy__2->SetBinContent(13,3.69296);
   hbkgtotal_copy__2->SetBinContent(14,5.989064);
   hbkgtotal_copy__2->SetBinContent(15,6.047715);
   hbkgtotal_copy__2->SetBinContent(16,105.1461);
   hbkgtotal_copy__2->SetBinContent(17,10.05633);
   hbkgtotal_copy__2->SetBinContent(18,23.59369);
   hbkgtotal_copy__2->SetBinContent(19,0.842364);
   hbkgtotal_copy__2->SetBinError(1,27.24673);
   hbkgtotal_copy__2->SetBinError(2,7.619843);
   hbkgtotal_copy__2->SetBinError(3,4.334148);
   hbkgtotal_copy__2->SetBinError(4,2.852397);
   hbkgtotal_copy__2->SetBinError(5,16.04507);
   hbkgtotal_copy__2->SetBinError(6,7.861112);
   hbkgtotal_copy__2->SetBinError(7,5.121705);
   hbkgtotal_copy__2->SetBinError(8,6.118852);
   hbkgtotal_copy__2->SetBinError(9,2.447902);
   hbkgtotal_copy__2->SetBinError(10,4.600693);
   hbkgtotal_copy__2->SetBinError(11,5.756803);
   hbkgtotal_copy__2->SetBinError(12,17.18019);
   hbkgtotal_copy__2->SetBinError(13,0.7236802);
   hbkgtotal_copy__2->SetBinError(14,0.978165);
   hbkgtotal_copy__2->SetBinError(15,1.370491);
   hbkgtotal_copy__2->SetBinError(16,2.557374);
   hbkgtotal_copy__2->SetBinError(17,0.9712111);
   hbkgtotal_copy__2->SetBinError(18,1.371139);
   hbkgtotal_copy__2->SetBinError(19,0.2246336);
   hbkgtotal_copy__2->SetMinimum(0.01);
   hbkgtotal_copy__2->SetMaximum(1.609462e+09);
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
   htmpaxis__3->SetBinContent(1,3186.957);
   htmpaxis__3->SetBinContent(2,151.6136);
   htmpaxis__3->SetBinContent(3,91.60352);
   htmpaxis__3->SetBinContent(4,11.34146);
   htmpaxis__3->SetBinContent(5,445.3204);
   htmpaxis__3->SetBinContent(6,162.1611);
   htmpaxis__3->SetBinContent(7,102.6767);
   htmpaxis__3->SetBinContent(8,87.4785);
   htmpaxis__3->SetBinContent(9,18.20213);
   htmpaxis__3->SetBinContent(10,33.80027);
   htmpaxis__3->SetBinContent(11,60.53405);
   htmpaxis__3->SetBinContent(12,32.90119);
   htmpaxis__3->SetBinContent(13,3.69296);
   htmpaxis__3->SetBinContent(14,5.989064);
   htmpaxis__3->SetBinContent(15,6.047715);
   htmpaxis__3->SetBinContent(16,105.1461);
   htmpaxis__3->SetBinContent(17,10.05633);
   htmpaxis__3->SetBinContent(18,23.59369);
   htmpaxis__3->SetBinContent(19,0.842364);
   htmpaxis__3->SetBinError(1,27.24673);
   htmpaxis__3->SetBinError(2,7.619843);
   htmpaxis__3->SetBinError(3,4.334148);
   htmpaxis__3->SetBinError(4,2.852397);
   htmpaxis__3->SetBinError(5,16.04507);
   htmpaxis__3->SetBinError(6,7.861112);
   htmpaxis__3->SetBinError(7,5.121705);
   htmpaxis__3->SetBinError(8,6.118852);
   htmpaxis__3->SetBinError(9,2.447902);
   htmpaxis__3->SetBinError(10,4.600693);
   htmpaxis__3->SetBinError(11,5.756803);
   htmpaxis__3->SetBinError(12,17.18019);
   htmpaxis__3->SetBinError(13,0.7236802);
   htmpaxis__3->SetBinError(14,0.978165);
   htmpaxis__3->SetBinError(15,1.370491);
   htmpaxis__3->SetBinError(16,2.557374);
   htmpaxis__3->SetBinError(17,0.9712111);
   htmpaxis__3->SetBinError(18,1.371139);
   htmpaxis__3->SetBinError(19,0.2246336);
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
   2.999413,
   2.519563,
   3.296817,
   1.498925,
   5.32201,
   9.546061,
   3.058143,
   1.886178,
   7.306839,
   6.686337,
   8.391972,
   0.6382748,
   7.040424,
   11.521,
   2.976331,
   1.027142,
   0.4971993,
   1.568216,
   3.561406};
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
   0.03067821,
   0.1289121,
   0.1897105,
   0.3635427,
   0.1093205,
   0.2426268,
   0.172581,
   0.1468387,
   0.6335833,
   0.4447685,
   0.3723335,
   0.139283,
   1.380741,
   1.386965,
   0.7015279,
   0.09883681,
   0.214967,
   0.2578131,
   1.951288};
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
   0.03067821,
   0.1289121,
   0.1897105,
   0.3635427,
   0.1093205,
   0.2426268,
   0.172581,
   0.1468387,
   0.6335833,
   0.4447685,
   0.3723335,
   0.139283,
   1.380741,
   1.386965,
   0.7015279,
   0.09883681,
   0.3425451,
   0.2578131,
   3.343561};
   grae = new TGraphAsymmErrors(19,Graph_from_data3_fx3003,Graph_from_data3_fy3003,Graph_from_data3_felx3003,Graph_from_data3_fehx3003,Graph_from_data3_fely3003,Graph_from_data3_fehy3003);
   grae->SetName("Graph_from_data3");
   grae->SetTitle("");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_data33003 = new TH1F("Graph_Graph_from_data33003","",100,0,20.9);
   Graph_Graph_from_data33003->SetMinimum(0.254009);
   Graph_Graph_from_data33003->SetMaximum(14.17054);
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
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
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
   0.008549448,
   0.05025831,
   0.04731421,
   0.2515017,
   0.0360304,
   0.04847717,
   0.04988187,
   0.06994692,
   0.1344844,
   0.1361141,
   0.09510026,
   0.5221755,
   0.1959621,
   0.1633252,
   0.226613,
   0.0243221,
   0.09657709,
   0.05811464,
   0.2666705};
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
   0.008549448,
   0.05025831,
   0.04731421,
   0.2515017,
   0.0360304,
   0.04847717,
   0.04988187,
   0.06994692,
   0.1344844,
   0.1361141,
   0.09510026,
   0.5221755,
   0.1959621,
   0.1633252,
   0.226613,
   0.0243221,
   0.09657709,
   0.05811464,
   0.2666705};
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
   Graph_Graph_from_hbkgtotal3004->SetMinimum(0.3733894);
   Graph_Graph_from_hbkgtotal3004->SetMaximum(1.626611);
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
   htmpaxis_copy__4->SetBinContent(1,3186.957);
   htmpaxis_copy__4->SetBinContent(2,151.6136);
   htmpaxis_copy__4->SetBinContent(3,91.60352);
   htmpaxis_copy__4->SetBinContent(4,11.34146);
   htmpaxis_copy__4->SetBinContent(5,445.3204);
   htmpaxis_copy__4->SetBinContent(6,162.1611);
   htmpaxis_copy__4->SetBinContent(7,102.6767);
   htmpaxis_copy__4->SetBinContent(8,87.4785);
   htmpaxis_copy__4->SetBinContent(9,18.20213);
   htmpaxis_copy__4->SetBinContent(10,33.80027);
   htmpaxis_copy__4->SetBinContent(11,60.53405);
   htmpaxis_copy__4->SetBinContent(12,32.90119);
   htmpaxis_copy__4->SetBinContent(13,3.69296);
   htmpaxis_copy__4->SetBinContent(14,5.989064);
   htmpaxis_copy__4->SetBinContent(15,6.047715);
   htmpaxis_copy__4->SetBinContent(16,105.1461);
   htmpaxis_copy__4->SetBinContent(17,10.05633);
   htmpaxis_copy__4->SetBinContent(18,23.59369);
   htmpaxis_copy__4->SetBinContent(19,0.842364);
   htmpaxis_copy__4->SetBinError(1,27.24673);
   htmpaxis_copy__4->SetBinError(2,7.619843);
   htmpaxis_copy__4->SetBinError(3,4.334148);
   htmpaxis_copy__4->SetBinError(4,2.852397);
   htmpaxis_copy__4->SetBinError(5,16.04507);
   htmpaxis_copy__4->SetBinError(6,7.861112);
   htmpaxis_copy__4->SetBinError(7,5.121705);
   htmpaxis_copy__4->SetBinError(8,6.118852);
   htmpaxis_copy__4->SetBinError(9,2.447902);
   htmpaxis_copy__4->SetBinError(10,4.600693);
   htmpaxis_copy__4->SetBinError(11,5.756803);
   htmpaxis_copy__4->SetBinError(12,17.18019);
   htmpaxis_copy__4->SetBinError(13,0.7236802);
   htmpaxis_copy__4->SetBinError(14,0.978165);
   htmpaxis_copy__4->SetBinError(15,1.370491);
   htmpaxis_copy__4->SetBinError(16,2.557374);
   htmpaxis_copy__4->SetBinError(17,0.9712111);
   htmpaxis_copy__4->SetBinError(18,1.371139);
   htmpaxis_copy__4->SetBinError(19,0.2246336);
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
