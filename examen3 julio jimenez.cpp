#include<windows.h>
#include<vcl.h>

int WINAPI WinMain (HINSTANCE Ins, HINSTANCE Insa, LPSTR cnd, int estado)

void __fastcall TForm1::MostrarClick(TObject *Sender){

     Hide( ); //Cerrar el primer formulario

     Form2->Show( );

     Form2->RecApe->Text=Apellido->Text;

     Form2->RecNom->Text=Nombre->Text;

     Form2->RecFec->Text=Dia->Text+"/"+Mes->Text+"/"+Axo->Text;

     Form2->RecSex->Text=Sexo->Text;

     Form2->RecCiv->Text=Civil->Text;

     Form2->RecTel->Text=Telefono->Text;

}

void __fastcall TForm2::RegresarClick(TObject *Sender){

    Close( ); // Cerrar el segundo formulario

    Form1->Show( );

}
