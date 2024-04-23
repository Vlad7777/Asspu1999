//---------------------------------------------------------------------------
#ifndef MainUnitH
#define MainUnitH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <Menus.hpp>
#include <ToolWin.hpp>
#include <Buttons.hpp>
#include <Dialogs.hpp>
// For Help !!!
#include <SysUtils.hpp>
#include <Messages.hpp>
#include <Windows.hpp>
#include <System.hpp>

//---------------------------------------------------------------------------
class TMainForm : public TForm
{
__published:	// IDE-managed Components
    TMainMenu *MainMenu1;
    TStatusBar *StatusBar1;
    TCoolBar *CoolBar1;
    TSpeedButton *SpeedButtonAbout;
    TSpeedButton *SpeedButtonS_Doc;
    TSpeedButton *SpeedButtonHelp;
    TSpeedButton *SpeedButtonInterProgram;
    TSpeedButton *SpeedButtonPrint;
    TMenuItem *FerdDoc;
    TMenuItem *N2;
    TMenuItem *S_Program;
    TMenuItem *SQL1;
    TMenuItem *DialogSQL;
    TMenuItem *FindWord;
    TMenuItem *AdjustPrinter;
    TMenuItem *AdjPrinter;
    TMenuItem *N11;
    TMenuItem *Contens;
    TMenuItem *TopAddress;
    TMenuItem *AddressFirm;
    TMenuItem *S_Country;
    TMenuItem *S_Firm;
    TMenuItem *S_Tem;
    TMenuItem *ListOVES;
    TMenuItem *N17;
    TMenuItem *Exit;
    TMenuItem *N19;
    TMenuItem *NewDoc;
    TMenuItem *N21;
    TMenuItem *About;
    TMenuItem *N23;
    TMenuItem *PreviewList;
    TMenuItem *PrintList;
    TMenuItem *N26;
    TMenuItem *How_do;
    TMenuItem *SystemHelp;
    TMenuItem *CopyDB;
    TMenuItem *N30;
    TMenuItem *AdministratorDB;
    TSpeedButton *SpeedButtonPreview;
    TSpeedButton *SpeedButtonCountry;
    TSpeedButton *SpeedButtonFirm;
    TSpeedButton *SpeedButtonTema;
    TSpeedButton *SpeedButtonNewDoc;
    TSpeedButton *SpeedButtonFindWord;
    TSpeedButton *SpeedButtonAddress;
    TSpeedButton *SpeedButtonPrinerSetUp;
    TSpeedButton *SpeedButtonExit;
    TPrinterSetupDialog *PrinterSetupDialog;
    TPrintDialog *PrintDialog;
    TSpeedButton *SpeedButtonSQL_DOC;
    TSpeedButton *SpeedButtonSQL_Dialog;
    TSpeedButton *SpeedButtonCommonList;
    TMenuItem *N1;
    TMenuItem *N3;
    TMenuItem *N4;
    TMenuItem *N5;
    TMenuItem *N6;
        TMenuItem *N7;
        TMenuItem *N8;
        TMenuItem *N9;
        TMenuItem *N10;
        TMenuItem *N12;
        TMenuItem *N13;
        TMenuItem *N14;
        TMenuItem *N15;
        TMenuItem *N16;
        TMenuItem *N18;
        TMenuItem *N20;
        TSpeedButton *SpeedButton2;
        TSpeedButton *SpeedButton1;
        TMenuItem *N22;
    void __fastcall FormShow(TObject *Sender);
    
    
    
    
    void __fastcall FerdDocClick(TObject *Sender);
    void __fastcall ExitClick(TObject *Sender);
    void __fastcall AboutClick(TObject *Sender);
    void __fastcall S_DocClick(TObject *Sender);
    void __fastcall S_ProgramClick(TObject *Sender);
    void __fastcall S_CountryClick(TObject *Sender);
    void __fastcall S_FirmClick(TObject *Sender);
    void __fastcall S_TemClick(TObject *Sender);
    void __fastcall ListOVESClick(TObject *Sender);
    void __fastcall FindWordClick(TObject *Sender);
    void __fastcall DialogSQLClick(TObject *Sender);
    void __fastcall NewDocClick(TObject *Sender);
//    void __fastcall TopAddressClick(TObject *Sender);


    void __fastcall AddressFirmClick(TObject *Sender);
    void __fastcall AdjPrinterClick(TObject *Sender);
    void __fastcall PreviewListClick(TObject *Sender);
    void __fastcall PrintListClick(TObject *Sender);
    void __fastcall ContensClick(TObject *Sender);
    void __fastcall How_doClick(TObject *Sender);
    void __fastcall SystemHelpClick(TObject *Sender);
    void __fastcall OEMANSIClick(TObject *Sender);
    void __fastcall CopyDBClick(TObject *Sender);
    void __fastcall AdministratorDBClick(TObject *Sender);
    void __fastcall FormCreate(TObject *Sender);
    void __fastcall SpeedButtonS_DocClick(TObject *Sender);
    void __fastcall SpeedButtonCountryClick(TObject *Sender);
    void __fastcall SpeedButtonFirmClick(TObject *Sender);
    void __fastcall SpeedButtonTemaClick(TObject *Sender);
    void __fastcall SpeedButtonSQL_DOCClick(TObject *Sender);
    void __fastcall SpeedButtonFindWordClick(TObject *Sender);
    void __fastcall SpeedButtonSQL_DialogClick(TObject *Sender);
    void __fastcall SpeedButtonNewDocClick(TObject *Sender);
    void __fastcall SpeedButtonAddressClick(TObject *Sender);
    void __fastcall SpeedButtonPrinerSetUpClick(TObject *Sender);
    void __fastcall SpeedButtonPreviewClick(TObject *Sender);
    void __fastcall SpeedButtonPrintClick(TObject *Sender);
    void __fastcall SpeedButtonHelpClick(TObject *Sender);

    void __fastcall SpeedButtonInterProgramClick(TObject *Sender);
    void __fastcall SpeedButtonCommonListClick(TObject *Sender);
    void __fastcall SpeedButtonExitClick(TObject *Sender);
    void __fastcall SpeedButtonAboutClick(TObject *Sender);
        void __fastcall N5Click(TObject *Sender);
        void __fastcall N6Click(TObject *Sender);
        void __fastcall N16Click(TObject *Sender);
        void __fastcall N14Click(TObject *Sender);
        void __fastcall N15Click(TObject *Sender);
        void __fastcall N8Click(TObject *Sender);
        void __fastcall N9Click(TObject *Sender);
        void __fastcall N20Click(TObject *Sender);
        void __fastcall SpeedButton1Click(TObject *Sender);
        void __fastcall N22Click(TObject *Sender);
private:	// User declarations
    void __fastcall ShowHint(TObject *Sender);
public:		// User declarations
    __fastcall TMainForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
//---------------------------------------------------------------------------
#endif
