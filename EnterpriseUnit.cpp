//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "EnterpriseUnit.h"
#include "DMUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TEnterpriseForm *EnterpriseForm;
//---------------------------------------------------------------------------
__fastcall TEnterpriseForm::TEnterpriseForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TEnterpriseForm::BitBtn1Click(TObject *Sender)
{
  Close();        
}
//---------------------------------------------------------------------------
