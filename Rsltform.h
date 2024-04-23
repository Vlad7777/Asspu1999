//----------------------------------------------------------------------------
//Borland C++Builder
//Copyright (c) 1987, 1997 Borland International Inc. All Rights Reserved.
//----------------------------------------------------------------------------
//---------------------------------------------------------------------------
#ifndef RsltformH
#define RsltformH
//---------------------------------------------------------------------------
#include <vcl\Classes.hpp>
#include <vcl\Controls.hpp>
#include <vcl\StdCtrls.hpp>
#include <vcl\Forms.hpp>
#include <vcl\ExtCtrls.hpp>
#include <vcl\Buttons.hpp>
#include <vcl\DBCtrls.hpp>
#include <vcl\DBGrids.hpp>
#include <vcl\Grids.hpp>
#include <vcl\DB.hpp>
#include <vcl\DBTables.hpp>
#include <Db.hpp>
//---------------------------------------------------------------------------
class TResultForm : public TForm
{
__published:    // IDE-managed Components 
    TPanel *Panel1;
    TSpeedButton *SpeedButton2;
    TDBNavigator *DBNavigator;
    TPanel *Panel4;
    TSpeedButton *SpeedButton1;
    TPanel *Panel2;
    TDBGrid *DBGrid1;
    TPanel *Panel3;
    TDataSource *DataSource1;
    TQuery *Query1;
    void __fastcall SpeedButton2Click(TObject *Sender);
    void __fastcall SpeedButton1Click(TObject *Sender);
private:        // User declarations
public:         // User declarations
    virtual __fastcall TResultForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern TResultForm *ResultForm;
//---------------------------------------------------------------------------
#endif
