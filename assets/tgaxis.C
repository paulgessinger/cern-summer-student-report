{
   Double_t pi = TMath::Pi();
   TF1*   f = new TF1("f","TMath::Cos(x/TMath::Pi())", -pi, pi);
   TH1*   h = f->GetHistogram();
   TAxis* a = h->GetXaxis();
   a->SetNdivisions(-502);
   a->ChangeLabel(1,-1,-1,-1,-1,-1,"-#pi");
   a->ChangeLabel(-1,-1,-1,-1,-1,-1,"#pi");
   f->Draw();
}
