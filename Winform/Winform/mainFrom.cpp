#include "mainFrom.h"

using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Winform::mainFrom form;
	Application::Run(% form);

}
