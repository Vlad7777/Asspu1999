//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "AktReadyUnit.h"
#include "DMUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAktReadyForm *AktReadyForm;
//---------------------------------------------------------------------------
__fastcall TAktReadyForm::TAktReadyForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TAktReadyForm::BitBtn1Click(TObject *Sender)
{
    Close();        
}
//---------------------------------------------------------------------------
