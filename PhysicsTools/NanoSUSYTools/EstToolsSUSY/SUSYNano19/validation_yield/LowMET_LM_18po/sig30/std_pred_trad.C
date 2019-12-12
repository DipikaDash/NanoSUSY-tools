void std_pred_trad()
{
//=========Macro generated from canvas: c0/std_pred_trad
//=========  (Fri Nov 15 12:04:26 2019) by ROOT version6.10/09
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
   p1->Range(-3.8,-2.365977,19.95,9.83326);
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
   hbkgtotal__1->SetBinContent(1,664.3756);
   hbkgtotal__1->SetBinContent(2,32.81244);
   hbkgtotal__1->SetBinContent(3,35.2028);
   hbkgtotal__1->SetBinContent(4,1.195831);
   hbkgtotal__1->SetBinContent(5,110.2634);
   hbkgtotal__1->SetBinContent(6,31.59215);
   hbkgtotal__1->SetBinContent(7,34.27352);
   hbkgtotal__1->SetBinContent(8,27.20271);
   hbkgtotal__1->SetBinContent(9,4.691198);
   hbkgtotal__1->SetBinContent(10,3.522274);
   hbkgtotal__1->SetBinContent(11,43.17435);
   hbkgtotal__1->SetBinContent(13,0.8727171);
   hbkgtotal__1->SetBinContent(14,8.377197);
   hbkgtotal__1->SetBinContent(15,0.5608116);
   hbkgtotal__1->SetBinContent(16,17.97798);
   hbkgtotal__1->SetBinContent(17,4.557761);
   hbkgtotal__1->SetBinContent(18,8.154857);
   hbkgtotal__1->SetBinContent(19,0.5932969);
   hbkgtotal__1->SetBinError(1,10.76986);
   hbkgtotal__1->SetBinError(2,3.117229);
   hbkgtotal__1->SetBinError(3,2.973063);
   hbkgtotal__1->SetBinError(4,1.200774);
   hbkgtotal__1->SetBinError(5,7.538696);
   hbkgtotal__1->SetBinError(6,2.990596);
   hbkgtotal__1->SetBinError(7,3.014703);
   hbkgtotal__1->SetBinError(8,3.298944);
   hbkgtotal__1->SetBinError(9,1.120845);
   hbkgtotal__1->SetBinError(10,0.875702);
   hbkgtotal__1->SetBinError(11,8.024866);
   hbkgtotal__1->SetBinError(13,0.2708649);
   hbkgtotal__1->SetBinError(14,2.257968);
   hbkgtotal__1->SetBinError(15,0.3710389);
   hbkgtotal__1->SetBinError(16,1.004118);
   hbkgtotal__1->SetBinError(17,0.6574496);
   hbkgtotal__1->SetBinError(18,0.7683138);
   hbkgtotal__1->SetBinError(19,0.2156778);
   hbkgtotal__1->SetMinimum(0.01);
   hbkgtotal__1->SetMaximum(4.105221e+08);
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
   qcd_pred_stack_stack_1->SetMinimum(0.2700582);
   qcd_pred_stack_stack_1->SetMaximum(1080.233);
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
   qcd_pred_stack_1->SetBinContent(1,664.3756);
   qcd_pred_stack_1->SetBinContent(2,32.81244);
   qcd_pred_stack_1->SetBinContent(3,35.2028);
   qcd_pred_stack_1->SetBinContent(4,1.195831);
   qcd_pred_stack_1->SetBinContent(5,110.2634);
   qcd_pred_stack_1->SetBinContent(6,31.59215);
   qcd_pred_stack_1->SetBinContent(7,34.27352);
   qcd_pred_stack_1->SetBinContent(8,27.20271);
   qcd_pred_stack_1->SetBinContent(9,4.691198);
   qcd_pred_stack_1->SetBinContent(10,3.522274);
   qcd_pred_stack_1->SetBinContent(11,43.17435);
   qcd_pred_stack_1->SetBinContent(13,0.8727171);
   qcd_pred_stack_1->SetBinContent(14,8.377197);
   qcd_pred_stack_1->SetBinContent(15,0.5608116);
   qcd_pred_stack_1->SetBinContent(16,17.97798);
   qcd_pred_stack_1->SetBinContent(17,4.557761);
   qcd_pred_stack_1->SetBinContent(18,8.154857);
   qcd_pred_stack_1->SetBinContent(19,0.5932969);
   qcd_pred_stack_1->SetBinError(1,10.76986);
   qcd_pred_stack_1->SetBinError(2,3.117229);
   qcd_pred_stack_1->SetBinError(3,2.973063);
   qcd_pred_stack_1->SetBinError(4,1.200774);
   qcd_pred_stack_1->SetBinError(5,7.538696);
   qcd_pred_stack_1->SetBinError(6,2.990596);
   qcd_pred_stack_1->SetBinError(7,3.014703);
   qcd_pred_stack_1->SetBinError(8,3.298944);
   qcd_pred_stack_1->SetBinError(9,1.120845);
   qcd_pred_stack_1->SetBinError(10,0.875702);
   qcd_pred_stack_1->SetBinError(11,8.024866);
   qcd_pred_stack_1->SetBinError(13,0.2708649);
   qcd_pred_stack_1->SetBinError(14,2.257968);
   qcd_pred_stack_1->SetBinError(15,0.3710389);
   qcd_pred_stack_1->SetBinError(16,1.004118);
   qcd_pred_stack_1->SetBinError(17,0.6574496);
   qcd_pred_stack_1->SetBinError(18,0.7683138);
   qcd_pred_stack_1->SetBinError(19,0.2156778);
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
   664.3756,
   32.81244,
   35.2028,
   1.195831,
   110.2634,
   31.59215,
   34.27352,
   27.20271,
   4.691198,
   3.522274,
   43.17435,
   0,
   0.8727171,
   8.377197,
   0.5608116,
   17.97798,
   4.557761,
   8.154857,
   0.5932969};
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
   10.76986,
   3.117229,
   2.973063,
   1.200774,
   7.538696,
   2.990596,
   3.014703,
   3.298944,
   1.120845,
   0.875702,
   8.024866,
   0,
   0.2708649,
   2.257968,
   0.3710389,
   1.004118,
   0.6574496,
   0.7683138,
   0.2156778};
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
   10.76986,
   3.117229,
   2.973063,
   1.200774,
   7.538696,
   2.990596,
   3.014703,
   3.298944,
   1.120845,
   0.875702,
   8.024866,
   0,
   0.2708649,
   2.257968,
   0.3710389,
   1.004118,
   0.6574496,
   0.7683138,
   0.2156778};
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
   Graph_Graph_from_hbkgtotal3001->SetMinimum(0.74266);
   Graph_Graph_from_hbkgtotal3001->SetMaximum(742.66);
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
   2414,
   81,
   92,
   6,
   653,
   425,
   71,
   42,
   35,
   67,
   134,
   6,
   5,
   23,
   6,
   29,
   3,
   12,
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
   49.13013,
   8.981565,
   9.574395,
   2.379969,
   25.54787,
   20.60786,
   8.406427,
   6.454957,
   5.887788,
   8.165035,
   11.56162,
   2.379969,
   2.159724,
   4.760806,
   2.379969,
   5.354034,
   1.632727,
   3.415326,
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
   50.14034,
   10.03728,
   10.62667,
   3.583712,
   26.56749,
   21.63217,
   9.465934,
   7.532337,
   6.972554,
   9.226295,
   12.60492,
   3.583712,
   3.382539,
   5.865355,
   3.583712,
   6.447153,
   2.918242,
   4.559911,
   2.29957};
   grae = new TGraphAsymmErrors(19,Graph_from_data0_fx3002,Graph_from_data0_fy3002,Graph_from_data0_felx3002,Graph_from_data0_fehx3002,Graph_from_data0_fely3002,Graph_from_data0_fehy3002);
   grae->SetName("Graph_from_data0");
   grae->SetTitle("");
   grae->SetFillStyle(0);
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_data03002 = new TH1F("Graph_Graph_from_data03002","",100,0,20.9);
   Graph_Graph_from_data03002->SetMinimum(0.1554728);
   Graph_Graph_from_data03002->SetMaximum(2710.537);
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
   TLatex *   tex = new TLatex(0.96,0.92,"38630.9 fb^{-1} (13 TeV)");
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
   hbkgtotal_copy__2->SetBinContent(1,664.3756);
   hbkgtotal_copy__2->SetBinContent(2,32.81244);
   hbkgtotal_copy__2->SetBinContent(3,35.2028);
   hbkgtotal_copy__2->SetBinContent(4,1.195831);
   hbkgtotal_copy__2->SetBinContent(5,110.2634);
   hbkgtotal_copy__2->SetBinContent(6,31.59215);
   hbkgtotal_copy__2->SetBinContent(7,34.27352);
   hbkgtotal_copy__2->SetBinContent(8,27.20271);
   hbkgtotal_copy__2->SetBinContent(9,4.691198);
   hbkgtotal_copy__2->SetBinContent(10,3.522274);
   hbkgtotal_copy__2->SetBinContent(11,43.17435);
   hbkgtotal_copy__2->SetBinContent(13,0.8727171);
   hbkgtotal_copy__2->SetBinContent(14,8.377197);
   hbkgtotal_copy__2->SetBinContent(15,0.5608116);
   hbkgtotal_copy__2->SetBinContent(16,17.97798);
   hbkgtotal_copy__2->SetBinContent(17,4.557761);
   hbkgtotal_copy__2->SetBinContent(18,8.154857);
   hbkgtotal_copy__2->SetBinContent(19,0.5932969);
   hbkgtotal_copy__2->SetBinError(1,10.76986);
   hbkgtotal_copy__2->SetBinError(2,3.117229);
   hbkgtotal_copy__2->SetBinError(3,2.973063);
   hbkgtotal_copy__2->SetBinError(4,1.200774);
   hbkgtotal_copy__2->SetBinError(5,7.538696);
   hbkgtotal_copy__2->SetBinError(6,2.990596);
   hbkgtotal_copy__2->SetBinError(7,3.014703);
   hbkgtotal_copy__2->SetBinError(8,3.298944);
   hbkgtotal_copy__2->SetBinError(9,1.120845);
   hbkgtotal_copy__2->SetBinError(10,0.875702);
   hbkgtotal_copy__2->SetBinError(11,8.024866);
   hbkgtotal_copy__2->SetBinError(13,0.2708649);
   hbkgtotal_copy__2->SetBinError(14,2.257968);
   hbkgtotal_copy__2->SetBinError(15,0.3710389);
   hbkgtotal_copy__2->SetBinError(16,1.004118);
   hbkgtotal_copy__2->SetBinError(17,0.6574496);
   hbkgtotal_copy__2->SetBinError(18,0.7683138);
   hbkgtotal_copy__2->SetBinError(19,0.2156778);
   hbkgtotal_copy__2->SetMinimum(0.01);
   hbkgtotal_copy__2->SetMaximum(4.105221e+08);
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
   htmpaxis__3->SetBinContent(1,664.3756);
   htmpaxis__3->SetBinContent(2,32.81244);
   htmpaxis__3->SetBinContent(3,35.2028);
   htmpaxis__3->SetBinContent(4,1.195831);
   htmpaxis__3->SetBinContent(5,110.2634);
   htmpaxis__3->SetBinContent(6,31.59215);
   htmpaxis__3->SetBinContent(7,34.27352);
   htmpaxis__3->SetBinContent(8,27.20271);
   htmpaxis__3->SetBinContent(9,4.691198);
   htmpaxis__3->SetBinContent(10,3.522274);
   htmpaxis__3->SetBinContent(11,43.17435);
   htmpaxis__3->SetBinContent(13,0.8727171);
   htmpaxis__3->SetBinContent(14,8.377197);
   htmpaxis__3->SetBinContent(15,0.5608116);
   htmpaxis__3->SetBinContent(16,17.97798);
   htmpaxis__3->SetBinContent(17,4.557761);
   htmpaxis__3->SetBinContent(18,8.154857);
   htmpaxis__3->SetBinContent(19,0.5932969);
   htmpaxis__3->SetBinError(1,10.76986);
   htmpaxis__3->SetBinError(2,3.117229);
   htmpaxis__3->SetBinError(3,2.973063);
   htmpaxis__3->SetBinError(4,1.200774);
   htmpaxis__3->SetBinError(5,7.538696);
   htmpaxis__3->SetBinError(6,2.990596);
   htmpaxis__3->SetBinError(7,3.014703);
   htmpaxis__3->SetBinError(8,3.298944);
   htmpaxis__3->SetBinError(9,1.120845);
   htmpaxis__3->SetBinError(10,0.875702);
   htmpaxis__3->SetBinError(11,8.024866);
   htmpaxis__3->SetBinError(13,0.2708649);
   htmpaxis__3->SetBinError(14,2.257968);
   htmpaxis__3->SetBinError(15,0.3710389);
   htmpaxis__3->SetBinError(16,1.004118);
   htmpaxis__3->SetBinError(17,0.6574496);
   htmpaxis__3->SetBinError(18,0.7683138);
   htmpaxis__3->SetBinError(19,0.2156778);
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
   3.633487,
   2.468576,
   2.613429,
   5.01743,
   5.922183,
   13.45271,
   2.07157,
   1.543964,
   7.460781,
   19.0218,
   3.103695,
   inf,
   5.729233,
   2.745548,
   10.69878,
   1.613084,
   0.6582179,
   1.471516,
   1.685497};
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
   0.07395286,
   0.2742862,
   0.2724688,
   1.977381,
   0.2317529,
   0.6525522,
   0.2458501,
   0.2382388,
   1.261102,
   2.323883,
   0.2681184,
   0,
   2.456757,
   0.5724864,
   4.147726,
   0.2995422,
   0.3499759,
   0.42479,
   1.405487};
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
   0.07395286,
   0.2742862,
   0.2724688,
   3.071969,
   0.2317529,
   0.6525522,
   0.2458501,
   0.2382388,
   1.261102,
   2.323883,
   0.2681184,
   0,
   3.868686,
   0.5724864,
   6.411496,
   0.2995422,
   0.6432359,
   0.42479,
   3.853327};
   grae = new TGraphAsymmErrors(19,Graph_from_data3_fx3003,Graph_from_data3_fy3003,Graph_from_data3_felx3003,Graph_from_data3_fehx3003,Graph_from_data3_fely3003,Graph_from_data3_fehy3003);
   grae->SetName("Graph_from_data3");
   grae->SetTitle("");
   grae->SetLineStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_from_data33003 = new TH1F("Graph_Graph_from_data33003","",100,0,20.9);
   Graph_Graph_from_data33003->SetMinimum(0.252009);
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
   0.0162105,
   0.09500143,
   0.08445531,
   1.004134,
   0.06836989,
   0.09466262,
   0.08796012,
   0.1212726,
   0.2389251,
   0.2486184,
   0.1858711,
   0,
   0.3103696,
   0.2695375,
   0.6616107,
   0.05585267,
   0.1442484,
   0.09421549,
   0.3635243};
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
   0.0162105,
   0.09500143,
   0.08445531,
   1.004134,
   0.06836989,
   0.09466262,
   0.08796012,
   0.1212726,
   0.2389251,
   0.2486184,
   0.1858711,
   0,
   0.3103696,
   0.2695375,
   0.6616107,
   0.05585267,
   0.1442484,
   0.09421549,
   0.3635243};
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
   Graph_Graph_from_hbkgtotal3004->SetMinimum(-0.2049603);
   Graph_Graph_from_hbkgtotal3004->SetMaximum(2.20496);
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
   htmpaxis_copy__4->SetBinContent(1,664.3756);
   htmpaxis_copy__4->SetBinContent(2,32.81244);
   htmpaxis_copy__4->SetBinContent(3,35.2028);
   htmpaxis_copy__4->SetBinContent(4,1.195831);
   htmpaxis_copy__4->SetBinContent(5,110.2634);
   htmpaxis_copy__4->SetBinContent(6,31.59215);
   htmpaxis_copy__4->SetBinContent(7,34.27352);
   htmpaxis_copy__4->SetBinContent(8,27.20271);
   htmpaxis_copy__4->SetBinContent(9,4.691198);
   htmpaxis_copy__4->SetBinContent(10,3.522274);
   htmpaxis_copy__4->SetBinContent(11,43.17435);
   htmpaxis_copy__4->SetBinContent(13,0.8727171);
   htmpaxis_copy__4->SetBinContent(14,8.377197);
   htmpaxis_copy__4->SetBinContent(15,0.5608116);
   htmpaxis_copy__4->SetBinContent(16,17.97798);
   htmpaxis_copy__4->SetBinContent(17,4.557761);
   htmpaxis_copy__4->SetBinContent(18,8.154857);
   htmpaxis_copy__4->SetBinContent(19,0.5932969);
   htmpaxis_copy__4->SetBinError(1,10.76986);
   htmpaxis_copy__4->SetBinError(2,3.117229);
   htmpaxis_copy__4->SetBinError(3,2.973063);
   htmpaxis_copy__4->SetBinError(4,1.200774);
   htmpaxis_copy__4->SetBinError(5,7.538696);
   htmpaxis_copy__4->SetBinError(6,2.990596);
   htmpaxis_copy__4->SetBinError(7,3.014703);
   htmpaxis_copy__4->SetBinError(8,3.298944);
   htmpaxis_copy__4->SetBinError(9,1.120845);
   htmpaxis_copy__4->SetBinError(10,0.875702);
   htmpaxis_copy__4->SetBinError(11,8.024866);
   htmpaxis_copy__4->SetBinError(13,0.2708649);
   htmpaxis_copy__4->SetBinError(14,2.257968);
   htmpaxis_copy__4->SetBinError(15,0.3710389);
   htmpaxis_copy__4->SetBinError(16,1.004118);
   htmpaxis_copy__4->SetBinError(17,0.6574496);
   htmpaxis_copy__4->SetBinError(18,0.7683138);
   htmpaxis_copy__4->SetBinError(19,0.2156778);
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
