//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "BasicEquipUnit.h"
#include "DMUnit.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TBasicEquipForm *BasicEquipForm;
//---------------------------------------------------------------------------
__fastcall TBasicEquipForm::TBasicEquipForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TBasicEquipForm::BitBtn1Click(TObject *Sender)
{
  Close();
          
}
//---------------------------------------------------------------------------
