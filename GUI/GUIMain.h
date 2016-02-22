/***************************************************************
 * Name:      GUIMain.h
 * Purpose:   Defines Application Frame
 * Author:    b ()
 * Created:   2016-02-17
 * Copyright: b ()
 * License:
 **************************************************************/

#ifndef GUIMAIN_H
#define GUIMAIN_H

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include "GUIApp.h"


#include <wx/button.h>
#include <wx/statline.h>
class GUIDialog: public wxDialog
{
    public:
        GUIDialog(wxDialog *dlg, const wxString& title);
        ~GUIDialog();

    protected:
        enum
        {
            idBtnQuit = 1000,
            idBtnAbout
        };
        wxStaticText* m_staticText1;
        wxButton* BtnAbout;
        wxStaticLine* m_staticline1;
        wxButton* BtnQuit;

    private:
        void OnClose(wxCloseEvent& event);
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        DECLARE_EVENT_TABLE()
};

#endif // GUIMAIN_H
