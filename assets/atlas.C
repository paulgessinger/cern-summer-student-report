{
   gROOT->LoadMacro("AtlasStyle.C");
   SetAtlasStyle();
   auto c1 = new TCanvas("c1", "fit residual simple");
   auto h1 = new TH1D("h1", "h1", 50, -5, 5);
   // ... fill h1 and fit it
   c1->Clear();

   auto more = new TGraphAsymmErrors();
   // ... build custom error band and style it
   
   auto rp = new TRatioPlot(h1);
   rp->Draw();
 
   // build plot
   auto p = rp->GetLowerPad();
   p->cd();
   p->Clear();
   auto fitres = rp->GetCalculationOutputGraph();
   more->Draw("IA3");
   fitres->Draw("P+same");  
}
