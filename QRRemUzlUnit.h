//---------------------------------------------------------------------------
#ifndef QRRemUzlUnitH
#define QRRemUzlUnitH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Graphics.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <QuickRpt.hpp>
#include <QRCtrls.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
#include <ExtCtrls.hpp>
#include <Qrctrls.hpp>
//---------------------------------------------------------------------------
class TQRRemUzlForm : public TForm
{
__published:	// IDE-managed Components
        TQuickRep *QuickRepRemUzl;
    TQRBand *PageFooterBand1;
    TQRSysData *QRSysData1;
    TQRBand *ColumnHeaderBand1;
    TQRBand *DetailBand1;
    TQRLabel *QRLabel1;
    TQRExpr *QRExpr1;
    TQRLabel *QRLabel2;
    TQRExpr *QRExpr2;
    TQRLabel *QRLabel3;
    TQRExpr *QRExpr3;
    TQRLabel *QRLabel4;
    TQRExpr *QRExpr4;
    TQRLabel *QRLabel5;
    TQRExpr *QRExpr5;
    TQRLabel *QRLabel6;
    TQRExpr *QRExpr6;
    TQRLabel *QRLabel7;
    TQRExpr *QRExpr7;
    TQRLabel *QRLabel8;
    TQRExpr *QRExpr8;
    TQRLabel *QRLabel9;
    TQRExpr *QRExpr9;
        TQRBand *TitleBand1;
        TQRLabel *QRLabel10;
        TQRDBText *QRDBText1;
        TQRLabel *QRLabel11;
private:	// User declarations
public:		// User declarations
    __fastcall TQRRemUzlForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TQRRemUzlForm *QRRemUzlForm;
//---------------------------------------------------------------------------
#endif
