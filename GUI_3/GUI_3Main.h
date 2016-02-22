/***************************************************************
 * Name:      GUI_3Main.h
 * Purpose:   Defines Application Frame
 * Author:    b ()
 * Created:   2016-02-18
 * Copyright: b ()
 * License:
 **************************************************************/

#ifndef GUI_3MAIN_H
#define GUI_3MAIN_H

//(*Headers(GUI_3Frame)
#include <wx/stattext.h>
#include <wx/menu.h>
#include <wx/textctrl.h>
#include <wx/panel.h>
#include <wx/button.h>
#include <wx/frame.h>
//*)

class GUI_3Frame: public wxFrame
{
    public:

        GUI_3Frame(wxWindow* parent,wxWindowID id = -1);
        virtual ~GUI_3Frame();

    private:

        //(*Handlers(GUI_3Frame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnToggleButton1Toggle(wxCommandEvent& event);
        void OnTextCtrl1Text(wxCommandEvent& event);
        void OnToggleButton1Toggle1(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnTextCtrl1Text1(wxCommandEvent& event);
        void OnButton2Click(wxCommandEvent& event);
        void OnButton4Click(wxCommandEvent& event);
        void OnButton3Click(wxCommandEvent& event);
        void OnButton5Click(wxCommandEvent& event);
        void OnButton6Click(wxCommandEvent& event);
        void OnButton7Click(wxCommandEvent& event);
        void OnButton8Click(wxCommandEvent& event);
        void OnButton9Click(wxCommandEvent& event);
        void OnTextCtrl1Text2(wxCommandEvent& event);
        void OnMenuItemNewGameSelected(wxCommandEvent& event);
        void OnMSG(wxCommandEvent& event);
        //*)

        //(*Identifiers(GUI_3Frame)
        static const long ID_TEXTCTRL1;
        static const long ID_BUTTON5;
        static const long ID_BUTTON2;
        static const long ID_BUTTON1;
        static const long ID_BUTTON6;
        static const long ID_BUTTON7;
        static const long ID_BUTTON9;
        static const long ID_BUTTON8;
        static const long ID_BUTTON4;
        static const long ID_BUTTON3;
        static const long ID_PANEL1;
        static const long ID_STATICTEXT2;
        static const long ID_STATICTEXT1;
        static const long ID_MENUITEM1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        //*)

        //(*Declarations(GUI_3Frame)
        wxButton* Button4;
        wxStaticText* StaticText2;
        wxButton* Button1;
        wxPanel* Panel1;
        wxStaticText* StaticText1;
        wxButton* Button2;
        wxButton* Button6;
        wxButton* Button5;
        wxMenuItem* MenuItem3;
        wxButton* Button3;
        wxButton* Button7;
        wxButton* Button9;
        wxTextCtrl* TextCtrl1;
        wxButton* Button8;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // GUI_3MAIN_H
