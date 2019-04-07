//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Karta_mira6.h"
#include "Karta_mira3.h"
#include "Karta_mira.h"
#include <jpeg.hpp>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
  Edit1->Text = Form1->Edit1->Text;

}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button1Click(TObject *Sender)
{
	this->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Image3Click(TObject *Sender)
{
  Image3->Picture->LoadFromFile("C:\\Image\\mid.jpg");
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Image2Click(TObject *Sender)
{
 Image2->Picture->LoadFromFile("C:\\Image\\Lp.jpg");
}
//---------------------------------------------------------------------------




void __fastcall TForm6::Image5Click(TObject *Sender)
{
 Image5->Picture->LoadFromFile("C:\\Image\\sword.jpg");
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Image6Click(TObject *Sender)
{
	Image6->Picture->LoadFromFile("C:\\Image\\head.jpg");
}
//---------------------------------------------------------------------------


void __fastcall TForm6::Image7Click(TObject *Sender)
{
 Image7->Picture->LoadFromFile("C:\\Image\\boot.jpg");
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Image8Click(TObject *Sender)
{
	Image8->Picture->LoadFromFile("C:\\Image\\eat.jpg");
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Image9Click(TObject *Sender)
{
	 Image9->Picture->LoadFromFile("C:\\Image\\pl.jpg");
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Image4Click(TObject *Sender)
{
   Image4->Picture->LoadFromFile("C:\\Image\\Rp.jpg");
}
//---------------------------------------------------------------------------


void __fastcall TForm6::Image11Click(TObject *Sender)
{
	 Image11->Picture->LoadFromFile("C:\\Image\\art.jpg");
}
//---------------------------------------------------------------------------

