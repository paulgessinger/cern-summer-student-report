{
   auto c1 = new TCanvas();

   auto h1 = new TH1D("h1", "", 100, -5, 5);
   auto h2 = new TH1D("h2", "", 100, -5, 5);
   auto h3 = new TH1D("h3", "", 100, -5, 5);

   // ... fill and style h1, h2 and h3

   auto stack = new THStack();
   stack->Add(h1);
   stack->Add(h2);

   auto rp = new TRatioPlot(stack, h3, "divsym"); 
   rp->Draw();
}
