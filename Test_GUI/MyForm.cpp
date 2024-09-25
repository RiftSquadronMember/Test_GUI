#include <iostream>
#include <windows.h>
#include <vector>
#include <random>
#include <string>
#include <ctime>
#include <cmath>
#include "MyForm.h"




void text_visualise(std::string text, int avg_speed) {
	for (int i = 0; i < text.length(); i++) {
		std::cout << text[i];
		if (text[i] == ',') {
			Sleep(700);
		}
		else if (text[i] == '.') {
			Sleep(1500);
		}
		else { Sleep(avg_speed); }
	}
}


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	TestGUI::MyForm form;
	Application::Run(% form);
}