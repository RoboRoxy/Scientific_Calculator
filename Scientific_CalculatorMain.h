/***************************************************************
 * Name:      Scientific_CalculatorMain.h
 * Purpose:   Defines Application Frame
 * Author:    Dilshan Jayaweera (dilaaaajaya@hotmail.com)
 * Created:   2015-06-15
 * Copyright: Dilshan Jayaweera ()
 * License:
 **************************************************************/

#ifndef SCIENTIFIC_CALCULATORMAIN_H
#define SCIENTIFIC_CALCULATORMAIN_H

//(*Headers(Scientific_CalculatorFrame)
#include <wx/menu.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

class Scientific_CalculatorFrame: public wxFrame
{
    public:

        Scientific_CalculatorFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~Scientific_CalculatorFrame();

    private:

        //(*Handlers(Scientific_CalculatorFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(Scientific_CalculatorFrame)
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(Scientific_CalculatorFrame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // SCIENTIFIC_CALCULATORMAIN_H
