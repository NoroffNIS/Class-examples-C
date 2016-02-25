/***************************************************************
 * Name:      Calculator_GUIApp.cpp
 * Purpose:   Code for Application Class
 * Author:    b ()
 * Created:   2016-02-22
 * Copyright: b ()
 * License:
 **************************************************************/

#include "Calculator_GUIApp.h"

//(*AppHeaders
#include "Calculator_GUIMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(Calculator_GUIApp);

bool Calculator_GUIApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	Calculator_GUIFrame* Frame = new Calculator_GUIFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
