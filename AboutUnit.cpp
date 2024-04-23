//---------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "AboutUnit.h"
//--------------------------------------------------------------------- 
#pragma resource "*.dfm"
TAboutBox *AboutBox;
//--------------------------------------------------------------------- 
__fastcall TAboutBox::TAboutBox(TComponent* AOwner)
	: TForm(AOwner)
{
//
AboutBox->ShowModal();
}
//---------------------------------------------------------------------
void __fastcall TAboutBox::OKButtonClick(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------
void __fastcall TAboutBox::FormActivate(TObject *Sender)
{
   MediaPlayer1->Open();
   MediaPlayer1->Play();

}
//---------------------------------------------------------------------------

void __fastcall TAboutBox::MediaPlayer1Notify(TObject *Sender)
{
//   MediaPlayer1->Play();

}
//---------------------------------------------------------------------------

void __fastcall TAboutBox::FormMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{

   MediaPlayer1->Play();

}
//---------------------------------------------------------------------------

void __fastcall TAboutBox::Panel1MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
//
   MediaPlayer1->Play();

}
//---------------------------------------------------------------------------

