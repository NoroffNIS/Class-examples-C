/***************************************************************
 * Name:      GUI_DiceMain.h
 * Purpose:   Defines Application Frame
 * Author:    b ()
 * Created:   2016-02-23
 * Copyright: b ()
 * License:
 **************************************************************/

#ifndef GUI_DICEMAIN_H
#define GUI_DICEMAIN_H

//(*Headers(GUI_DiceFrame)
#include <wx/menu.h>
#include <wx/msgdlg.h>
#include <wx/statbmp.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

class GUI_DiceFrame: public wxFrame
{
    public:

        GUI_DiceFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~GUI_DiceFrame();

    private:

        //(*Handlers(GUI_DiceFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnRoll_BClick(wxCommandEvent& event);
        //*)

        //(*Identifiers(GUI_DiceFrame)
        static const long ID_ROLL_B;
        static const long ID_DICE_IMAGE;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        static const long ID_MESSAGEDIALOG1;
        //*)

        //(*Declarations(GUI_DiceFrame)
        wxButton* Roll_B;
        wxStatusBar* StatusBar1;
        wxStaticBitmap* Dice_Image;
        wxMessageDialog* MessageDialog1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // GUI_DICEMAIN_H
