//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Karta_mira7.h"
#include "Karta_mira4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;

//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
	: TForm(Owner)
{
	extern UnicodeString mystr;
	//UnicodeString str = "C:\\Karta_mira_text\\island1lvl2.txt";
	Memo1->Lines->LoadFromFile(mystr);
}
//---------------------------------------------------------------------------
void __fastcall TForm7::Button2Click(TObject *Sender)
{
	this->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm7::Button1Click(TObject *Sender)
{
	UnicodeString correct_answer;
	extern int level;
	int lvlup;
	switch (level)
	{
		case (1):
		{
		  correct_answer = "iostream, main, cout";
		  lvlup = 2;
		  break;
		}

		case (3):
		{
		  correct_answer = "10";
		  lvlup = 4;
		  break;
		}

		case (5):
		{
		  correct_answer = "15";
		  lvlup = 6;
		  break;
		}

		case (7):
		{
		  correct_answer = "int, 5, cout";
		  lvlup = 8;
		  break;
		}

		case (9):
		{
		  correct_answer = "int, 3";
		  lvlup = 10;
		  break;
		}

		default:
		{
			ShowMessage(IntToStr(level));
			break;
		}
	}

		if (Edit1->Text == correct_answer)
		{
		  level = lvlup;
		  UnicodeString msg1 = "Ответ правильный!";
		  UnicodeString ttl1 = "";
		  MessageBox(0, msg1.c_str(), ttl1.c_str(), MB_OK);
		  this->Close();
		}
		else
		{
			UnicodeString msg1 = "Ответ неправильный!";
		  UnicodeString ttl1 = "";
		  MessageBox(0, msg1.c_str(), ttl1.c_str(), MB_OK);
        }

}
//---------------------------------------------------------------------------




