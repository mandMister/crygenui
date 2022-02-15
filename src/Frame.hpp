
#pragma once

#include <array>
#include <wx/wx.h>

class Frame : public wxFrame
{
public:
	Frame();

private:
	void AddElement(wxCommandEvent& evt);

private:
	std::array<wxString, 2> availableModules = { "Flags", "Hashmap" };
	std::vector<wxString> usedModules = {};
};
