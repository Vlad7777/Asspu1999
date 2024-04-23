//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
USERES("ControlProject.res");
USEFORM("MainUnit.cpp", MainForm);
USEFORM("DMUnit.cpp", DM_Control); /* TDataModule: DesignClass */
USEFORM("AboutUnit.cpp", AboutBox);
USEFORM("RemUnit.cpp", RemForm);
USEFORM("KntrUnit.cpp", KntrForm);
USEFORM("AktReadyUnit.cpp", AktReadyForm);
USEFORM("UzlUnit.cpp", UzlForm);
USEFORM("EnterpriseUnit.cpp", EnterpriseForm);
USEFORM("VidRemUnit.cpp", VidRemForm);
USEFORM("OrgUnit.cpp", OrgForm);
USEFORM("BasicEquipUnit.cpp", BasicEquipForm);
USEFORM("TipuzUnit.cpp", TipuzForm);
USEFORM("ReasonUnit.cpp", ReasonForm);
USEFORM("Rsltform.cpp", ResultForm);
USEFORM("ViolationTermsUnit.cpp", ViolationTermsForm);
USEFORM("Qbfform.cpp", QueryForm);
USEFORM("QRRemUnit.cpp", QRRemForm);
USEFORM("QRRemUzlUnit.cpp", QRRemUzlForm);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    try
    {
        Application->Initialize();
        Application->HelpFile = "\\Help\\Vp.hlp";
                 Application->CreateForm(__classid(TMainForm), &MainForm);
                 Application->CreateForm(__classid(TDM_Control), &DM_Control);
                 Application->CreateForm(__classid(TAboutBox), &AboutBox);
                 Application->CreateForm(__classid(TRemForm), &RemForm);
                 Application->CreateForm(__classid(TKntrForm), &KntrForm);
                 Application->CreateForm(__classid(TAktReadyForm), &AktReadyForm);
                 Application->CreateForm(__classid(TUzlForm), &UzlForm);
                 Application->CreateForm(__classid(TEnterpriseForm), &EnterpriseForm);
                 Application->CreateForm(__classid(TVidRemForm), &VidRemForm);
                 Application->CreateForm(__classid(TOrgForm), &OrgForm);
                 Application->CreateForm(__classid(TBasicEquipForm), &BasicEquipForm);
                 Application->CreateForm(__classid(TTipuzForm), &TipuzForm);
                 Application->CreateForm(__classid(TReasonForm), &ReasonForm);
                 Application->CreateForm(__classid(TResultForm), &ResultForm);
                 Application->CreateForm(__classid(TViolationTermsForm), &ViolationTermsForm);
                 Application->CreateForm(__classid(TQueryForm), &QueryForm);
                 Application->CreateForm(__classid(TQRRemForm), &QRRemForm);
                 Application->CreateForm(__classid(TQRRemUzlForm), &QRRemUzlForm);
                 Application->Run();
    }
    catch (Exception &exception)
    {
        Application->ShowException(&exception);
    }
    return 0;
}
//---------------------------------------------------------------------------


