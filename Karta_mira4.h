//---------------------------------------------------------------------------

#ifndef Karta_mira4H
#define Karta_mira4H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TLabel *Label10;
	TLabel *Label11;
	TButton *Button1;
	void __fastcall Label1Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Label5Click(TObject *Sender);
	void __fastcall Label2Click(TObject *Sender);
	void __fastcall Label6Click(TObject *Sender);
	void __fastcall Label4Click(TObject *Sender);
	void __fastcall Label7Click(TObject *Sender);
	void __fastcall Label3Click(TObject *Sender);
	void __fastcall Label8Click(TObject *Sender);
	void __fastcall Label9Click(TObject *Sender);
	void __fastcall Label10Click(TObject *Sender);
	void __fastcall Label11Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
