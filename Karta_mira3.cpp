//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Karta_mira3.h"
#include "Karta_mira.h"
#include "Karta_mira4.h"
#include "Karta_mira8.h"
#include "Karta_mira6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;

//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
	ListBox1->Items->Add("Остров 1 - основы программирования на С++ (открыт)");
	ListBox1->Items->Add("Остров 2 - основы работы с Photoshop (закрыт)");
    ListBox1->Items->Add("Остров 3 - основы веб-программирования (закрыт)");
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button4Click(TObject *Sender)
{
	this->Close();
}
//---------------------------------------------------------------------------


void __fastcall TForm3::Button1Click(TObject *Sender)  //'Play' button
{
	ListBox1->Visible = true;
	Button5->Visible = true;
	Button6->Visible = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button6Click(TObject *Sender) //'Hide' button
{
	ListBox1->Visible = false;
	Button5->Visible = false;
	Button6->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button5Click(TObject *Sender) // 'Select' button
{
	//OPEN NEW FORM W/SWITCH
	int island = ListBox1->ItemIndex;
	switch (island)
	{
		case 0:
		{
			TForm4 *Form = new TForm4(this);
			Form->ShowModal();
			break;
		}

		case 1:
		{
				//SUBJECT TO CHANGE
				UnicodeString msg1 = "Остров закрыт! Пройдите все задания на предыдущем острове, чтобы открыть этот остров";
				UnicodeString ttl1 = "";
				MessageBox(0, msg1.c_str(), ttl1.c_str(), MB_OK);
				break;
		}

		case 2:
		{
                //SUBJECT TO CHANGE
				UnicodeString msg1 = "Остров закрыт! Пройдите все задания на предыдущем острове, чтобы открыть этот остров";
				UnicodeString ttl1 = "";
				MessageBox(0, msg1.c_str(), ttl1.c_str(), MB_OK);
				break;
		}

		default:
		{
				UnicodeString msg1 = "Выберите остров";
				UnicodeString ttl1 = "";
				MessageBox(0, msg1.c_str(), ttl1.c_str(), MB_OK);
				break;
        }

	}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button2Click(TObject *Sender)
{
	 TForm6 *Form = new TForm6(this);
	 Form->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button3Click(TObject *Sender)
{
      TForm8 *Form = new TForm8(this); //subject to change
	  Form->ShowModal();
}
//---------------------------------------------------------------------------

