//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "ReasonUnit.h"
#include "DMUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TReasonForm *ReasonForm;
//---------------------------------------------------------------------------
__fastcall TReasonForm::TReasonForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TReasonForm::BitBtn1Click(TObject *Sender)
{
  Close();        
}
//---------------------------------------------------------------------------
