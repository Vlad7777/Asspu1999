//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "MainUnit.h"
#include "RemUnit.h"
#include "AboutUnit.h"
#include "KntrUnit.h"
#include "AktReadyUnit.h"
#include "UzlUnit.h"
#include "EnterpriseUnit.h"
#include "VidRemUnit.h"
#include "OrgUnit.h"
#include "BasicEquipUnit.h"
#include "TipuzUnit.h"
#include "ReasonUnit.h"
#include "QBFForm.h"
#include "ViolationTermsUnit.h"
#include "QRRemUnit.h"
#include "QRRemUzlUnit.h"


//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainForm *MainForm;
//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::FormShow(TObject *Sender)
{
//
// No !!!  AboutBox->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::FerdDocClick(TObject *Sender)
{
//  Поиск  по  документам

//    FerdDocForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::ExitClick(TObject *Sender)
{
//
   if (MessageDlg("Вы уверены в том, что хотите выйти из программы?",
      mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes)
      {
       Close();
      }
  // Close();

}
//---------------------------------------------------------------------------


void __fastcall TMainForm::AboutClick(TObject *Sender)
{
//
   AboutBox->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::S_DocClick(TObject *Sender)
{
//
//   ListLevel->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::S_ProgramClick(TObject *Sender)
{
//
   EnterpriseForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::S_CountryClick(TObject *Sender)
{
//
   BasicEquipForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::S_FirmClick(TObject *Sender)
{
//
   VidRemForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::S_TemClick(TObject *Sender)
{
//
 //
  ReasonForm->ShowModal();

}
//---------------------------------------------------------------------------

void __fastcall TMainForm::ListOVESClick(TObject *Sender)
{
 //  REM.dbf
  RemForm->ShowModal();

}
//---------------------------------------------------------------------------

void __fastcall TMainForm::FindWordClick(TObject *Sender)
{
//
 //   FindWordForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::DialogSQLClick(TObject *Sender)
{
//

 //     DialogSQLForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::NewDocClick(TObject *Sender)
{
//
    KntrForm->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::AddressFirmClick(TObject *Sender)
{
//             HyperTerminal !!!!!!!!!!!!!

//   AddressForm->ShowModal();

 WORD wReturn;
char szMsg[80];

//wReturn = WinExec("C:\Program Files\Windows NT\hypertrm.exe", SW_SHOW);
wReturn = WinExec("hypertrm", SW_SHOW);
if (wReturn < 32) {
//	 sprintf(szMsg, "WinExec failed; error code = %d", wReturn);
//	 MessageBox(HWindow, szMsg, "Error", MB_ICONSTOP);
}
else {
//sprintf(szMsg, "WinExec returned %d", wReturn);
//	 MessageBox(HWindow, szMsg, "", MB_OK);
}

}
//---------------------------------------------------------------------------

void __fastcall TMainForm::AdjPrinterClick(TObject *Sender)
{
//
    PrinterSetupDialog->Execute();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::PreviewListClick(TObject *Sender)
{
//
    QRRemForm->QuickRepRem->Preview();
}

//---------------------------------------------------------------------------

void __fastcall TMainForm::PrintListClick(TObject *Sender)
{
//
//    PrintSQL_Dlg_bcb3Form->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::ContensClick(TObject *Sender)
{
//
   Application->HelpCommand(HELP_CONTENTS, 0);
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::How_doClick(TObject *Sender)
{
//
   Application->HelpCommand(HELP_PARTIALKEY, (long)  "");
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::SystemHelpClick(TObject *Sender)
{
//
   Application->HelpCommand(HELP_HELPONHELP, 0);
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::OEMANSIClick(TObject *Sender)
{
//
 WORD wReturn;
char szMsg[80];

wReturn = WinExec("fconvert", SW_SHOW);

if (wReturn < 32) {
//	 sprintf(szMsg, "WinExec failed; error code = %d", wReturn);
//	 MessageBox(HWindow, szMsg, "Error", MB_ICONSTOP);
}
else {
//sprintf(szMsg, "WinExec returned %d", wReturn);
//	 MessageBox(HWindow, szMsg, "", MB_OK);
}

}
//---------------------------------------------------------------------------

void __fastcall TMainForm::CopyDBClick(TObject *Sender)
{
//

}
//---------------------------------------------------------------------------

void __fastcall TMainForm::AdministratorDBClick(TObject *Sender)
{
//

}
//---------------------------------------------------------------------------
void __fastcall TMainForm::ShowHint(TObject* Sender)
{
 //
 StatusBar1->Panels->Items[0]->Text = Application->Hint;

}
//--------------------------------------------------------------------------
void __fastcall TMainForm::FormCreate(TObject *Sender)
{
//
Application->OnHint = &ShowHint;

/////////////////////////  Enabled Buttons !!! /////////////
/* ???????????
SQLsidSpeedButton->Enabled = false;
Prev_siBitBtn3->Enabled = false;
Prev_ntrBitBtn5->Enabled = false;
SQLntrSpeedButton->Enabled = false;
CorrectSpeedButton2->Enabled = false;
DeleteSpeedButton2->Enabled = false;
CorrectSpeedButton3->Enabled = false;
DeleteSpeedButton3->Enabled = false;
 */
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::SpeedButtonS_DocClick(TObject *Sender)
{
//
//  ListLevel->ShowModal();

}
//---------------------------------------------------------------------------


void __fastcall TMainForm::SpeedButtonCountryClick(TObject *Sender)
{
//
//   CountryForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::SpeedButtonFirmClick(TObject *Sender)
{
//
  //   FirmForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::SpeedButtonTemaClick(TObject *Sender)
{
  //
 //   ListTemForm->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TMainForm::SpeedButtonSQL_DOCClick(TObject *Sender)
{
//
 //  FerdDocForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::SpeedButtonFindWordClick(TObject *Sender)
{
//
 //   FindWordForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::SpeedButtonSQL_DialogClick(TObject *Sender)
{
//
      QueryForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::SpeedButtonNewDocClick(TObject *Sender)
{
//
    KntrForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::SpeedButtonAddressClick(TObject *Sender)
{
//
  //   AddressForm->ShowModal();

   WORD wReturn;
char szMsg[80];

//wReturn = WinExec("C:\Program Files\Windows NT\hypertrm.exe", SW_SHOW);
wReturn = WinExec("hypertrm", SW_SHOW);
if (wReturn < 32) {
//	 sprintf(szMsg, "WinExec failed; error code = %d", wReturn);
//	 MessageBox(HWindow, szMsg, "Error", MB_ICONSTOP);
}
else {
//sprintf(szMsg, "WinExec returned %d", wReturn);
//	 MessageBox(HWindow, szMsg, "", MB_OK);
}
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::SpeedButtonPrinerSetUpClick(TObject *Sender)
{
//
      PrinterSetupDialog->Execute();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::SpeedButtonPreviewClick(TObject *Sender)
{
//
 //     PrintSQL_Dlg_bcb3Form->ShowModal();
      QRRemForm->QuickRepRem->Preview();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::SpeedButtonPrintClick(TObject *Sender)
{
//
      QRRemForm->QuickRepRem->Preview();

}
//---------------------------------------------------------------------------

void __fastcall TMainForm::SpeedButtonHelpClick(TObject *Sender)
{
//
    Application->HelpCommand(HELP_CONTENTS, 0);
}
//---------------------------------------------------------------------------



void __fastcall TMainForm::SpeedButtonInterProgramClick(TObject *Sender)
{
 //
 //    ProgramForm->ShowModal();

}
//---------------------------------------------------------------------------

void __fastcall TMainForm::SpeedButtonCommonListClick(TObject *Sender)
{
 //
// ListOTDForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::SpeedButtonExitClick(TObject *Sender)
{
   if (MessageDlg("Вы уверены в том, что хотите выйти из программы?",
      mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes)
      {
       Close();
      }

}
//---------------------------------------------------------------------------

void __fastcall TMainForm::SpeedButtonAboutClick(TObject *Sender)
{
   AboutBox->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::N5Click(TObject *Sender)
{
  //  Volodia !!!
   WORD wReturn;
char szMsg[80];

//wReturn = WinExec("C:\Program Files\Windows NT\hypertrm.exe", SW_SHOW);
wReturn = WinExec("Gantt", SW_SHOW);
if (wReturn < 32) {
//	 sprintf(szMsg, "WinExec failed; error code = %d", wReturn);
//	 MessageBox(HWindow, szMsg, "Error", MB_ICONSTOP);
}
else {
//sprintf(szMsg, "WinExec returned %d", wReturn);
//	 MessageBox(HWindow, szMsg, "", MB_OK);
}

}
//---------------------------------------------------------------------------

void __fastcall TMainForm::N6Click(TObject *Sender)
{
 //  Volodia !!!     POWER Square!!!

}
//---------------------------------------------------------------------------

void __fastcall TMainForm::N16Click(TObject *Sender)
{
  AktReadyForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::N14Click(TObject *Sender)
{

    UzlForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::N15Click(TObject *Sender)
{
  //

  ViolationTermsForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::N8Click(TObject *Sender)
{
  OrgForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::N9Click(TObject *Sender)
{
  ///
    TipuzForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::N20Click(TObject *Sender)
{
  //

    QueryForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::SpeedButton1Click(TObject *Sender)
{
//
  //  Volodia !!!
   WORD wReturn;
char szMsg[80];

//wReturn = WinExec("C:\Program Files\Windows NT\hypertrm.exe", SW_SHOW);
wReturn = WinExec("Gantt", SW_SHOW);
if (wReturn < 32) {
//	 sprintf(szMsg, "WinExec failed; error code = %d", wReturn);
//	 MessageBox(HWindow, szMsg, "Error", MB_ICONSTOP);
}
else {
//sprintf(szMsg, "WinExec returned %d", wReturn);
//	 MessageBox(HWindow, szMsg, "", MB_OK);
}




}
//---------------------------------------------------------------------------

void __fastcall TMainForm::N22Click(TObject *Sender)
{
//
//  QRRemUzlForm
  QRRemUzlForm->QuickRepRemUzl->Preview();

}
//---------------------------------------------------------------------------

