/***************************************************************
 * Name:      GUI_DiceApp.cpp
 * Purpose:   Code for Application Class
 * Author:    b ()
 * Created:   2016-02-23
 * Copyright: b ()
 * License:
 **************************************************************/

#include "GUI_DiceApp.h"

//(*AppHeaders
#include "GUI_DiceMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(GUI_DiceApp);

bool GUI_DiceApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	GUI_DiceFrame* Frame = new GUI_DiceFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
