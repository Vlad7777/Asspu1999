//----------------------------------------------------------------------------
//Borland C++Builder
//Copyright (c) 1987, 1997 Borland International Inc. All Rights Reserved.
//----------------------------------------------------------------------------
//---------------------------------------------------------------------------
#ifndef QBFFormH
#define QBFFormH
//---------------------------------------------------------------------------
#include <vcl\Classes.hpp>
#include <vcl\Controls.hpp>
#include <vcl\StdCtrls.hpp>
#include <vcl\Forms.hpp>
#include <vcl\Buttons.hpp>
#include <vcl\ComCtrls.hpp>
#include <vcl\DB.hpp>
#include <vcl\DBTables.hpp>
#include "Rsltform.h"
#include <Db.hpp>
//---------------------------------------------------------------------------
class TQueryForm : public TForm
{
__published:    // IDE-managed Components 
    TBitBtn *BitBtn1;
    TGroupBox *GroupBox1;
    TCheckBox *CheckBox1;
    TCheckBox *CheckBox2;
    TPageControl *PageControl1;
    TTabSheet *TabSheet1;
    TLabel *Label5;
    TLabel *Label1;
    TLabel *Label2;
    TLabel *Label3;
    TLabel *Label4;
    TListBox *ListBox1;
    TListBox *ListBox2;
    TListBox *ListBox3;
    TEdit *Edit1;
    TComboBox *ComboBox1;
    TBitBtn *BitBtn2;
    TTabSheet *TabSheet2;
    TMemo *Memo1;
    TDataSource *DataSource1;
    TTable *Table1;
    void __fastcall FormCreate(TObject *Sender);
    void __fastcall BitBtn2Click(TObject *Sender);
    void __fastcall ListBox1Click(TObject *Sender);
    void __fastcall ListBox2Click(TObject *Sender);
private:        // User declarations
public:         // User declarations
    virtual __fastcall TQueryForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern TQueryForm *QueryForm;
//---------------------------------------------------------------------------
#endif
