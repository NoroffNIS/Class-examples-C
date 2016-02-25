#ifndef GAMEBOARD_H
#define GAMEBOARD_H

//(*Headers(GameBoard)
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/frame.h>
//*)

class GameBoard: public wxFrame
{
	public:

		GameBoard(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~GameBoard();

		//(*Declarations(GameBoard)
		wxButton* Button4;
		wxButton* Button1;
		wxButton* Button2;
		wxTextCtrl* TextCtrl;
		wxButton* Button6;
		wxButton* Button5;
		wxButton* Button3;
		wxButton* Button7;
		wxButton* Button9;
		wxButton* Button8;
		//*)

	protected:

		//(*Identifiers(GameBoard)
		static const long ID_BUTTON1;
		static const long ID_BUTTON6;
		static const long ID_BUTTON7;
		static const long ID_BUTTON8;
		static const long ID_BUTTON9;
		static const long ID_BUTTON5;
		static const long ID_BUTTON3;
		static const long ID_BUTTON4;
		static const long ID_BUTTON2;
		static const long ID_TEXTCTRL;
		//*)

	private:

		//(*Handlers(GameBoard)
		void OnButtonClick(wxCommandEvent& event);
		void OnMenuNewGameSelected(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
