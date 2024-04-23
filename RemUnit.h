//---------------------------------------------------------------------------
#ifndef RemUnitH
#define RemUnitH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TRemForm : public TForm
{
__published:	// IDE-managed Components
        TDBGrid *RemDBGrid;
        TDBNavigator *RemDBNavigator;
        TBitBtn *BitBtn1;
        TBitBtn *BitBtn2;
        TBitBtn *BitBtn3;
private:	// User declarations
public:		// User declarations
        __fastcall TRemForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TRemForm *RemForm;
//---------------------------------------------------------------------------
#endif
