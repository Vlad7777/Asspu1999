//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "OrgUnit.h"
#include "DMUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TOrgForm *OrgForm;
//---------------------------------------------------------------------------
__fastcall TOrgForm::TOrgForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TOrgForm::BitBtn1Click(TObject *Sender)
{
  Close();        
}
//---------------------------------------------------------------------------
