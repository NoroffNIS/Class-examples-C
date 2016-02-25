/***************************************************************
 * Name:      GUI_DiceMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    b ()
 * Created:   2016-02-23
 * Copyright: b ()
 * License:
 **************************************************************/

#include "GUI_DiceMain.h"
#include <wx/msgdlg.h>
#include "GameFrame.h"

//(*InternalHeaders(GUI_DiceFrame)
#include <wx/settings.h>
#include <wx/font.h>
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

//(*IdInit(GUI_DiceFrame)
const long GUI_DiceFrame::ID_ROLL_B = wxNewId();
const long GUI_DiceFrame::ID_DICE_IMAGE = wxNewId();
const long GUI_DiceFrame::idMenuQuit = wxNewId();
const long GUI_DiceFrame::idMenuAbout = wxNewId();
const long GUI_DiceFrame::ID_STATUSBAR1 = wxNewId();
const long GUI_DiceFrame::ID_MESSAGEDIALOG1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(GUI_DiceFrame,wxFrame)
    //(*EventTable(GUI_DiceFrame)
    //*)
END_EVENT_TABLE()

GUI_DiceFrame::GUI_DiceFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(GUI_DiceFrame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxMenu* Menu1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    SetClientSize(wxSize(488,308));
    Roll_B = new wxButton(this, ID_ROLL_B, _("Roll"), wxPoint(56,184), wxSize(128,56), 0, wxDefaultValidator, _T("ID_ROLL_B"));
    Roll_B->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_HIGHLIGHT));
    wxFont Roll_BFont(14,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("@Adobe Gothic Std B"),wxFONTENCODING_DEFAULT);
    Roll_B->SetFont(Roll_BFont);
    Dice_Image = new wxStaticBitmap(this, ID_DICE_IMAGE, wxNullBitmap, wxPoint(56,32), wxSize(136,128), wxSIMPLE_BORDER, _T("ID_DICE_IMAGE"));
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
    MessageDialog1 = new wxMessageDialog(this, wxEmptyString, _("Message"), wxOK|wxICON_INFORMATION, wxDefaultPosition);

    Connect(ID_ROLL_B,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GUI_DiceFrame::OnRoll_BClick);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&GUI_DiceFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&GUI_DiceFrame::OnAbout);
    //*)
}

GUI_DiceFrame::~GUI_DiceFrame()
{
    //(*Destroy(GUI_DiceFrame)
    //*)
}

void GUI_DiceFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void GUI_DiceFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

int i=0;
void GUI_DiceFrame::OnRoll_BClick(wxCommandEvent& event)
{
    if(i%2==0)
        Dice_Image->SetBitmap(wxBitmap(wxImage(_T("D:\\Noroff\\PRG\\Code\\Class-examples\\Calculator GUI\\pic\\6.png")).Rescale(wxSize(136,128).GetWidth(),wxSize(136,128).GetHeight())));
    else
        Dice_Image->SetBitmap(wxBitmap(wxImage(_T("D:\\Noroff\\PRG\\Code\\Class-examples\\Calculator GUI\\pic\\1.png")).Rescale(wxSize(136,128).GetWidth(),wxSize(136,128).GetHeight())));


    if(i==10){
        wxString msg = "You pressed the Roll 10 times!";
        wxMessageBox( msg, wxT("This is the title"), wxOK |wxICON_INFORMATION);
        GameFrame *frame = new GameFrame(NULL);
        frame->Show(true);

    }

    i++;
}
