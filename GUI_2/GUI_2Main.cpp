/***************************************************************
 * Name:      GUI_2Main.cpp
 * Purpose:   Code for Application Frame
 * Author:    b ()
 * Created:   2016-02-18
 * Copyright: b ()
 * License:
 **************************************************************/

#include "GUI_2Main.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(GUI_2Frame)
#include <wx/intl.h>
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

//(*IdInit(GUI_2Frame)
const long GUI_2Frame::ID_TEXTCTRL1 = wxNewId();
const long GUI_2Frame::ID_STATICTEXT1 = wxNewId();
const long GUI_2Frame::ID_BITMAPCOMBOBOX1 = wxNewId();
const long GUI_2Frame::ID_BUTTON1 = wxNewId();
const long GUI_2Frame::idMenuQuit = wxNewId();
const long GUI_2Frame::idMenuAbout = wxNewId();
const long GUI_2Frame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(GUI_2Frame,wxFrame)
    //(*EventTable(GUI_2Frame)
    //*)
END_EVENT_TABLE()

GUI_2Frame::GUI_2Frame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(GUI_2Frame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxMenu* Menu1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, _("Text"), wxPoint(64,48), wxSize(224,104), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Label"), wxPoint(120,128), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    BitmapComboBox1 = new wxBitmapComboBox(this, ID_BITMAPCOMBOBOX1, wxEmptyString, wxPoint(104,168), wxDefaultSize, 0, NULL, 0, wxDefaultValidator, _T("ID_BITMAPCOMBOBOX1"));
    Button1 = new wxButton(this, ID_BUTTON1, _("Label"), wxPoint(80,224), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
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
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);


    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&GUI_2Frame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&GUI_2Frame::OnAbout);
    //*)
}

GUI_2Frame::~GUI_2Frame()
{
    //(*Destroy(GUI_2Frame)
    //*)
}

void GUI_2Frame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void GUI_2Frame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}
