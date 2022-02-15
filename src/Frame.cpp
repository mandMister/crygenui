
#include "Frame.hpp"

wxBEGIN_EVENT_TABLE(Frame, wxFrame)
				EVT_BUTTON(2001, Frame::OnBtnPress)
wxEND_EVENT_TABLE()

Frame::Frame() : wxFrame(nullptr, wxID_ANY, "CryGenUI")
{
	btn = new wxButton(this, 2001, "Click Me!");
}

void Frame::OnBtnPress(wxCommandEvent &evt)
{
	std::cout << "Hello" << std::endl;
}
