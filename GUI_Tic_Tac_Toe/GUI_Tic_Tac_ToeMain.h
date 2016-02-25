/***************************************************************
 * Name:      GUI_Tic_Tac_ToeMain.h
 * Purpose:   Defines Application Frame
 * Author:    b ()
 * Created:   2016-02-25
 * Copyright: b ()
 * License:
 **************************************************************/

#ifndef GUI_TIC_TAC_TOEMAIN_H
#define GUI_TIC_TAC_TOEMAIN_H

//(*Headers(GUI_Tic_Tac_ToeFrame)
#include <wx/menu.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

class GUI_Tic_Tac_ToeFrame: public wxFrame
{
    public:

        GUI_Tic_Tac_ToeFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~GUI_Tic_Tac_ToeFrame();

    private:

        //(*Handlers(GUI_Tic_Tac_ToeFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnTwoPlayer_BClick(wxCommandEvent& event);
        //*)

        //(*Identifiers(GUI_Tic_Tac_ToeFrame)
        static const long ID_TwoPlayer_B;
        static const long ID_COMPUTER_B;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(GUI_Tic_Tac_ToeFrame)
        wxButton* TwoPlayer_B;
        wxButton* Computer_B;
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // GUI_TIC_TAC_TOEMAIN_H
