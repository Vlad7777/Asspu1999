//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "RemUnit.h"
#include "DMUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TRemForm *RemForm;
//---------------------------------------------------------------------------
__fastcall TRemForm::TRemForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
