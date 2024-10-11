#include "pch.h"
#include <fstream> //File stream for file handling
#include <string>
#include <msclr/marshal_cppstd.h> //library for converting System::String to std::string
#include "22F-3274_22F-3327_Main_Interface.h" //our main interface, has all the classes
#include <math.h> //using the to just once in the code to calculate square root in Distance.h
TMS TMS_Main;
int disx = 0;
float r1 = 6, r2 = 6;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
using namespace std;
#pragma region Froms
//header files for all the forms
#include "22F-3274_22F-3327_LogIn.h"
#include "22F-3274_22F-3327_SignUp.h"
#include "22F-3274_22F-3327_Admin_Form.h"
#include "22F-3274_22F-3327_Customer_Form.h"
#include "22F-3274_22F-3327_Driver_Form.h"
#include "22F-3274_22F-3327_Distance.h"
#include "22F-3274_22F-3327_RatingGiver.h"
#include "22F-3274_22F-3327_Driver_Service.h"
#include "22F-3274_22F-3327_Vehicle_Service.h"
#pragma endregion
[STAThread]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew TMS_Forms::Login_Form());
	return 0;
}