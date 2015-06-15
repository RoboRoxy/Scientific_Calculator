/***************************************************************
 * Name:      Scientific_CalculatorMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Dilshan Jayaweera (dilaaaajaya@hotmail.com)
 * Created:   2015-06-15
 * Copyright: Dilshan Jayaweera ()
 * License:
 **************************************************************/

#include "Scientific_CalculatorMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(Scientific_CalculatorFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(Scientific_CalculatorFrame)
const long Scientific_CalculatorFrame::ID_TEXTCTRL1 = wxNewId();
const long Scientific_CalculatorFrame::ID_PANEL1 = wxNewId();
const long Scientific_CalculatorFrame::ID_BUTTON1 = wxNewId();
const long Scientific_CalculatorFrame::ID_BUTTON2 = wxNewId();
const long Scientific_CalculatorFrame::ID_BUTTON3 = wxNewId();
const long Scientific_CalculatorFrame::ID_BUTTON4 = wxNewId();
const long Scientific_CalculatorFrame::ID_BUTTON5 = wxNewId();
const long Scientific_CalculatorFrame::ID_BUTTON6 = wxNewId();
const long Scientific_CalculatorFrame::ID_BUTTON7 = wxNewId();
const long Scientific_CalculatorFrame::ID_BUTTON8 = wxNewId();
const long Scientific_CalculatorFrame::ID_BUTTON9 = wxNewId();
const long Scientific_CalculatorFrame::ID_BUTTON10 = wxNewId();
const long Scientific_CalculatorFrame::ID_BUTTON11 = wxNewId();
const long Scientific_CalculatorFrame::ID_BUTTON12 = wxNewId();
const long Scientific_CalculatorFrame::ID_PANEL2 = wxNewId();
const long Scientific_CalculatorFrame::idMenuQuit = wxNewId();
const long Scientific_CalculatorFrame::idMenuAbout = wxNewId();
const long Scientific_CalculatorFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Scientific_CalculatorFrame,wxFrame)
    //(*EventTable(Scientific_CalculatorFrame)
    //*)
END_EVENT_TABLE()

Scientific_CalculatorFrame::Scientific_CalculatorFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(Scientific_CalculatorFrame)
    wxMenuItem* MenuItem2;
    wxGridBagSizer* GridBagSizer1;
    wxGridBagSizer* GridBagSizer2;
    wxMenuItem* MenuItem1;
    wxMenu* Menu1;
    wxBoxSizer* BoxSizer1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;
    wxGridBagSizer* GridBagSizer3;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    GridBagSizer1 = new wxGridBagSizer(0, 0);
    Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxSize(500,22), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    BoxSizer1->Add(TextCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel1->SetSizer(BoxSizer1);
    BoxSizer1->Fit(Panel1);
    BoxSizer1->SetSizeHints(Panel1);
    GridBagSizer1->Add(Panel1, wxGBPosition(0, 0), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    GridBagSizer2 = new wxGridBagSizer(0, 0);
    Panel2 = new wxPanel(this, ID_PANEL2, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL2"));
    GridBagSizer3 = new wxGridBagSizer(0, 0);
    Button1 = new wxButton(Panel2, ID_BUTTON1, _("X!"), wxDefaultPosition, wxSize(50,30), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    GridBagSizer3->Add(Button1, wxGBPosition(0, 0), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button2 = new wxButton(Panel2, ID_BUTTON2, _("("), wxDefaultPosition, wxSize(50,30), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    GridBagSizer3->Add(Button2, wxGBPosition(0, 1), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button3 = new wxButton(Panel2, ID_BUTTON3, _(")"), wxDefaultPosition, wxSize(50,30), 0, wxDefaultValidator, _T("ID_BUTTON3"));
    GridBagSizer3->Add(Button3, wxGBPosition(0, 2), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button4 = new wxButton(Panel2, ID_BUTTON4, _("%"), wxDefaultPosition, wxSize(50,30), 0, wxDefaultValidator, _T("ID_BUTTON4"));
    GridBagSizer3->Add(Button4, wxGBPosition(0, 3), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button5 = new wxButton(Panel2, ID_BUTTON5, _("AC"), wxDefaultPosition, wxSize(50,30), 0, wxDefaultValidator, _T("ID_BUTTON5"));
    GridBagSizer3->Add(Button5, wxGBPosition(0, 4), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button6 = new wxButton(Panel2, ID_BUTTON6, _("Inv"), wxDefaultPosition, wxSize(50,30), 0, wxDefaultValidator, _T("ID_BUTTON6"));
    GridBagSizer3->Add(Button6, wxGBPosition(1, 0), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button7 = new wxButton(Panel2, ID_BUTTON7, _("sin"), wxDefaultPosition, wxSize(50,30), 0, wxDefaultValidator, _T("ID_BUTTON7"));
    GridBagSizer3->Add(Button7, wxGBPosition(1, 1), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button8 = new wxButton(Panel2, ID_BUTTON8, _("In"), wxDefaultPosition, wxSize(50,30), 0, wxDefaultValidator, _T("ID_BUTTON8"));
    GridBagSizer3->Add(Button8, wxGBPosition(1, 2), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button9 = new wxButton(Panel2, ID_BUTTON9, _("7"), wxDefaultPosition, wxSize(50,30), 0, wxDefaultValidator, _T("ID_BUTTON9"));
    GridBagSizer3->Add(Button9, wxGBPosition(1, 3), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button10 = new wxButton(Panel2, ID_BUTTON10, _("8"), wxDefaultPosition, wxSize(50,30), 0, wxDefaultValidator, _T("ID_BUTTON10"));
    GridBagSizer3->Add(Button10, wxGBPosition(1, 4), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button11 = new wxButton(Panel2, ID_BUTTON11, _("9"), wxDefaultPosition, wxSize(50,30), 0, wxDefaultValidator, _T("ID_BUTTON11"));
    GridBagSizer3->Add(Button11, wxGBPosition(1, 5), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button12 = new wxButton(Panel2, ID_BUTTON12, _("/"), wxDefaultPosition, wxSize(50,30), 0, wxDefaultValidator, _T("ID_BUTTON12"));
    GridBagSizer3->Add(Button12, wxGBPosition(1, 6), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel2->SetSizer(GridBagSizer3);
    GridBagSizer3->Fit(Panel2);
    GridBagSizer3->SetSizeHints(Panel2);
    GridBagSizer2->Add(Panel2, wxGBPosition(0, 0), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    GridBagSizer1->Add(GridBagSizer2, wxGBPosition(1, 0), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(GridBagSizer1);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    GridBagSizer1->Fit(this);
    GridBagSizer1->SetSizeHints(this);

    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Scientific_CalculatorFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Scientific_CalculatorFrame::OnAbout);
    //*)
}

Scientific_CalculatorFrame::~Scientific_CalculatorFrame()
{
    //(*Destroy(Scientific_CalculatorFrame)
    //*)
}

void Scientific_CalculatorFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void Scientific_CalculatorFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}
