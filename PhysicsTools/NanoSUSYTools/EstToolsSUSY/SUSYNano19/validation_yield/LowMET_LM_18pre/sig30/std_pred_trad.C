void std_pred_trad()
{
//=========Macro generated from canvas: c0/std_pred_trad
//=========  (Fri Nov 15 10:14:38 2019) by ROOT version6.10/09
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
   p1->Range(-3.8,-2.358703,19.95,9.598062);
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
   hbkgtotal__1->SetBinContent(1,386.4436);
   hbkgtotal__1->SetBinContent(2,17.46497);
   hbkgtotal__1->SetBinContent(3,18.69605);
   hbkgtotal__1->SetBinContent(4,5.569733);
   hbkgtotal__1->SetBinContent(5,62.27823);
   hbkgtotal__1->SetBinContent(6,21.1937);
   hbkgtotal__1->SetBinContent(7,19.20873);
   hbkgtotal__1->SetBinContent(8,12.54);
   hbkgtotal__1->SetBinContent(9,1.515392);
   hbkgtotal__1->SetBinContent(10,2.811755);
   hbkgtotal__1->SetBinContent(11,23.80292);
   hbkgtotal__1->SetBinContent(12,0.01847458);
   hbkgtotal__1->SetBinContent(13,0.3257827);
   hbkgtotal__1->SetBinContent(14,2.7604);
   hbkgtotal__1->SetBinContent(15,2.700127);
   hbkgtotal__1->SetBinContent(16,10.19347);
   hbkgtotal__1->SetBinContent(17,2.793345);
   hbkgtotal__1->SetBinContent(18,4.306308);
   hbkgtotal__1->SetBinContent(19,0.3260758);
   hbkgtotal__1->SetBinError(1,7.602043);
   hbkgtotal__1->SetBinError(2,2.283472);
   hbkgtotal__1->SetBinError(3,1.973187);
   hbkgtotal__1->SetBinError(4,2.88139);
   hbkgtotal__1->SetBinError(5,4.997063);
   hbkgtotal__1->SetBinError(6,2.313435);
   hbkgtotal__1->SetBinError(7,2.123042);
   hbkgtotal__1->SetBinError(8,2.060357);
   hbkgtotal__1->SetBinError(9,0.463425);
   hbkgtotal__1->SetBinError(10,0.8086624);
   hbkgtotal__1->SetBinError(11,4.495291);
   hbkgtotal__1->SetBinError(12,0.0291364);
   hbkgtotal__1->SetBinError(13,0.170642);
   hbkgtotal__1->SetBinError(14,1.123244);
   hbkgtotal__1->SetBinError(15,1.424986);
   hbkgtotal__1->SetBinError(16,0.5130189);
   hbkgtotal__1->SetBinError(17,0.3623646);
   hbkgtotal__1->SetBinError(18,0.407483);
   hbkgtotal__1->SetBinError(19,0.1193048);
   hbkgtotal__1->SetMinimum(0.01);
   hbkgtotal__1->SetMaximum(2.52572e+08);
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
   qcd_pred_stack_stack_1->SetMinimum(0.1576183);
   qcd_pred_stack_stack_1->SetMaximum(630.4731);
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
   qcd_pred_stack_1->SetBinContent(1,386.4436);
   qcd_pred_stack_1->SetBinContent(2,17.46497);
   qcd_pred_stack_1->SetBinContent(3,18.69605);
   qcd_pred_stack_1->SetBinContent(4,5.569733);
   qcd_pred_stack_1->SetBinContent(5,62.27823);
   qcd_pred_stack_1->SetBinContent(6,21.1937);
   qcd_pred_stack_1->SetBinContent(7,19.20873);
   qcd_pred_stack_1->SetBinContent(8,12.54);
   qcd_pred_stack_1->SetBinContent(9,1.515392);
   qcd_pred_stack_1->SetBinContent(10,2.811755);
   qcd_pred_stack_1->SetBinContent(11,23.80292);
   qcd_pred_stack_1->SetBinContent(12,0.01847458);
   qcd_pred_stack_1->SetBinContent(13,0.3257827);
   qcd_pred_stack_1->SetBinContent(14,2.7604);
   qcd_pred_stack_1->SetBinContent(15,2.700127);
   qcd_pred_stack_1->SetBinContent(16,10.19347);
   qcd_pred_stack_1->SetBinContent(17,2.793345);
   qcd_pred_stack_1->SetBinContent(18,4.306308);
   qcd_pred_stack_1->SetBinContent(19,0.3260758);
   qcd_pred_stack_1->SetBinError(1,7.602043);
   qcd_pred_stack_1->SetBinError(2,2.283472);
   qcd_pred_stack_1->SetBinError(3,1.973187);
   qcd_pred_stack_1->SetBinError(4,2.88139);
   qcd_pred_stack_1->SetBinError(5,4.997063);
   qcd_pred_stack_1->SetBinError(6,2.313435);
   qcd_pred_stack_1->SetBinError(7,2.123042);
   qcd_pred_stack_1->SetBinError(8,2.060357);
   qcd_pred_stack_1->SetBinError(9,0.463425);
   qcd_pred_stack_1->SetBinError(10,0.8086624);
   qcd_pred_stack_1->SetBinError(11,4.495291);
   qcd_pred_stack_1->SetBinError(12,0.0291364);
   qcd_pred_stack_1->SetBinError(13,0.170642);
   qcd_pred_stack_1->SetBinError(14,1.123244);
   qcd_pred_stack_1->SetBinError(15,1.424986);
   qcd_pred_stack_1->SetBinError(16,0.5130189);
   qcd_pred_stack_1->SetBinError(17,0.3623646);
   qcd_pred_stack_1->SetBinError(18,0.407483);
   qcd_pred_stack_1->SetBinError(19,0.1193048);
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
   386.4436,
   17.46497,
   18.69605,
   5.569733,
   62.27823,
   21.1937,
   19.20873,
   12.54,
   1.515392,
   2.811755,
   23.80292,
   0.01847458,
   0.3257827,
   2.7604,
   2.700127,
   10.19347,
   2.793345,
   4.306308,
   0.3260758};
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
   7.602043,
   2.283472,
   1.973187,
   2.88139,
   4.997063,
   2.313435,
   2.123042,
   2.060357,
   0.463425,
   0.8086624,
   4.495291,
   0.0291364,
   0.170642,
   1.123244,
   1.424986,
   0.5130189,
   0.3623646,
   0.407483,
   0.1193048};
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
   7.602043,
   2.283472,
   1.973187,
   2.88139,
   4.997063,
   2.313435,
   2.123042,
   2.060357,
   0.463425,
   0.8086624,
   4.495291,
   0.0291364,
   0.170642,
   1.123244,
   1.424986,
   0.5130189,
   0.3623646,
   0.407483,
   0.1193048};
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
   Graph_Graph_from_hbkgtotal3001->SetMinimum(0.005542375);
   Graph_Graph_from_hbkgtotal3001->SetMaximum(433.4496);
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
   1477,
   58,
   64,
   2,
   395,
   266,
   64,
   32,
   31,
   42,
   84,
   4,
   5,
   23,
   2,
   22,
   1,
   4,
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
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_data0_fely3002[19] = {
   38.42824,
   7.593901,
   7.979201,
   1.29183,
   19.86662,
   16.2996,
   7.979201,
   5.627243,
   5.537671,
   6.454957,
   9.147057,
   1.914367,
   2.159724,
   4.760806,
   1.29183,
   4.654589,
   0.8272525,
   1.914367,
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
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_data0_fehy3002[19] = {
   39.44128,
   8.659745,
   9.041881,
   2.63791,
   20.89184,
   17.33033,
   9.041881,
   6.715892,
   6.627738,
   7.532337,
   10.20176,
   3.162815,
   3.382539,
   5.865355,
   2.63791,
   5.761484,
   2.29957,
   3.162815,
   2.29957};
   grae = new TGraphAsymmErrors(19,Graph_from_data0_fx3002,Graph_from_data0_fy3002,Graph_from_data0_felx3002,Graph_from_data0_fehx3002,Graph_from_data0_fely3002,Graph_from_data0_fehy3002);
   grae->SetName("Graph_from_data0");
   grae->SetTitle("");
   grae->SetFillStyle(0);
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_data03002 = new TH1F("Graph_Graph_from_data03002","",100,0,20.9);
   Graph_Graph_from_data03002->SetMinimum(0.1554728);
   Graph_Graph_from_data03002->SetMaximum(1668.068);
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
   TLatex *   tex = new TLatex(0.96,0.92,"21068.6 fb^{-1} (13 TeV)");
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
   hbkgtotal_copy__2->SetBinContent(1,386.4436);
   hbkgtotal_copy__2->SetBinContent(2,17.46497);
   hbkgtotal_copy__2->SetBinContent(3,18.69605);
   hbkgtotal_copy__2->SetBinContent(4,5.569733);
   hbkgtotal_copy__2->SetBinContent(5,62.27823);
   hbkgtotal_copy__2->SetBinContent(6,21.1937);
   hbkgtotal_copy__2->SetBinContent(7,19.20873);
   hbkgtotal_copy__2->SetBinContent(8,12.54);
   hbkgtotal_copy__2->SetBinContent(9,1.515392);
   hbkgtotal_copy__2->SetBinContent(10,2.811755);
   hbkgtotal_copy__2->SetBinContent(11,23.80292);
   hbkgtotal_copy__2->SetBinContent(12,0.01847458);
   hbkgtotal_copy__2->SetBinContent(13,0.3257827);
   hbkgtotal_copy__2->SetBinContent(14,2.7604);
   hbkgtotal_copy__2->SetBinContent(15,2.700127);
   hbkgtotal_copy__2->SetBinContent(16,10.19347);
   hbkgtotal_copy__2->SetBinContent(17,2.793345);
   hbkgtotal_copy__2->SetBinContent(18,4.306308);
   hbkgtotal_copy__2->SetBinContent(19,0.3260758);
   hbkgtotal_copy__2->SetBinError(1,7.602043);
   hbkgtotal_copy__2->SetBinError(2,2.283472);
   hbkgtotal_copy__2->SetBinError(3,1.973187);
   hbkgtotal_copy__2->SetBinError(4,2.88139);
   hbkgtotal_copy__2->SetBinError(5,4.997063);
   hbkgtotal_copy__2->SetBinError(6,2.313435);
   hbkgtotal_copy__2->SetBinError(7,2.123042);
   hbkgtotal_copy__2->SetBinError(8,2.060357);
   hbkgtotal_copy__2->SetBinError(9,0.463425);
   hbkgtotal_copy__2->SetBinError(10,0.8086624);
   hbkgtotal_copy__2->SetBinError(11,4.495291);
   hbkgtotal_copy__2->SetBinError(12,0.0291364);
   hbkgtotal_copy__2->SetBinError(13,0.170642);
   hbkgtotal_copy__2->SetBinError(14,1.123244);
   hbkgtotal_copy__2->SetBinError(15,1.424986);
   hbkgtotal_copy__2->SetBinError(16,0.5130189);
   hbkgtotal_copy__2->SetBinError(17,0.3623646);
   hbkgtotal_copy__2->SetBinError(18,0.407483);
   hbkgtotal_copy__2->SetBinError(19,0.1193048);
   hbkgtotal_copy__2->SetMinimum(0.01);
   hbkgtotal_copy__2->SetMaximum(2.52572e+08);
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
   htmpaxis__3->SetBinContent(1,386.4436);
   htmpaxis__3->SetBinContent(2,17.46497);
   htmpaxis__3->SetBinContent(3,18.69605);
   htmpaxis__3->SetBinContent(4,5.569733);
   htmpaxis__3->SetBinContent(5,62.27823);
   htmpaxis__3->SetBinContent(6,21.1937);
   htmpaxis__3->SetBinContent(7,19.20873);
   htmpaxis__3->SetBinContent(8,12.54);
   htmpaxis__3->SetBinContent(9,1.515392);
   htmpaxis__3->SetBinContent(10,2.811755);
   htmpaxis__3->SetBinContent(11,23.80292);
   htmpaxis__3->SetBinContent(12,0.01847458);
   htmpaxis__3->SetBinContent(13,0.3257827);
   htmpaxis__3->SetBinContent(14,2.7604);
   htmpaxis__3->SetBinContent(15,2.700127);
   htmpaxis__3->SetBinContent(16,10.19347);
   htmpaxis__3->SetBinContent(17,2.793345);
   htmpaxis__3->SetBinContent(18,4.306308);
   htmpaxis__3->SetBinContent(19,0.3260758);
   htmpaxis__3->SetBinError(1,7.602043);
   htmpaxis__3->SetBinError(2,2.283472);
   htmpaxis__3->SetBinError(3,1.973187);
   htmpaxis__3->SetBinError(4,2.88139);
   htmpaxis__3->SetBinError(5,4.997063);
   htmpaxis__3->SetBinError(6,2.313435);
   htmpaxis__3->SetBinError(7,2.123042);
   htmpaxis__3->SetBinError(8,2.060357);
   htmpaxis__3->SetBinError(9,0.463425);
   htmpaxis__3->SetBinError(10,0.8086624);
   htmpaxis__3->SetBinError(11,4.495291);
   htmpaxis__3->SetBinError(12,0.0291364);
   htmpaxis__3->SetBinError(13,0.170642);
   htmpaxis__3->SetBinError(14,1.123244);
   htmpaxis__3->SetBinError(15,1.424986);
   htmpaxis__3->SetBinError(16,0.5130189);
   htmpaxis__3->SetBinError(17,0.3623646);
   htmpaxis__3->SetBinError(18,0.407483);
   htmpaxis__3->SetBinError(19,0.1193048);
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
   3.822032,
   3.320934,
   3.423182,
   0.3590836,
   6.342505,
   12.5509,
   3.331819,
   2.551834,
   20.45675,
   14.93729,
   3.528979,
   216.5137,
   15.34765,
   8.332124,
   0.740706,
   2.158244,
   0.3579937,
   0.92887,
   3.066772};
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
   0.09944984,
   0.43606,
   0.4278978,
   0.2324331,
   0.3191261,
   0.7695452,
   0.4164774,
   0.4511047,
   3.674141,
   2.304873,
   0.3850432,
   102.0272,
   6.537347,
   1.737368,
   0.4754666,
   0.4601392,
   0.2945766,
   0.4393972,
   2.551892};
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
   0.09944984,
   0.43606,
   0.4278978,
   0.4769678,
   0.3191261,
   0.7695452,
   0.4164774,
   0.4511047,
   3.674141,
   2.304873,
   0.3850432,
   171.9761,
   10.452,
   1.737368,
   0.9710795,
   0.4601392,
   0.829146,
   0.7385986,
   7.064681};
   grae = new TGraphAsymmErrors(19,Graph_from_data3_fx3003,Graph_from_data3_fy3003,Graph_from_data3_felx3003,Graph_from_data3_fehx3003,Graph_from_data3_fely3003,Graph_from_data3_fehy3003);
   grae->SetName("Graph_from_data3");
   grae->SetTitle("");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_data33003 = new TH1F("Graph_Graph_from_data33003","",100,0,20.9);
   Graph_Graph_from_data33003->SetMinimum(0.05707546);
   Graph_Graph_from_data33003->SetMaximum(427.3324);
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
   0.0196718,
   0.1307458,
   0.1055403,
   0.51733,
   0.08023772,
   0.1091568,
   0.1105249,
   0.1643028,
   0.3058119,
   0.2876006,
   0.1888546,
   1.577107,
   0.523791,
   0.4069133,
   0.5277478,
   0.05032818,
   0.1297243,
   0.09462468,
   0.3658806};
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
   0.0196718,
   0.1307458,
   0.1055403,
   0.51733,
   0.08023772,
   0.1091568,
   0.1105249,
   0.1643028,
   0.3058119,
   0.2876006,
   0.1888546,
   1.577107,
   0.523791,
   0.4069133,
   0.5277478,
   0.05032818,
   0.1297243,
   0.09462468,
   0.3658806};
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
   Graph_Graph_from_hbkgtotal3004->SetMinimum(-0.8925285);
   Graph_Graph_from_hbkgtotal3004->SetMaximum(2.892528);
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
   htmpaxis_copy__4->SetBinContent(1,386.4436);
   htmpaxis_copy__4->SetBinContent(2,17.46497);
   htmpaxis_copy__4->SetBinContent(3,18.69605);
   htmpaxis_copy__4->SetBinContent(4,5.569733);
   htmpaxis_copy__4->SetBinContent(5,62.27823);
   htmpaxis_copy__4->SetBinContent(6,21.1937);
   htmpaxis_copy__4->SetBinContent(7,19.20873);
   htmpaxis_copy__4->SetBinContent(8,12.54);
   htmpaxis_copy__4->SetBinContent(9,1.515392);
   htmpaxis_copy__4->SetBinContent(10,2.811755);
   htmpaxis_copy__4->SetBinContent(11,23.80292);
   htmpaxis_copy__4->SetBinContent(12,0.01847458);
   htmpaxis_copy__4->SetBinContent(13,0.3257827);
   htmpaxis_copy__4->SetBinContent(14,2.7604);
   htmpaxis_copy__4->SetBinContent(15,2.700127);
   htmpaxis_copy__4->SetBinContent(16,10.19347);
   htmpaxis_copy__4->SetBinContent(17,2.793345);
   htmpaxis_copy__4->SetBinContent(18,4.306308);
   htmpaxis_copy__4->SetBinContent(19,0.3260758);
   htmpaxis_copy__4->SetBinError(1,7.602043);
   htmpaxis_copy__4->SetBinError(2,2.283472);
   htmpaxis_copy__4->SetBinError(3,1.973187);
   htmpaxis_copy__4->SetBinError(4,2.88139);
   htmpaxis_copy__4->SetBinError(5,4.997063);
   htmpaxis_copy__4->SetBinError(6,2.313435);
   htmpaxis_copy__4->SetBinError(7,2.123042);
   htmpaxis_copy__4->SetBinError(8,2.060357);
   htmpaxis_copy__4->SetBinError(9,0.463425);
   htmpaxis_copy__4->SetBinError(10,0.8086624);
   htmpaxis_copy__4->SetBinError(11,4.495291);
   htmpaxis_copy__4->SetBinError(12,0.0291364);
   htmpaxis_copy__4->SetBinError(13,0.170642);
   htmpaxis_copy__4->SetBinError(14,1.123244);
   htmpaxis_copy__4->SetBinError(15,1.424986);
   htmpaxis_copy__4->SetBinError(16,0.5130189);
   htmpaxis_copy__4->SetBinError(17,0.3623646);
   htmpaxis_copy__4->SetBinError(18,0.407483);
   htmpaxis_copy__4->SetBinError(19,0.1193048);
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
