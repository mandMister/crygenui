
#pragma once

#include <wx/wx.h>
#include "Frame.hpp"

class App : public wxApp
{
public:
	App();
	bool OnInit() override;

	Frame* mWin;
};

wxIMPLEMENT_APP(App);
