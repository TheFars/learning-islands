//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
UnicodeString mystr = "Karta_mira\\island1lvl1.txt";
int level = 0;
//---------------------------------------------------------------------------
USEFORM("Karta_mira7.cpp", Form7);
USEFORM("Karta_mira8.cpp", Form8);
USEFORM("Karta_mira6.cpp", Form6);
USEFORM("Karta_mira.cpp", Form1);
USEFORM("Karta_mira2.cpp", Form2);
USEFORM("Karta_mira3.cpp", Form3);
USEFORM("Karta_mira4.cpp", Form4);
USEFORM("Karta_mira5.cpp", Form5);
USEFORM("Karta_mira10.cpp", Form10);
USEFORM("Karta_mira9.cpp", Form9);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->CreateForm(__classid(TForm2), &Form2);
		Application->CreateForm(__classid(TForm3), &Form3);
		Application->CreateForm(__classid(TForm4), &Form4);
		Application->CreateForm(__classid(TForm5), &Form5);
		Application->CreateForm(__classid(TForm6), &Form6);
		Application->CreateForm(__classid(TForm7), &Form7);
		Application->CreateForm(__classid(TForm8), &Form8);
		Application->CreateForm(__classid(TForm10), &Form10);
		Application->CreateForm(__classid(TForm9), &Form9);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
