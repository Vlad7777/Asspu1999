//---------------------------------------------------------------------------
#ifndef QRRemUnitH
#define QRRemUnitH
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
class TQRRemForm : public TForm
{
__published:	// IDE-managed Components
        TQuickRep *QuickRepRem;
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
    TQRLabel *QRLabel10;
    TQRExpr *QRExpr10;
    TQRLabel *QRLabel11;
    TQRExpr *QRExpr11;
    TQRLabel *QRLabel12;
    TQRExpr *QRExpr12;
    TQRLabel *QRLabel13;
    TQRExpr *QRExpr13;
    TQRLabel *QRLabel14;
    TQRExpr *QRExpr14;
    TQRLabel *QRLabel15;
    TQRExpr *QRExpr15;
    TQRLabel *QRLabel16;
    TQRExpr *QRExpr16;
        TQRBand *TitleBand1;
        TQRLabel *QRLabel17;
private:	// User declarations
public:		// User declarations
    __fastcall TQRRemForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TQRRemForm *QRRemForm;
//---------------------------------------------------------------------------
#endif
