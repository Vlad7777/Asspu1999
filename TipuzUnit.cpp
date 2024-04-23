//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "TipuzUnit.h"
#include "DMUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TTipuzForm *TipuzForm;
//---------------------------------------------------------------------------
__fastcall TTipuzForm::TTipuzForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TTipuzForm::BitBtn1Click(TObject *Sender)
{
   Close();        
}
//---------------------------------------------------------------------------
