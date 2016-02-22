/***************************************************************
 * Name:      GUI_2Main.h
 * Purpose:   Defines Application Frame
 * Author:    b ()
 * Created:   2016-02-18
 * Copyright: b ()
 * License:
 **************************************************************/

#ifndef GUI_2MAIN_H
#define GUI_2MAIN_H

//(*Headers(GUI_2Frame)
#include <wx/menu.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

class GUI_2Frame: public wxFrame
{
    public:

        GUI_2Frame(wxWindow* parent,wxWindowID id = -1);
        virtual ~GUI_2Frame();

    private:

        //(*Handlers(GUI_2Frame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(GUI_2Frame)
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(GUI_2Frame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // GUI_2MAIN_H
