#include <iostream>
#include "IniFile.h"
using namespace std;

int main() 
{
	IniFile inifile;
	inifile.load("./main.ini");

	inifile.show();
	inifile.save("./temp.ini");
	return 0;
}