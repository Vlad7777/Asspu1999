//---------------------------------------------------------------------------
#ifndef AktReadyUnitH
#define AktReadyUnitH
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
class TAktReadyForm : public TForm
{
__published:	// IDE-managed Components
        TBitBtn *BitBtn1;
        TBitBtn *BitBtn2;
        TBitBtn *BitBtn3;
        TDBGrid *DBGrid1;
        TDBNavigator *DBNavigator1;
        TDBMemo *DBMemo1;
        TLabel *Label1;
        void __fastcall BitBtn1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TAktReadyForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAktReadyForm *AktReadyForm;
//---------------------------------------------------------------------------
#endif
