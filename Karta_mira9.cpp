//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Karta_mira9.h"
#include "Karta_mira.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm9 *Form9;
//---------------------------------------------------------------------------
__fastcall TForm9::TForm9(TComponent* Owner)
	: TForm(Owner)
{
Edit1->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm9::Button2Click(TObject *Sender)
{
  Edit2->Clear();
  Edit2->Visible=true;
  Label4->Visible=true;
  Button6->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm9::Button3Click(TObject *Sender)
{
  Edit2->Clear();
  Edit2->Visible=true;
  Label4->Visible=true;
  Button7->Visible=true;

}
//---------------------------------------------------------------------------

void __fastcall TForm9::Button5Click(TObject *Sender)
{
   ADOQuery1->Close();
   ADOQuery1->SQL->Clear();
   ADOQuery1->SQL->Text = "SELECT Password FROM account where Username=:name";
   ADOQuery1->Parameters->ParamByName("name")->Value = Form1-> Edit1->Text;
   ADOQuery1->Open();
   ADOQuery1->First();

   if (Edit1->Text==ADOQuery1->FieldByName("Password")->AsString )
   {
	CheckBox1->State=cbChecked;
		UnicodeString msg = " Пароль введён верно";
		UnicodeString ttl = "";
		MessageBox(0, msg.c_str(), ttl.c_str(), MB_OK);
	Button1->Visible=true;
	Button2->Visible=true;
	Button3->Visible=true;
	  Label1->Visible=true;
	  CheckBox1->Visible=true;
	  Edit1->Visible=false;
	  Button5->Visible=false;
      Label3->Visible=true;
   }
   else
   {

	   UnicodeString msg = "Пароль введён не верно";
		UnicodeString ttl = "";
		MessageBox(0, msg.c_str(), ttl.c_str(), MB_OK);
	  //Application->Terminate();
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm9::Button6Click(TObject *Sender)
{
	try
	{
	   ADOQuery2->Close();
	   ADOQuery2->SQL->Clear();
	   ADOQuery2->SQL->Add("Update account set Password =:pass where Username=:login");
	   ADOQuery2->Parameters->ParamByName("pass")->Value =Edit2->Text;
	   ADOQuery2->Parameters->ParamByName("login")->Value =Form1->Edit1->Text;
	   ADOQuery2->ExecSQL();


		UnicodeString msg = "Пароль успешно изменён!";
		UnicodeString ttl = "";
		MessageBox(0, msg.c_str(), ttl.c_str(), MB_OK);

	  Edit2->Visible=false;
	  Label4->Visible=false;
	  Button6->Visible=false;
      Button7->Visible=false;
	  }
	  catch(...)
	  {

		UnicodeString msg = "Проверьте правильность  заполнения";
		UnicodeString ttl = "";
		MessageBox(0, msg.c_str(), ttl.c_str(), MB_OK);
	  }
}
//---------------------------------------------------------------------------

void __fastcall TForm9::Button7Click(TObject *Sender)
{
	try
	{
	   ADOQuery2->Close();
	   ADOQuery2->SQL->Clear();
	   ADOQuery2->SQL->Add("Update account set Username =:log where Username=:login");
	   ADOQuery2->Parameters->ParamByName("log")->Value =Edit2->Text;
	   ADOQuery2->Parameters->ParamByName("login")->Value =Form1->Edit1->Text;
	   ADOQuery2->ExecSQL();


		UnicodeString msg = "Логин успешно изменён!";
		UnicodeString ttl = "";
		MessageBox(0, msg.c_str(), ttl.c_str(), MB_OK);

	  Edit2->Visible=false;
	  Label4->Visible=false;
	  Button6->Visible=false;
	  Button7->Visible=false;
      Button6->Visible=false;

	  //ShowMessage("Перезайдите в сервис");
	   //Application->Terminate();
	}
	catch(...)
	{
		ShowMessage("Проверьте правильность  заполнения");
		}
}
//---------------------------------------------------------------------------



void __fastcall TForm9::Button1Click(TObject *Sender)
{
	  Form9->Close();
	  Button7->Visible=false;
	  Button6->Visible=false;
	  Edit2->Visible=false;

}
//---------------------------------------------------------------------------



