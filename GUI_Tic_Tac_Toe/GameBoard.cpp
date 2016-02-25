#include "GameBoard.h"
#include "Tic_Tac_Toe_logic.h"

//(*InternalHeaders(GameBoard)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(GameBoard)
const long GameBoard::ID_BUTTON1 = wxNewId();
const long GameBoard::ID_BUTTON6 = wxNewId();
const long GameBoard::ID_BUTTON7 = wxNewId();
const long GameBoard::ID_BUTTON8 = wxNewId();
const long GameBoard::ID_BUTTON9 = wxNewId();
const long GameBoard::ID_BUTTON5 = wxNewId();
const long GameBoard::ID_BUTTON3 = wxNewId();
const long GameBoard::ID_BUTTON4 = wxNewId();
const long GameBoard::ID_BUTTON2 = wxNewId();
const long GameBoard::ID_TEXTCTRL = wxNewId();
//*)

BEGIN_EVENT_TABLE(GameBoard,wxFrame)
    //(*EventTable(GameBoard)
    //*)
END_EVENT_TABLE()

GameBoard::GameBoard(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
    //(*Initialize(GameBoard)
    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    SetClientSize(wxSize(712,450));
    Move(wxDefaultPosition);
    Button1 = new wxButton(this, ID_BUTTON1, wxEmptyString, wxPoint(48,80), wxSize(80,72), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Button6 = new wxButton(this, ID_BUTTON6, wxEmptyString, wxPoint(136,160), wxSize(80,72), 0, wxDefaultValidator, _T("ID_BUTTON6"));
    Button7 = new wxButton(this, ID_BUTTON7, wxEmptyString, wxPoint(224,160), wxSize(80,72), 0, wxDefaultValidator, _T("ID_BUTTON7"));
    Button8 = new wxButton(this, ID_BUTTON8, wxEmptyString, wxPoint(48,240), wxSize(80,72), 0, wxDefaultValidator, _T("ID_BUTTON8"));
    Button9 = new wxButton(this, ID_BUTTON9, wxEmptyString, wxPoint(136,240), wxSize(80,72), 0, wxDefaultValidator, _T("ID_BUTTON9"));
    Button5 = new wxButton(this, ID_BUTTON5, wxEmptyString, wxPoint(224,240), wxSize(80,72), 0, wxDefaultValidator, _T("ID_BUTTON5"));
    Button3 = new wxButton(this, ID_BUTTON3, wxEmptyString, wxPoint(48,160), wxSize(80,72), 0, wxDefaultValidator, _T("ID_BUTTON3"));
    Button4 = new wxButton(this, ID_BUTTON4, wxEmptyString, wxPoint(224,80), wxSize(80,72), 0, wxDefaultValidator, _T("ID_BUTTON4"));
    Button2 = new wxButton(this, ID_BUTTON2, wxEmptyString, wxPoint(136,80), wxSize(80,72), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    TextCtrl = new wxTextCtrl(this, ID_TEXTCTRL, wxEmptyString, wxPoint(376,72), wxSize(264,256), wxTE_MULTILINE, wxDefaultValidator, _T("ID_TEXTCTRL"));

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GameBoard::OnButtonClick);
    //*)
}

GameBoard::~GameBoard()
{
    //(*Destroy(GameBoard)
    //*)
}




void GameBoard::OnButtonClick(wxCommandEvent& event)
{
    int id, pT;
    wxString id_s, msg_debug, pM;
    wxButton *b = (wxButton*) event.GetEventObject();

    id = b->GetId()-104;
    id_s << id;
    pT = player_turn;
    pM << player_mark[pT];
    msg_debug << "ID: " << id_s << "\n";

    wxFont font(36, wxFONTFAMILY_DEFAULT, wxNORMAL, wxNORMAL);
    b->SetFont(font);

    int res = input_number(id);
    msg_debug << "res: " << res;
    TextCtrl->AppendText(msg_debug);
    if(res == -2)
    {
        b->SetLabel(pM);
        TextCtrl->AppendText("Walid move\n");
    }
    else if(res == 0 || res == 1)
    {
        b->SetLabel(pM);
        wxString msg;
        msg << res <<" We have a winner!!\n Winner is player " << pT << " with mark: " << pM << "\n";
        TextCtrl->AppendText(msg);
    }
    else
    {
        wxString msg1;
        msg1 << "No winner win\n";
        TextCtrl->AppendText(msg1);
        TextCtrl->AppendText("NOT Walid move\n");
    }
    msg_debug << "PM: " << player_mark[player_turn] << " PT: " << player_turn << "\nRES:" << res <<"\n ------------- \n";
    TextCtrl->AppendText(msg_debug);
}

void GameBoard::OnMenuNewGameSelected(wxCommandEvent& event)
{
    wxString msg_debug;
    start_game();
    TextCtrl->Clear();
    msg_debug << "New game Started\n";
    TextCtrl->AppendText(msg_debug);
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
