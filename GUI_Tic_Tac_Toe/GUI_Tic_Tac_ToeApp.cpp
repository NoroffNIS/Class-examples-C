/***************************************************************
 * Name:      GUI_Tic_Tac_ToeApp.cpp
 * Purpose:   Code for Application Class
 * Author:    b ()
 * Created:   2016-02-25
 * Copyright: b ()
 * License:
 **************************************************************/

#include "GUI_Tic_Tac_ToeApp.h"

//(*AppHeaders
#include "GUI_Tic_Tac_ToeMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(GUI_Tic_Tac_ToeApp);

bool GUI_Tic_Tac_ToeApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	GUI_Tic_Tac_ToeFrame* Frame = new GUI_Tic_Tac_ToeFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
