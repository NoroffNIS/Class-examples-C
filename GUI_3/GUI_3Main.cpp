/***************************************************************
 * Name:      GUI_3Main.cpp
 * Purpose:   Code for Application Frame
 * Author:    b ()
 * Created:   2016-02-18
 * Copyright: b ()
 * License:
 **************************************************************/

#include "GUI_3Main.h"
#include <wx/msgdlg.h>
#include "tic_tac_toe_game.h"

//(*InternalHeaders(GUI_3Frame)
#include <wx/settings.h>
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)


//helper functions
enum wxbuildinfoformat
{
    short_f, long_f
};

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



//(*IdInit(GUI_3Frame)
const long GUI_3Frame::ID_TEXTCTRL1 = wxNewId();
const long GUI_3Frame::ID_BUTTON5 = wxNewId();
const long GUI_3Frame::ID_BUTTON2 = wxNewId();
const long GUI_3Frame::ID_BUTTON1 = wxNewId();
const long GUI_3Frame::ID_BUTTON6 = wxNewId();
const long GUI_3Frame::ID_BUTTON7 = wxNewId();
const long GUI_3Frame::ID_BUTTON9 = wxNewId();
const long GUI_3Frame::ID_BUTTON8 = wxNewId();
const long GUI_3Frame::ID_BUTTON4 = wxNewId();
const long GUI_3Frame::ID_BUTTON3 = wxNewId();
const long GUI_3Frame::ID_PANEL1 = wxNewId();
const long GUI_3Frame::ID_STATICTEXT2 = wxNewId();
const long GUI_3Frame::ID_STATICTEXT1 = wxNewId();
const long GUI_3Frame::ID_MENUITEM1 = wxNewId();
const long GUI_3Frame::idMenuQuit = wxNewId();
const long GUI_3Frame::idMenuAbout = wxNewId();
//*)

BEGIN_EVENT_TABLE(GUI_3Frame,wxFrame)
    //(*EventTable(GUI_3Frame)
    //*)
END_EVENT_TABLE()

GUI_3Frame::GUI_3Frame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(GUI_3Frame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxMenu* Menu1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(566,312));
    SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(280,64), wxSize(248,200), wxTE_MULTILINE, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(32,64), wxSize(224,200), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    Panel1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVEBORDER));
    Button5 = new wxButton(Panel1, ID_BUTTON5, wxEmptyString, wxPoint(16,16), wxSize(64,56), 0, wxDefaultValidator, _T("ID_BUTTON5"));
    wxFont Button5Font(18,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("@Adobe Fan Heiti Std B"),wxFONTENCODING_DEFAULT);
    Button5->SetFont(Button5Font);
    Button2 = new wxButton(Panel1, ID_BUTTON2, wxEmptyString, wxPoint(80,16), wxSize(64,56), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    Button1 = new wxButton(Panel1, ID_BUTTON1, wxEmptyString, wxPoint(144,16), wxSize(64,56), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Button6 = new wxButton(Panel1, ID_BUTTON6, wxEmptyString, wxPoint(16,72), wxSize(64,56), 0, wxDefaultValidator, _T("ID_BUTTON6"));
    Button7 = new wxButton(Panel1, ID_BUTTON7, wxEmptyString, wxPoint(80,72), wxSize(64,56), 0, wxDefaultValidator, _T("ID_BUTTON7"));
    Button9 = new wxButton(Panel1, ID_BUTTON9, wxEmptyString, wxPoint(144,72), wxSize(64,56), 0, wxDefaultValidator, _T("ID_BUTTON9"));
    Button8 = new wxButton(Panel1, ID_BUTTON8, wxEmptyString, wxPoint(16,128), wxSize(64,56), 0, wxDefaultValidator, _T("ID_BUTTON8"));
    Button4 = new wxButton(Panel1, ID_BUTTON4, wxEmptyString, wxPoint(80,128), wxSize(64,56), 0, wxDefaultValidator, _T("ID_BUTTON4"));
    Button3 = new wxButton(Panel1, ID_BUTTON3, wxEmptyString, wxPoint(144,128), wxSize(64,56), 0, wxDefaultValidator, _T("ID_BUTTON3"));
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Board"), wxPoint(40,32), wxSize(184,24), 0, _T("ID_STATICTEXT2"));
    wxFont StaticText2Font(18,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("@Adobe Gothic Std B"),wxFONTENCODING_DEFAULT);
    StaticText2->SetFont(StaticText2Font);
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Game play:"), wxPoint(288,32), wxSize(184,24), 0, _T("ID_STATICTEXT1"));
    wxFont StaticText1Font(18,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("@Adobe Gothic Std B"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem3 = new wxMenuItem(Menu1, ID_MENUITEM1, _("New Game"), wxEmptyString, wxITEM_NORMAL);
    Menu1->Append(MenuItem3);
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);

    Connect(ID_TEXTCTRL1,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&GUI_3Frame::OnTextCtrl1Text2);
    Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GUI_3Frame::OnButton1Click);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GUI_3Frame::OnButton1Click);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GUI_3Frame::OnButton1Click);
    Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GUI_3Frame::OnButton1Click);
    Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GUI_3Frame::OnButton1Click);
    Connect(ID_BUTTON9,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GUI_3Frame::OnButton1Click);
    Connect(ID_BUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GUI_3Frame::OnButton1Click);
    Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GUI_3Frame::OnButton1Click);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GUI_3Frame::OnButton1Click);
    Connect(ID_MENUITEM1,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&GUI_3Frame::OnMenuItemNewGameSelected);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&GUI_3Frame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&GUI_3Frame::OnAbout);
    //*)
}

