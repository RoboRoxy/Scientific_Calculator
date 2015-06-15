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
#include <wx/sizer.h>
#include <wx/menu.h>
#include <wx/textctrl.h>
#include <wx/panel.h>
#include <wx/gbsizer.h>
#include <wx/button.h>
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
        static const long ID_TEXTCTRL1;
        static const long ID_PANEL1;
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON3;
        static const long ID_BUTTON4;
        static const long ID_BUTTON5;
        static const long ID_BUTTON6;
        static const long ID_BUTTON7;
        static const long ID_BUTTON8;
        static const long ID_BUTTON9;
        static const long ID_BUTTON10;
        static const long ID_BUTTON11;
        static const long ID_BUTTON12;
        static const long ID_PANEL2;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(Scientific_CalculatorFrame)
        wxButton* Button4;
        wxButton* Button1;
        wxPanel* Panel1;
        wxButton* Button2;
        wxButton* Button6;
        wxButton* Button10;
        wxButton* Button11;
        wxButton* Button5;
        wxButton* Button3;
        wxButton* Button7;
        wxStatusBar* StatusBar1;
        wxButton* Button9;
        wxTextCtrl* TextCtrl1;
        wxPanel* Panel2;
        wxButton* Button8;
        wxButton* Button12;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // SCIENTIFIC_CALCULATORMAIN_H
