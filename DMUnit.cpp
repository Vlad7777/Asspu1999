//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "DMUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TDM_Control *DM_Control;
//---------------------------------------------------------------------------
__fastcall TDM_Control::TDM_Control(TComponent* Owner)
        : TDataModule(Owner)
{
}
//---------------------------------------------------------------------------
