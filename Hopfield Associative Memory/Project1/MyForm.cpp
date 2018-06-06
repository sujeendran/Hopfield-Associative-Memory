#include "MyForm.h"

#include <exception>
#include <Windows.h>

using namespace Project1; // This is your project name

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)

	{

		Application::EnableVisualStyles();

Application::SetCompatibleTextRenderingDefault(false);

Application::Run(gcnew MyForm());

return 0;

	}
