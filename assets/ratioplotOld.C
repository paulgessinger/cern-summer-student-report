void ratioplotOld( ) {
   // ... create h1 and h2
   TCanvas *c = new TCanvas("c", "canvas", 800, 800);
   TPad *pad1 = new TPad("pad1", "pad1", 0, 0.3, 1, 1.0);
   // ...
   pad1->Draw();           
   pad1->cd();            
   h1->SetStats(0);      
   h1->Draw();          
   h2->Draw("same");   

   h1->GetYaxis()->SetLabelSize(0.);
   TGaxis *axis = new TGaxis( -5, 20, -5, 220, 20,220,510,"");
   axis->SetLabelFont(43);
   axis->SetLabelSize(15);
   axis->Draw();

   c->cd();         
   TPad *pad2 = new TPad("pad2", "pad2", 0, 0.05, 1, 0.3);
   // ...
   pad2->Draw();
   pad2->cd();      

   TH1F *h3 = (TH1F*)h1->Clone("h3");
   // ...
   h3->Divide(h2);
   // ...
   h3->GetYaxis()->SetTitle("ratio h1/h2 ");
   h3->GetYaxis()->SetNdivisions(505);
   // ...
}
