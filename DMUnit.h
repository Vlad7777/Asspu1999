//---------------------------------------------------------------------------
#ifndef DMUnitH
#define DMUnitH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
class TDM_Control : public TDataModule
{
__published:	// IDE-managed Components
        TQuery *RemQuery;
        TDataSource *RemDataSource;
        TDataSource *RemDataSourceTable;
        TTable *RemTable;
        TDataSource *KntrDataSource;
        TTable *KntrTable;
        TDatabase *Database1;
        TTable *KntraTable;
        TTable *KntrsTable;
        TDataSource *KntraDataSource;
        TDataSource *KntrsDataSource;
        TDataSource *KntruDataSource;
        TTable *KntruTable;
        TTable *EnterpriseTable;
        TTable *BasicEquipTable;
        TTable *TipuzTable;
        TTable *OrgTable;
        TTable *VidremTable;
        TDataSource *EnterpriseDataSource;
        TDataSource *BasicEquipDataSource;
        TDataSource *TipuzDataSource;
        TDataSource *OrgDataSource;
        TDataSource *VidremDataSource;
        TDataSource *ReasonDataSource;
        TTable *ReasonTable;
        TDataSource *GuiltyDataSource;
        TTable *GuiltyTable;
private:	// User declarations
public:		// User declarations
        __fastcall TDM_Control(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDM_Control *DM_Control;
//---------------------------------------------------------------------------
#endif
