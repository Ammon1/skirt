#include "Loading.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<String^ > ^args) {

	Application::EnableVisualStyles();
Application::SetCompatibleTextRenderingDefault(false);
Matematyka::Loading formularz;
Application::Run(%formularz);
return 0;

}
