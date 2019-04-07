//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Karta_mira2.h"
#include "Karta_mira.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
int a = 0;

//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button2Click(TObject *Sender)
{
	this->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
try
{
   if (Edit1->Text.IsEmpty()|| Edit2->Text.IsEmpty() || Edit3->Text.IsEmpty() || Edit4->Text.IsEmpty())
   {
		UnicodeString msg = "Заполните все поля для успешной регистрации";
		UnicodeString ttl = "";
		MessageBox(0, msg.c_str(), ttl.c_str(), MB_OK);

   }
   else if (Edit3->Text != Edit4->Text)
		{
			UnicodeString msg1 = "Пароли не совпадают!";
			UnicodeString ttl1 = "";
			MessageBox(0, msg1.c_str(), ttl1.c_str(), MB_OK);

		}
		 ///Testing name
			   ADOQuery1->Close();
			   ADOQuery1->SQL->Clear();
			   ADOQuery1->SQL->Text = "SELECT Username FROM account";
			   ADOQuery1->Open();
			   ADOQuery1->First();
		while(!ADOQuery1->Eof)
		{
		   if (Edit2->Text == ADOQuery1->FieldByName("Username")->AsString)
		   {
			a = 1;
            UnicodeString msg1 = "Данное имя уже занято!!!";
			UnicodeString ttl1 = "";
			MessageBox(0, msg1.c_str(), ttl1.c_str(), MB_OK);

		   }
			  ADOQuery1->Next();
		}

		if (a != 1)
		{
			   ADOQuery1->Close();
			   ADOQuery1->SQL->Clear();
			   ADOQuery1->SQL->Add( "INSERT INTO account (Email,Username,Password)");
			   ADOQuery1->SQL->Add("VALUES (:Email,:Username,:Password)");
			   ADOQuery1->Parameters->ParamByName("Email")->Value=Edit1->Text;
			   ADOQuery1->Parameters->ParamByName("Username")->Value=Edit2->Text;
			   ADOQuery1->Parameters->ParamByName("Password")->Value=Edit3->Text;
			   ADOQuery1->ExecSQL();
			   UnicodeString msg = "Вы успешно зарегистрированы";
			   UnicodeString ttl = "";
			   MessageBox(0, msg.c_str(), ttl.c_str(), MB_OK);
				/*UnicodeString msg1 = "Пользователь с таким именем или E-Mail уже существует";
				UnicodeString ttl1 = "";
				MessageBox(0, msg1.c_str(), ttl1.c_str(), MB_OK);*/
				this->Close();
		}

}
catch(...)
{
  ShowMessage("Перепроверьте все поля.Возможно данный пользователь уже существует!");
}

}

//---------------------------------------------------------------------------
