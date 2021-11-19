#include "Stats.h"
#include "Main.h"
#include "Task.h"
#include <Windows.h>

using namespace Project1;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Main);
	//
	Application::Run(gcnew Stats);
	//
	Application::Run(gcnew Task);
	return 0;
}
