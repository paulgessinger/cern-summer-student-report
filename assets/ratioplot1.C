void ratioplot1() {
   gStyle->SetOptStat(0);
   TH1D *h1 = new TH1D("h1", "", 100, -5, 5);
   TH1D *h2 = new TH1D("h2", "h2", 100, -5, 5);
   h1->FillRandom("gaus");
   h2->FillRandom("gaus");
   
   h1->SetLineColor(kBlue+1);
   h1->SetLineWidth(2);
   
   h2->SetLineColor(kRed);
   h2->SetLineWidth(2);
   
   TCanvas *c1 = new TCanvas("c", "canvas", 800, 800);
   auto rp = new TRatioPlot(h1, h2, "pois midp");
   rp->SetH2DrawOpt("hist");
   rp->SetSeparationMargin(0);
   rp->Draw();

   rp->GetLowerRefGraph()->SetMinimum(0.8);
   rp->GetLowerRefGraph()->SetMaximum(1.35);
   rp->GetLowerRefGraph()->SetLineColor(kBlack);
   rp->GetLowerRefYaxis()->SetTitle("ratio h1/h2");
   rp->GetLowerRefYaxis()->SetTitleOffset(1.3);
   rp->GetUpperRefYaxis()->SetTitleOffset(1.3);
}
