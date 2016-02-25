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
#include <wx/stattext.h>
#include <wx/menu.h>
#include <wx/textctrl.h>
#include <wx/statbmp.h>
#include <wx/button.h>
#include <wx/frame.h>
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
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_TEXTCTRL1;
        static const long ID_TEXTCTRL3;
        static const long ID_TEXTCTRL2;
        static const long ID_STATICTEXT2;
        static const long ID_STATICTEXT1;
        static const long ID_STATICBITMAP1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        //*)

        //(*Declarations(Calculator_GUIFrame)
        wxStaticText* StaticText2;
        wxStaticBitmap* StaticBitmap1;
        wxStaticText* StaticText1;
        wxTextCtrl* NUM_ONE;
        wxButton* REMOVE_B;
        wxTextCtrl* TextBox;
        wxButton* ADD_B;
        wxTextCtrl* NUM_TWO;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // CALCULATOR_GUIMAIN_H
