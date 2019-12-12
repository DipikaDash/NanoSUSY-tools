void std_pred_trad()
{
//=========Macro generated from canvas: c0/std_pred_trad
//=========  (Thu Nov 21 02:44:30 2019) by ROOT version6.10/09
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
   p1->Range(-3.8,-2.353351,19.95,9.425017);
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
   hbkgtotal__1->SetBinContent(1,487.1393);
   hbkgtotal__1->SetBinContent(2,28.17102);
   hbkgtotal__1->SetBinContent(3,9.400985);
   hbkgtotal__1->SetBinContent(4,0.4361746);
   hbkgtotal__1->SetBinContent(5,47.79711);
   hbkgtotal__1->SetBinContent(6,26.347);
   hbkgtotal__1->SetBinContent(7,14.53667);
   hbkgtotal__1->SetBinContent(8,6.891345);
   hbkgtotal__1->SetBinContent(9,7.818934);
   hbkgtotal__1->SetBinContent(11,1.44288);
   hbkgtotal__1->SetBinContent(13,0.3747692);
   hbkgtotal__1->SetBinContent(14,0.242176);
   hbkgtotal__1->SetBinContent(15,0.03231974);
   hbkgtotal__1->SetBinContent(16,31.13299);
   hbkgtotal__1->SetBinContent(17,0.3846781);
   hbkgtotal__1->SetBinContent(18,0.2476537);
   hbkgtotal__1->SetBinError(1,12.10333);
   hbkgtotal__1->SetBinError(2,3.862779);
   hbkgtotal__1->SetBinError(3,1.216812);
   hbkgtotal__1->SetBinError(4,0.4314363);
   hbkgtotal__1->SetBinError(5,5.366739);
   hbkgtotal__1->SetBinError(6,4.057237);
   hbkgtotal__1->SetBinError(7,2.345476);
   hbkgtotal__1->SetBinError(8,1.714991);
   hbkgtotal__1->SetBinError(9,3.75855);
   hbkgtotal__1->SetBinError(11,0.4757278);
   hbkgtotal__1->SetBinError(13,0.5922202);
   hbkgtotal__1->SetBinError(14,0.243347);
   hbkgtotal__1->SetBinError(15,0.03306529);
   hbkgtotal__1->SetBinError(16,1.684401);
   hbkgtotal__1->SetBinError(17,0.112199);
   hbkgtotal__1->SetBinError(18,0.02535761);
   hbkgtotal__1->SetMinimum(0.01);
   hbkgtotal__1->SetMaximum(1.766771e+08);
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
   qcd_pred_stack_stack_1->SetMinimum(0.1996971);
   qcd_pred_stack_stack_1->SetMaximum(798.7883);
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
   qcd_pred_stack_1->SetBinContent(1,487.1393);
   qcd_pred_stack_1->SetBinContent(2,28.17102);
   qcd_pred_stack_1->SetBinContent(3,9.400985);
   qcd_pred_stack_1->SetBinContent(4,0.4361746);
   qcd_pred_stack_1->SetBinContent(5,47.79711);
   qcd_pred_stack_1->SetBinContent(6,26.347);
   qcd_pred_stack_1->SetBinContent(7,14.53667);
   qcd_pred_stack_1->SetBinContent(8,6.891345);
   qcd_pred_stack_1->SetBinContent(9,7.818934);
   qcd_pred_stack_1->SetBinContent(11,1.44288);
   qcd_pred_stack_1->SetBinContent(13,0.3747692);
   qcd_pred_stack_1->SetBinContent(14,0.242176);
   qcd_pred_stack_1->SetBinContent(15,0.03231974);
   qcd_pred_stack_1->SetBinContent(16,31.13299);
   qcd_pred_stack_1->SetBinContent(17,0.3846781);
   qcd_pred_stack_1->SetBinContent(18,0.2476537);
   qcd_pred_stack_1->SetBinError(1,12.10333);
   qcd_pred_stack_1->SetBinError(2,3.862779);
   qcd_pred_stack_1->SetBinError(3,1.216812);
   qcd_pred_stack_1->SetBinError(4,0.4314363);
   qcd_pred_stack_1->SetBinError(5,5.366739);
   qcd_pred_stack_1->SetBinError(6,4.057237);
   qcd_pred_stack_1->SetBinError(7,2.345476);
   qcd_pred_stack_1->SetBinError(8,1.714991);
   qcd_pred_stack_1->SetBinError(9,3.75855);
   qcd_pred_stack_1->SetBinError(11,0.4757278);
   qcd_pred_stack_1->SetBinError(13,0.5922202);
   qcd_pred_stack_1->SetBinError(14,0.243347);
   qcd_pred_stack_1->SetBinError(15,0.03306529);
   qcd_pred_stack_1->SetBinError(16,1.684401);
   qcd_pred_stack_1->SetBinError(17,0.112199);
   qcd_pred_stack_1->SetBinError(18,0.02535761);
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
   487.1393,
   28.17102,
   9.400985,
   0.4361746,
   47.79711,
   26.347,
   14.53667,
   6.891345,
   7.818934,
   0,
   1.44288,
   0,
   0.3747692,
   0.242176,
   0.03231974,
   31.13299,
   0.3846781,
   0.2476537,
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
   12.10333,
   3.862779,
   1.216812,
   0.4314363,
   5.366739,
   4.057237,
   2.345476,
   1.714991,
   3.75855,
   0,
   0.4757278,
   0,
   0.5922202,
   0.243347,
   0.03306529,
   1.684401,
   0.112199,
   0.02535761,
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
   12.10333,
   3.862779,
   1.216812,
   0.4314363,
   5.366739,
   4.057237,
   2.345476,
   1.714991,
   3.75855,
   0,
   0.4757278,
   0,
   0.5922202,
   0.243347,
   0.03306529,
   1.684401,
   0.112199,
   0.02535761,
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
   Graph_Graph_from_hbkgtotal3001->SetMinimum(0.5491669);
   Graph_Graph_from_hbkgtotal3001->SetMaximum(549.1669);
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
   1028,
   54,
   31,
   2,
   205,
   136,
   41,
   27,
   21,
   16,
   57,
   1,
   2,
   2,
   2,
   15,
   0,
   5,
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
   0,
   0.5,
   0};
   Double_t Graph_from_data0_fely3002[19] = {
   32.05792,
   7.325785,
   5.537671,
   1.29183,
   14.30644,
   11.64779,
   6.377022,
   5.163869,
   4.545892,
   3.957873,
   7.527768,
   0.8272525,
   1.29183,
   1.29183,
   1.29183,
   3.829449,
   0,
   2.159724,
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
   0,
   0.5,
   0};
   Double_t Graph_from_data0_fehy3002[19] = {
   33.07355,
   8.394025,
   6.627738,
   2.63791,
   15.34145,
   12.69078,
   7.45534,
   6.260373,
   5.655298,
   5.083169,
   8.594187,
   2.29957,
   2.63791,
   2.63791,
   2.63791,
   4.958839,
   1.841055,
   3.382539,
   1.841055};
   grae = new TGraphAsymmErrors(19,Graph_from_data0_fx3002,Graph_from_data0_fy3002,Graph_from_data0_felx3002,Graph_from_data0_fehx3002,Graph_from_data0_fely3002,Graph_from_data0_fehy3002);
   grae->SetName("Graph_from_data0");
   grae->SetTitle("");
   grae->SetFillStyle(0);
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_data03002 = new TH1F("Graph_Graph_from_data03002","",100,0,20.35);
   Graph_Graph_from_data03002->SetMinimum(1.167181);
   Graph_Graph_from_data03002->SetMaximum(1167.181);
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
   TLatex *   tex = new TLatex(0.96,0.92,"13220.3 fb^{-1} (13 TeV)");
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
   hbkgtotal_copy__2->SetBinContent(1,487.1393);
   hbkgtotal_copy__2->SetBinContent(2,28.17102);
   hbkgtotal_copy__2->SetBinContent(3,9.400985);
   hbkgtotal_copy__2->SetBinContent(4,0.4361746);
   hbkgtotal_copy__2->SetBinContent(5,47.79711);
   hbkgtotal_copy__2->SetBinContent(6,26.347);
   hbkgtotal_copy__2->SetBinContent(7,14.53667);
   hbkgtotal_copy__2->SetBinContent(8,6.891345);
   hbkgtotal_copy__2->SetBinContent(9,7.818934);
   hbkgtotal_copy__2->SetBinContent(11,1.44288);
   hbkgtotal_copy__2->SetBinContent(13,0.3747692);
   hbkgtotal_copy__2->SetBinContent(14,0.242176);
   hbkgtotal_copy__2->SetBinContent(15,0.03231974);
   hbkgtotal_copy__2->SetBinContent(16,31.13299);
   hbkgtotal_copy__2->SetBinContent(17,0.3846781);
   hbkgtotal_copy__2->SetBinContent(18,0.2476537);
   hbkgtotal_copy__2->SetBinError(1,12.10333);
   hbkgtotal_copy__2->SetBinError(2,3.862779);
   hbkgtotal_copy__2->SetBinError(3,1.216812);
   hbkgtotal_copy__2->SetBinError(4,0.4314363);
   hbkgtotal_copy__2->SetBinError(5,5.366739);
   hbkgtotal_copy__2->SetBinError(6,4.057237);
   hbkgtotal_copy__2->SetBinError(7,2.345476);
   hbkgtotal_copy__2->SetBinError(8,1.714991);
   hbkgtotal_copy__2->SetBinError(9,3.75855);
   hbkgtotal_copy__2->SetBinError(11,0.4757278);
   hbkgtotal_copy__2->SetBinError(13,0.5922202);
   hbkgtotal_copy__2->SetBinError(14,0.243347);
   hbkgtotal_copy__2->SetBinError(15,0.03306529);
   hbkgtotal_copy__2->SetBinError(16,1.684401);
   hbkgtotal_copy__2->SetBinError(17,0.112199);
   hbkgtotal_copy__2->SetBinError(18,0.02535761);
   hbkgtotal_copy__2->SetMinimum(0.01);
   hbkgtotal_copy__2->SetMaximum(1.766771e+08);
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
   htmpaxis__3->SetBinContent(1,487.1393);
   htmpaxis__3->SetBinContent(2,28.17102);
   htmpaxis__3->SetBinContent(3,9.400985);
   htmpaxis__3->SetBinContent(4,0.4361746);
   htmpaxis__3->SetBinContent(5,47.79711);
   htmpaxis__3->SetBinContent(6,26.347);
   htmpaxis__3->SetBinContent(7,14.53667);
   htmpaxis__3->SetBinContent(8,6.891345);
   htmpaxis__3->SetBinContent(9,7.818934);
   htmpaxis__3->SetBinContent(11,1.44288);
   htmpaxis__3->SetBinContent(13,0.3747692);
   htmpaxis__3->SetBinContent(14,0.242176);
   htmpaxis__3->SetBinContent(15,0.03231974);
   htmpaxis__3->SetBinContent(16,31.13299);
   htmpaxis__3->SetBinContent(17,0.3846781);
   htmpaxis__3->SetBinContent(18,0.2476537);
   htmpaxis__3->SetBinError(1,12.10333);
   htmpaxis__3->SetBinError(2,3.862779);
   htmpaxis__3->SetBinError(3,1.216812);
   htmpaxis__3->SetBinError(4,0.4314363);
   htmpaxis__3->SetBinError(5,5.366739);
   htmpaxis__3->SetBinError(6,4.057237);
   htmpaxis__3->SetBinError(7,2.345476);
   htmpaxis__3->SetBinError(8,1.714991);
   htmpaxis__3->SetBinError(9,3.75855);
   htmpaxis__3->SetBinError(11,0.4757278);
   htmpaxis__3->SetBinError(13,0.5922202);
   htmpaxis__3->SetBinError(14,0.243347);
   htmpaxis__3->SetBinError(15,0.03306529);
   htmpaxis__3->SetBinError(16,1.684401);
   htmpaxis__3->SetBinError(17,0.112199);
   htmpaxis__3->SetBinError(18,0.02535761);
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
   2.110279,
   1.916863,
   3.297527,
   4.585319,
   4.288962,
   5.161879,
   2.820454,
   3.917958,
   2.685788,
   inf,
   39.50431,
   inf,
   5.336618,
   8.258456,
   61.88168,
   0.481804,
   0,
   20.18948,
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
   0.0658178,
   0.2608521,
   0.5922533,
   2.968055,
   0.2995541,
   0.4426274,
   0.4404808,
   0.7540113,
   0.586087,
   0,
   5.232474,
   0,
   3.429641,
   5.359583,
   40.02227,
   0.1244013,
   0,
   8.56464,
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
   0.0658178,
   0.2608521,
   0.5922533,
   6.090642,
   0.2995541,
   0.4426274,
   0.4404808,
   0.7540113,
   0.586087,
   0,
   5.232474,
   0,
   7.098967,
   10.67706,
   81.3136,
   0.1244013,
   4.86202,
   13.57372,
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
   0,
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
   0.02484572,
   0.1371189,
   0.1294345,
   0.9891367,
   0.1122817,
   0.1539924,
   0.161349,
   0.2488615,
   0.4806985,
   0,
   0.3297071,
   0,
   1.580226,
   1.004835,
   1.023068,
   0.0541034,
   0.2916699,
   0.1023914,
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
   0.02484572,
   0.1371189,
   0.1294345,
   0.9891367,
   0.1122817,
   0.1539924,
   0.161349,
   0.2488615,
   0.4806985,
   0,
   0.3297071,
   0,
   1.580226,
   1.004835,
   1.023068,
   0.0541034,
   0.2916699,
   0.1023914,
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
   Graph_Graph_from_hbkgtotal3004->SetMinimum(-0.8962717);
   Graph_Graph_from_hbkgtotal3004->SetMaximum(2.896272);
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
   htmpaxis_copy__4->SetBinContent(1,487.1393);
   htmpaxis_copy__4->SetBinContent(2,28.17102);
   htmpaxis_copy__4->SetBinContent(3,9.400985);
   htmpaxis_copy__4->SetBinContent(4,0.4361746);
   htmpaxis_copy__4->SetBinContent(5,47.79711);
   htmpaxis_copy__4->SetBinContent(6,26.347);
   htmpaxis_copy__4->SetBinContent(7,14.53667);
   htmpaxis_copy__4->SetBinContent(8,6.891345);
   htmpaxis_copy__4->SetBinContent(9,7.818934);
   htmpaxis_copy__4->SetBinContent(11,1.44288);
   htmpaxis_copy__4->SetBinContent(13,0.3747692);
   htmpaxis_copy__4->SetBinContent(14,0.242176);
   htmpaxis_copy__4->SetBinContent(15,0.03231974);
   htmpaxis_copy__4->SetBinContent(16,31.13299);
   htmpaxis_copy__4->SetBinContent(17,0.3846781);
   htmpaxis_copy__4->SetBinContent(18,0.2476537);
   htmpaxis_copy__4->SetBinError(1,12.10333);
   htmpaxis_copy__4->SetBinError(2,3.862779);
   htmpaxis_copy__4->SetBinError(3,1.216812);
   htmpaxis_copy__4->SetBinError(4,0.4314363);
   htmpaxis_copy__4->SetBinError(5,5.366739);
   htmpaxis_copy__4->SetBinError(6,4.057237);
   htmpaxis_copy__4->SetBinError(7,2.345476);
   htmpaxis_copy__4->SetBinError(8,1.714991);
   htmpaxis_copy__4->SetBinError(9,3.75855);
   htmpaxis_copy__4->SetBinError(11,0.4757278);
   htmpaxis_copy__4->SetBinError(13,0.5922202);
   htmpaxis_copy__4->SetBinError(14,0.243347);
   htmpaxis_copy__4->SetBinError(15,0.03306529);
   htmpaxis_copy__4->SetBinError(16,1.684401);
   htmpaxis_copy__4->SetBinError(17,0.112199);
   htmpaxis_copy__4->SetBinError(18,0.02535761);
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
