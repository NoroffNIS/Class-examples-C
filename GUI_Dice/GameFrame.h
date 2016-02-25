#ifndef GAMEFRAME_H
#define GAMEFRAME_H

//(*Headers(GameFrame)
#include <wx/menu.h>
#include <wx/textctrl.h>
#include <wx/panel.h>
#include <wx/button.h>
#include <wx/frame.h>
//*)

class GameFrame: public wxFrame
{
	public:

		GameFrame(wxWindow* parent,wxWindowID id=wxID_ANY);
		virtual ~GameFrame();

		//(*Declarations(GameFrame)
		wxButton* Button4;
		wxButton* Button1;
		wxPanel* Panel1;
		wxButton* Button2;
		wxButton* Button6;
		wxButton* Button5;
		wxButton* Button3;
		wxButton* Button7;
		wxButton* Button9;
		wxTextCtrl* TextCtrl1;
		wxMenuBar* MenuBar1;
		wxButton* Button8;
		//*)

	protected:

		//(*Identifiers(GameFrame)
		static const long ID_TEXTCTRL1;
		static const long ID_PANEL1;
		//*)

	private:

		//(*Handlers(GameFrame)
		void OnButton1Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
