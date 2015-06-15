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
        static const long ID_BUTTON13;
        static const long ID_BUTTON20;
        static const long ID_BUTTON14;
        static const long ID_BUTTON15;
        static const long ID_BUTTON16;
        static const long ID_BUTTON17;
        static const long ID_BUTTON18;
        static const long ID_BUTTON19;
        static const long ID_BUTTON21;
        static const long ID_BUTTON22;
        static const long ID_BUTTON23;
        static const long ID_BUTTON24;
        static const long ID_BUTTON25;
        static const long ID_BUTTON26;
        static const long ID_BUTTON27;
        static const long ID_BUTTON28;
        static const long ID_BUTTON29;
        static const long ID_BUTTON30;
        static const long ID_BUTTON31;
        static const long ID_PANEL2;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(Scientific_CalculatorFrame)
        wxButton* Button20;
        wxButton* Button4;
        wxButton* Button1;
        wxButton* Button14;
        wxPanel* Panel1;
        wxButton* Button26;
        wxButton* Button22;
        wxButton* Button2;
        wxButton* Button23;
        wxButton* Button30;
        wxButton* Button6;
        wxButton* Button10;
        wxButton* Button11;
        wxButton* Button5;
        wxButton* Button3;
        wxButton* Button7;
        wxButton* Button25;
        wxButton* Button28;
        wxStatusBar* StatusBar1;
        wxButton* Button19;
        wxButton* Button9;
        wxButton* Button31;
        wxButton* Button21;
        wxTextCtrl* TextCtrl1;
        wxButton* Button17;
        wxPanel* Panel2;
        wxButton* Button18;
        wxButton* Button15;
        wxButton* Button29;
        wxButton* Button13;
        wxButton* Button16;
        wxButton* Button27;
        wxButton* Button24;
        wxButton* Button8;
        wxButton* Button12;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // SCIENTIFIC_CALCULATORMAIN_H
