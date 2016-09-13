/***************************************************************
 * Name:      GUI_Tic_Tac_ToeMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    b ()
 * Created:   2016-02-25
 * Copyright: b ()
 * License:
 **************************************************************/

#include "GUI_Tic_Tac_ToeMain.h"
#include <wx/msgdlg.h>
#include "GameBoard.h"

//(*InternalHeaders(GUI_Tic_Tac_ToeFrame)
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

//(*IdInit(GUI_Tic_Tac_ToeFrame)
const long GUI_Tic_Tac_ToeFrame::ID_BUTTON1 = wxNewId();
const long GUI_Tic_Tac_ToeFrame::ID_BUTTON2 = wxNewId();
const long GUI_Tic_Tac_ToeFrame::idMenuQuit = wxNewId();
const long GUI_Tic_Tac_ToeFrame::idMenuAbout = wxNewId();
const long GUI_Tic_Tac_ToeFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(GUI_Tic_Tac_ToeFrame,wxFrame)
    //(*EventTable(GUI_Tic_Tac_ToeFrame)
    //*)
END_EVENT_TABLE()

GUI_Tic_Tac_ToeFrame::GUI_Tic_Tac_ToeFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(GUI_Tic_Tac_ToeFrame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxMenu* Menu1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    SetClientSize(wxSize(400,223));
    Button1 = new wxButton(this, ID_BUTTON1, _("Two Player"), wxPoint(64,40), wxSize(104,96), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Button2 = new wxButton(this, ID_BUTTON2, _("Computer"), wxPoint(208,40), wxSize(104,96), 0, wxDefaultValidator, _T("ID_BUTTON2"));
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

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GUI_Tic_Tac_ToeFrame::OnTwoPlayer_BClick);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&GUI_Tic_Tac_ToeFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&GUI_Tic_Tac_ToeFrame::OnAbout);
    //*)
}

GUI_Tic_Tac_ToeFrame::~GUI_Tic_Tac_ToeFrame()
{
    //(*Destroy(GUI_Tic_Tac_ToeFrame)
    //*)
}

void GUI_Tic_Tac_ToeFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void GUI_Tic_Tac_ToeFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void GUI_Tic_Tac_ToeFrame::OnTwoPlayer_BClick(wxCommandEvent& event)
{
    GameBoard *gameboard = new GameBoard(NULL);
    gameboard->cpu = 0;
    gameboard->Show(true);
}
