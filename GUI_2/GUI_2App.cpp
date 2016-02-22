/***************************************************************
 * Name:      GUI_2App.cpp
 * Purpose:   Code for Application Class
 * Author:    b ()
 * Created:   2016-02-18
 * Copyright: b ()
 * License:
 **************************************************************/

#include "GUI_2App.h"

//(*AppHeaders
#include "GUI_2Main.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(GUI_2App);

bool GUI_2App::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	GUI_2Frame* Frame = new GUI_2Frame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
