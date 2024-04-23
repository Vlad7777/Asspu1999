//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "KntrUnit.h"
#include "DMUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TKntrForm *KntrForm;
//---------------------------------------------------------------------------
__fastcall TKntrForm::TKntrForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TKntrForm::BitBtn1Click(TObject *Sender)
{
  Close();        
}
//---------------------------------------------------------------------------
