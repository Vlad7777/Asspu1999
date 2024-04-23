//---------------------------------------------------------------------------
#ifndef UzlUnitH
#define UzlUnitH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TUzlForm : public TForm
{
__published:	// IDE-managed Components
        TDBGrid *DBGrid1;
        TDBNavigator *DBNavigator1;
        TBitBtn *BitBtn1;
        TBitBtn *BitBtn2;
        TBitBtn *BitBtn3;
        TDBMemo *DBMemo1;
        TDBMemo *DBMemo2;
        void __fastcall BitBtn1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TUzlForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TUzlForm *UzlForm;
//---------------------------------------------------------------------------
#endif
