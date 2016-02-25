#include "GameFrame.h"
#include "tic_tac_toe_game.h"

//(*InternalHeaders(GameFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(GameFrame)
const long GameFrame::ID_TEXTCTRL1 = wxNewId();
const long GameFrame::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(GameFrame,wxFrame)
	//(*EventTable(GameFrame)
	//*)
END_EVENT_TABLE()

GameFrame::GameFrame(wxWindow* parent,wxWindowID id)
{
	//(*Initialize(GameFrame)
	Create(parent, id, _("Tic Tac Toe"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxSize(446,345));
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, _("Text"), wxPoint(280,8), wxSize(166,337), wxTE_MULTILINE, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(8,64), wxSize(256,208), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	Button2 = new wxButton(Panel1, 2, wxEmptyString, wxPoint(88,8), wxSize(80,64), 0, wxDefaultValidator, _T("2"));
	Button3 = new wxButton(Panel1, 3, wxEmptyString, wxPoint(168,8), wxSize(80,64), 0, wxDefaultValidator, _T("3"));
	Button4 = new wxButton(Panel1, 4, wxEmptyString, wxPoint(8,72), wxSize(80,64), 0, wxDefaultValidator, _T("4"));
	Button5 = new wxButton(Panel1, 5, wxEmptyString, wxPoint(88,72), wxSize(80,64), 0, wxDefaultValidator, _T("5"));
	Button6 = new wxButton(Panel1, 6, wxEmptyString, wxPoint(168,72), wxSize(80,64), 0, wxDefaultValidator, _T("6"));
	Button7 = new wxButton(Panel1, 7, wxEmptyString, wxPoint(8,136), wxSize(80,64), 0, wxDefaultValidator, _T("7"));
	Button8 = new wxButton(Panel1, 8, wxEmptyString, wxPoint(88,136), wxSize(80,64), 0, wxDefaultValidator, _T("8"));
	Button9 = new wxButton(Panel1, 9, wxEmptyString, wxPoint(168,136), wxSize(80,64), 0, wxDefaultValidator, _T("9"));
	Button1 = new wxButton(Panel1, 1, wxEmptyString, wxPoint(8,8), wxSize(80,64), 0, wxDefaultValidator, _T("1"));
	MenuBar1 = new wxMenuBar();
	SetMenuBar(MenuBar1);

	Connect(2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameFrame::OnButton1Click);
	Connect(3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameFrame::OnButton1Click);
	Connect(4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameFrame::OnButton1Click);
	Connect(5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameFrame::OnButton1Click);
	Connect(6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameFrame::OnButton1Click);
	Connect(7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameFrame::OnButton1Click);
	Connect(8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameFrame::OnButton1Click);
	Connect(9,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameFrame::OnButton1Click);
	Connect(1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameFrame::OnButton1Click);
	//*)
}

GameFrame::~GameFrame()
{
	//(*Destroy(GameFrame)
	//*)
}

void GameFrame::OnButton1Click(wxCommandEvent& event)
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
    }
    else{
        TextCtrl1->SetDefaultStyle(wxTextAttr(*wxRED));
        TextCtrl1->AppendText("\nNot a valid move!\n");
    }

}
