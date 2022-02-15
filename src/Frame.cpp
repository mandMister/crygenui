
#include "Frame.hpp"

Frame::Frame() : wxFrame(nullptr, wxID_ANY, "CryGenUI")
{
	wxBoxSizer* avModList = new wxBoxSizer(wxVERTICAL);

	for (const wxString& elem : availableModules)
	{
		wxButton* btn = new wxButton(this, wxID_ANY, elem);
		btn->Bind(wxEVT_BUTTON, &Frame::AddElement, this);
		avModList->Add(btn, 1, wxEXPAND, 0);
	}

	SetSizerAndFit(avModList);
}

void Frame::AddElement(wxCommandEvent &evt)
{

}
