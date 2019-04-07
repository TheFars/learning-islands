//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Karta_mira.h"
#include "Karta_mira2.h"
#include "Karta_mira3.h"
#include "Karta_mira9.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int a = 0;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
	Form1->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	TForm2 *Form = new TForm2(this);
	Form->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{

	if (Edit1->Text.IsEmpty()|| Edit2->Text.IsEmpty())
	{
		UnicodeString msg = "Заполните все поля для успешного входа";
		UnicodeString ttl = "";
		MessageBox(0, msg.c_str(), ttl.c_str(), MB_OK);
		a = 1;

	}
	else if (a != 1)  //DATABASE CHECK
		{
			   ADOQuery1->Close();
			   ADOQuery1->SQL->Clear();
			   ADOQuery1->SQL->Text = "SELECT Username FROM account";
			   ADOQuery1->Open();
			   ADOQuery1->First();
		while(!ADOQuery1->Eof)
		{
		   if (Edit1->Text == ADOQuery1->FieldByName("Username")->AsString)
		   {

					   a = 2;

		   }
			  ADOQuery1->Next();

}

		 }
  if (a == 2)
   {
	   ADOQuery1->Close();
	   ADOQuery1->SQL->Clear();
	   ADOQuery1->SQL->Text = "SELECT Password FROM account where Username=:name";
	   ADOQuery1->Parameters->ParamByName("name") ->Value = Edit1->Text;
	   ADOQuery1->Open();
	   ADOQuery1->First();
	  while(!ADOQuery1->Eof)
	{
	   if (Edit2->Text == ADOQuery1->FieldByName("Password")->AsString)
	   {

        UnicodeString msg = "Вход выполнен успешно";
		UnicodeString ttl = "";
		MessageBox(0, msg.c_str(), ttl.c_str(), MB_OK);
		a = 3;
        break;
	   }

		ADOQuery1->Next();



	 }
  }
	 if (a == 3)
		 {
		 		TForm3 *Form = new TForm3(this);
				Form->ShowModal();
		 }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button4Click(TObject *Sender)
{
	Form9->ShowModal();
}
//---------------------------------------------------------------------------

