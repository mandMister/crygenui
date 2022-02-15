
#include "App.hpp"

App::App() : wxApp()
{

}

bool App::OnInit()
{
	mWin = new Frame();
	mWin->Show();

	return true;
}
