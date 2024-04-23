//---------------------------------------------------------------------------
#ifndef InputUnitH
#define InputUnitH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
class TDataModule1 : public TDataModule
{
__published:	// IDE-managed Components
    TDataSource *DataSource1;
    TQuery *Query1;
    TDataSource *DataSource2;
    TTable *Table1;
    TDataSource *DataSource3;
    TTable *Table2;
private:	// User declarations
public:		// User declarations
    __fastcall TDataModule1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDataModule1 *DataModule1;
//---------------------------------------------------------------------------
#endif
