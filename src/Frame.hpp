
#pragma once

#include <iostream>
#include <wx/wx.h>

class Frame : public wxFrame
{
public:
	Frame();

	void OnBtnPress(wxCommandEvent& evt);

	wxButton* btn;

	wxDECLARE_EVENT_TABLE();
};
