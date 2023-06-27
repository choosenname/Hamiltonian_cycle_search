#include "EntryForm.h"
#include "RegistrationForm.h"
#include "MainForm.h"
#include "ReferenceForm.h"
#include <Windows.h>
using namespace courseWork;

[STAThreadAttribute]

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew EntryForm);
	return 0;
}
