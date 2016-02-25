/***************************************************************
 * Name:      Calculator_GUIMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    b ()
 * Created:   2016-02-22
 * Copyright: b ()
 * License:
 **************************************************************/

#include "Calculator_GUIMain.h"
#include <wx/msgdlg.h>
#include "MyMath.h"

//(*InternalHeaders(Calculator_GUIFrame)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(Calculator_GUIFrame)
const long Calculator_GUIFrame::ID_BUTTON1 = wxNewId();
const long Calculator_GUIFrame::ID_BUTTON2 = wxNewId();
const long Calculator_GUIFrame::ID_TEXTCTRL1 = wxNewId();
const long Calculator_GUIFrame::ID_TEXTCTRL3 = wxNewId();
const long Calculator_GUIFrame::ID_TEXTCTRL2 = wxNewId();
const long Calculator_GUIFrame::ID_STATICTEXT2 = wxNewId();
const long Calculator_GUIFrame::ID_STATICTEXT1 = wxNewId();
const long Calculator_GUIFrame::ID_STATICBITMAP1 = wxNewId();
const long Calculator_GUIFrame::idMenuQuit = wxNewId();
const long Calculator_GUIFrame::idMenuAbout = wxNewId();
//*)

BEGIN_EVENT_TABLE(Calculator_GUIFrame,wxFrame)
    //(*EventTable(Calculator_GUIFrame)
    //*)
END_EVENT_TABLE()

Calculator_GUIFrame::Calculator_GUIFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(Calculator_GUIFrame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxMenu* Menu1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    ADD_B = new wxButton(this, ID_BUTTON1, _("ADD"), wxPoint(48,272), wxSize(112,56), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    REMOVE_B = new wxButton(this, ID_BUTTON2, _("Remove"), wxPoint(176,272), wxSize(112,56), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    TextBox = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(48,184), wxSize(232,64), wxTE_MULTILINE, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    NUM_ONE = new wxTextCtrl(this, ID_TEXTCTRL3, wxEmptyString, wxPoint(152,48), wxSize(120,40), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
    NUM_TWO = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxPoint(152,112), wxSize(120,40), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Number one"), wxPoint(24,56), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    wxFont StaticText2Font(16,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
    StaticText2->SetFont(StaticText2Font);
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Number two"), wxPoint(24,112), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    wxFont StaticText1Font(16,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("D:\\Noroff\\PRG\\Code\\Class-examples\\Calculator GUI\\pic\\1.png")).Rescale(wxSize(96,80).GetWidth(),wxSize(96,80).GetHeight())), wxPoint(152,352), wxSize(96,80), wxSIMPLE_BORDER, _T("ID_STATICBITMAP1"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Calculator_GUIFrame::OnButton1Click);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Calculator_GUIFrame::OnREMOVE_BClick);
    Connect(ID_TEXTCTRL2,wxEVT_COMMAND_TEXT_ENTER,(wxObjectEventFunction)&Calculator_GUIFrame::OnButton1Click);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Calculator_GUIFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Calculator_GUIFrame::OnAbout);
    //*)
}

Calculator_GUIFrame::~Calculator_GUIFrame()
{
    //(*Destroy(Calculator_GUIFrame)
    //*)
}

void Calculator_GUIFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void Calculator_GUIFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

int count = 0;
void Calculator_GUIFrame::OnButton1Click(wxCommandEvent& event)
{
    int num_one, num_two;
    wxString str;
    num_one = atoi(NUM_ONE->GetLineText(1));
    num_two = atoi(NUM_TWO->GetLineText(1));
    int sum = multiply(num_one, num_two);
    str << count << " | "<< num_one << " * " << NUM_TWO->GetLineText(1) <<" = "<< sum << "\n";
    TextBox->AppendText(str);
    StaticBitmap1->SetBitmap(wxBitmap(wxImage(_T("D:\\Noroff\\PRG\\Code\\Class-examples\\Calculator GUI\\pic\\6.png")).Rescale(wxSize(96,80).GetWidth(),wxSize(96,80).GetHeight())));

}

void Calculator_GUIFrame::OnREMOVE_BClick(wxCommandEvent& event)
{
    TextBox->Clear();
    count = 0;
}
