//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "UzlUnit.h"
#include "DMUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TUzlForm *UzlForm;
//---------------------------------------------------------------------------
__fastcall TUzlForm::TUzlForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TUzlForm::BitBtn1Click(TObject *Sender)
{
  Close();        
}
//---------------------------------------------------------------------------
