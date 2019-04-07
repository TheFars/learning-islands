//---------------------------------------------------------------------------
      //iur
#include <vcl.h>
#pragma hdrstop

#include "Karta_mira3.h"
#include "Karta_mira4.h"
#include "Karta_mira5.h"
#include "Karta_mira7.h" //subject to change
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{

}
	extern int level;
//---------------------------------------------------------------------------

void __fastcall TForm4::Label1Click(TObject *Sender)
{
	extern UnicodeString mystr;
   //lvl1passed = true;
   level = 1;
   //Label1->Font->Color = clYellow;
   mystr = "Karta_mira\\island1lvl1.txt";
   TForm5 *Form = new TForm5(this);
   Form->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button1Click(TObject *Sender)
{
   this->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Label5Click(TObject *Sender)
{
	if (level < 1)
	{
	  UnicodeString msg1 = "Пройдите все предыдущие уроки, чтобы открыть этот урок";
	  UnicodeString ttl1 = "";
	  MessageBox(0, msg1.c_str(), ttl1.c_str(), MB_OK);
	}
	else
	{
		 extern UnicodeString mystr;
		 //Label5->Font->Color = clYellow;
		 //lvl2passed = true; //subject to change
		 //level++;
		mystr = "Karta_mira\\island1lvl2.txt";
		TForm7 *Form = new TForm7(this);
		Form->ShowModal();

	}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Label2Click(TObject *Sender)
{
	if (level < 2)
	{
	  UnicodeString msg1 = "Пройдите все предыдущие уроки, чтобы открыть этот урок";
	  UnicodeString ttl1 = "";
	  MessageBox(0, msg1.c_str(), ttl1.c_str(), MB_OK);
	}
	else
	{
		extern UnicodeString mystr;
	   //lvl3passed = true;
	   level = 3;
	   //Label2->Font->Color = clYellow;
	   mystr = "Karta_mira\\island1lvl3.txt";
	   TForm5 *Form = new TForm5(this);
	   Form->ShowModal();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Label6Click(TObject *Sender)
{
	if (level < 3)
	{
	  UnicodeString msg1 = "Пройдите все предыдущие уроки, чтобы открыть этот урок";
	  UnicodeString ttl1 = "";
	  MessageBox(0, msg1.c_str(), ttl1.c_str(), MB_OK);
	}
    else
	{
		 extern UnicodeString mystr;
		 //Label6->Font->Color = clYellow;
		mystr = "Karta_mira\\island1lvl4.txt";
		TForm7 *Form = new TForm7(this);
		Form->ShowModal();
		//lvl4passed = true; //subject to change
		//level++;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Label4Click(TObject *Sender)
{
	if (level < 4)
	{
	  UnicodeString msg1 = "Пройдите все предыдущие уроки, чтобы открыть этот урок";
	  UnicodeString ttl1 = "";
	  MessageBox(0, msg1.c_str(), ttl1.c_str(), MB_OK);
	}
	else
	{
		extern UnicodeString mystr;
	   //lvl5passed = true;
	   level = 5;
	   //Label4->Font->Color = clYellow;
	   mystr = "Karta_mira\\island1lvl5.txt";
	   TForm5 *Form = new TForm5(this);
	   Form->ShowModal();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Label7Click(TObject *Sender)
{
	if (level < 5)
	{
	  UnicodeString msg1 = "Пройдите все предыдущие уроки, чтобы открыть этот урок";
	  UnicodeString ttl1 = "";
	  MessageBox(0, msg1.c_str(), ttl1.c_str(), MB_OK);
	}
    else
	{
		 extern UnicodeString mystr;
		// Label7->Font->Color = clYellow;
		mystr = "Karta_mira\\island1lvl6.txt";
		TForm7 *Form = new TForm7(this);
		Form->ShowModal();
		//lvl6passed = true; //subject to change
	   //	level++;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Label3Click(TObject *Sender)
{
	if (level < 6)
	{
	  UnicodeString msg1 = "Пройдите все предыдущие уроки, чтобы открыть этот урок";
	  UnicodeString ttl1 = "";
	  MessageBox(0, msg1.c_str(), ttl1.c_str(), MB_OK);
	}
	else
	{
		extern UnicodeString mystr;
	   //lvl7passed = true;
	   level = 7;
	   //Label3->Font->Color = clYellow;
	   mystr = "Karta_mira\\island1lvl7.txt";
	   TForm5 *Form = new TForm5(this);
	   Form->ShowModal();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Label8Click(TObject *Sender)
{
	if (level < 7)
	{
	  UnicodeString msg1 = "Пройдите все предыдущие уроки, чтобы открыть этот урок";
	  UnicodeString ttl1 = "";
	  MessageBox(0, msg1.c_str(), ttl1.c_str(), MB_OK);
	}
    else
	{
		 extern UnicodeString mystr;
		// Label8->Font->Color = clYellow;
		mystr = "Karta_mira\\island1lvl8.txt";
		TForm7 *Form = new TForm7(this);
		Form->ShowModal();
		//lvl8passed = true; //subject to change
		//level++;
	}

}
//---------------------------------------------------------------------------

void __fastcall TForm4::Label9Click(TObject *Sender)
{
	if (level < 8)
	{
	  UnicodeString msg1 = "Пройдите все предыдущие уроки, чтобы открыть этот урок";
	  UnicodeString ttl1 = "";
	  MessageBox(0, msg1.c_str(), ttl1.c_str(), MB_OK);
	}
	else
	{
		extern UnicodeString mystr;
	   //lvl9passed = true;
	   level = 9;
	  // Label9->Font->Color = clYellow;
	   mystr = "Karta_mira\\island1lvl9.txt";
	   TForm5 *Form = new TForm5(this);
	   Form->ShowModal();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Label10Click(TObject *Sender)
{
	if (level < 9)
	{
	  UnicodeString msg1 = "Пройдите все предыдущие уроки, чтобы открыть этот урок";
	  UnicodeString ttl1 = "";
	  MessageBox(0, msg1.c_str(), ttl1.c_str(), MB_OK);
	}
	else
	{
		 extern UnicodeString mystr;
		// Label10->Font->Color = clYellow;
		mystr = "Karta_mira\\island1lvl10.txt";
		TForm7 *Form = new TForm7(this);
		Form->ShowModal();
		//lvl10passed = true; //subject to change
		//level++;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Label11Click(TObject *Sender)
{
	if (level < 10)
	{
	  UnicodeString msg1 = "Пройдите все уроки на острове, чтобы открыть доступ к тесту";
	  UnicodeString ttl1 = "";
	  MessageBox(0, msg1.c_str(), ttl1.c_str(), MB_OK);
	}

	else
	{
		extern UnicodeString mystr;
		mystr = "Karta_mira\\island1test.txt";
		TForm7 *Form = new TForm7(this);
		Form->ShowModal();
	}
}
//---------------------------------------------------------------------------

