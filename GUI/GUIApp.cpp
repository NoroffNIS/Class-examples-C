/***************************************************************
 * Name:      GUIApp.cpp
 * Purpose:   Code for Application Class
 * Author:    b ()
 * Created:   2016-02-17
 * Copyright: b ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "GUIApp.h"
#include "GUIMain.h"

IMPLEMENT_APP(GUIApp);

bool GUIApp::OnInit()
{
    
    GUIDialog* dlg = new GUIDialog(0L, _("wxWidgets Application Template"));
    dlg->SetIcon(wxICON(aaaa)); // To Set App Icon
    dlg->Show();
    return true;
}
