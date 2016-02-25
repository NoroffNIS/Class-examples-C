/***************************************************************
 * Name:      Calculator_GUIMain.h
 * Purpose:   Defines Application Frame
 * Author:    b ()
 * Created:   2016-02-22
 * Copyright: b ()
 * License:
 **************************************************************/

#ifndef CALCULATOR_GUIMAIN_H
#define CALCULATOR_GUIMAIN_H

//(*Headers(Calculator_GUIFrame)
#include <wx/menu.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

class Calculator_GUIFrame: public wxFrame
{
    public:

        Calculator_GUIFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~Calculator_GUIFrame();

    private:

        //(*Handlers(Calculator_GUIFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnREMOVE_BClick(wxCommandEvent& event);
        //*)

        //(*Identifiers(Calculator_GUIFrame)
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(Calculator_GUIFrame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // CALCULATOR_GUIMAIN_H
