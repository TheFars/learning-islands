//---------------------------------------------------------------------------

#ifndef Karta_mira9H
#define Karta_mira9H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class TForm9 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TADOQuery *ADOQuery4;
	TADOQuery *ADOQuery3;
	TADOQuery *ADOQuery2;
	TADOQuery *ADOQuery1;
	TEdit *Edit5;
	TEdit *Edit4;
	TButton *Button4;
	TEdit *Edit3;
	TButton *Button7;
	TEdit *Edit2;
	TButton *Button6;
	TButton *Button5;
	TEdit *Edit1;
	TCheckBox *CheckBox1;
	TButton *Button3;
	TButton *Button2;
	TLabel *Label5;
	TLabel *Label4;
	TLabel *Label3;
	TLabel *Label2;
	TLabel *Label1;
	TImage *Image1;
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm9(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm9 *Form9;
//---------------------------------------------------------------------------
#endif
