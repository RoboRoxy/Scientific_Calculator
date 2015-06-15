/***************************************************************
 * Name:      Scientific_CalculatorApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Dilshan Jayaweera (dilaaaajaya@hotmail.com)
 * Created:   2015-06-15
 * Copyright: Dilshan Jayaweera ()
 * License:
 **************************************************************/

#include "Scientific_CalculatorApp.h"

//(*AppHeaders
#include "Scientific_CalculatorMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(Scientific_CalculatorApp);

bool Scientific_CalculatorApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	Scientific_CalculatorFrame* Frame = new Scientific_CalculatorFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
