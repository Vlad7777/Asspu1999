//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "VidRemUnit.h"
#include "DMUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TVidRemForm *VidRemForm;
//---------------------------------------------------------------------------
__fastcall TVidRemForm::TVidRemForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TVidRemForm::BitBtn1Click(TObject *Sender)
{
  Close();        
}
//---------------------------------------------------------------------------