GUI_3Frame::~GUI_3Frame()
{
    //(*Destroy(GUI_3Frame)
    //*)

}

void GUI_3Frame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void GUI_3Frame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome TIC TAC TOE !!"));
}

void GUI_3Frame::OnButton1Click(wxCommandEvent& event)
{
    int id, res;
    int turn;
    wxString msg;
    wxString mark;
    wxString msg_res;

    id = event.GetId()-100;
    turn = player_turn;
    mark << player_mark[turn];
    res = input_value(id);

    wxButton *b = (wxButton*)event.GetEventObject();

    msg_res << "res: " << res << "ID: " << id;
    TextCtrl1->AppendText(msg_res);
    wxFont font(36, wxFONTFAMILY_DEFAULT, wxNORMAL, wxNORMAL);
    b->SetFont(font);
    if(res == -2){
        b->SetLabel(mark);
        TextCtrl1->SetDefaultStyle(wxTextAttr(*wxGREEN));
        msg << "\nGood move!\n\nPlayer " << player_turn+1 << "'s turn with "<<player_mark[player_turn]<<"\n";
        TextCtrl1->AppendText(msg);
        TextCtrl1->AppendText("\n");
    }else if(res == 0 || res == 1){
        b->SetLabel(mark);
        wxString msg;
        msg << "The winner is " << turn+1 << "\nWith mark: " << mark;
        TextCtrl1->AppendText(msg);
        wxMessageBox(msg, _("We have a winner!!"));
    }
    else{
        TextCtrl1->SetDefaultStyle(wxTextAttr(*wxRED));
        TextCtrl1->AppendText("\nNot a valid move!\n");
    }




}

void GUI_3Frame::OnTextCtrl1Text2(wxCommandEvent& event)
{

}

void GUI_3Frame::OnMenuItemNewGameSelected(wxCommandEvent& event)
{
    wxString start_msg;
    start_game();
    start_msg << "Player "<< player_turn+1 << " starts with: "<< player_mark[player_turn] << "\n";
    TextCtrl1->SetValue(start_msg);
    Button1->SetLabel(" ");
    Button2->SetLabel(" ");
    Button3->SetLabel(" ");
    Button4->SetLabel(" ");
    Button5->SetLabel(" ");
    Button6->SetLabel(" ");
    Button7->SetLabel(" ");
    Button8->SetLabel(" ");
    Button9->SetLabel(" ");
}
