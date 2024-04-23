//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "ViolationTermsUnit.h"
#include "DMUnit.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TViolationTermsForm *ViolationTermsForm;
//---------------------------------------------------------------------------
__fastcall TViolationTermsForm::TViolationTermsForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TViolationTermsForm::BitBtn1Click(TObject *Sender)
{
   Close();        
}
//---------------------------------------------------------------------------
