/***************************************************************
 * Name:      GUI_3App.cpp
 * Purpose:   Code for Application Class
 * Author:    b ()
 * Created:   2016-02-18
 * Copyright: b ()
 * License:
 **************************************************************/

#include "GUI_3App.h"

//(*AppHeaders
#include "GUI_3Main.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(GUI_3App);

bool GUI_3App::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	GUI_3Frame* Frame = new GUI_3Frame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)

    return wxsOK;

}
