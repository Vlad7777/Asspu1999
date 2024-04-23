//---------------------------------------------------------------------------
#ifndef KntrUnitH
#define KntrUnitH
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
class TKntrForm : public TForm
{
__published:	// IDE-managed Components
        TDBGrid *KntrDBGrid;
        TDBNavigator *KntrDBNavigator;
        TBitBtn *BitBtn1;
        TBitBtn *BitBtn2;
        TBitBtn *BitBtn3;
        void __fastcall BitBtn1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TKntrForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TKntrForm *KntrForm;
//---------------------------------------------------------------------------
#endif
