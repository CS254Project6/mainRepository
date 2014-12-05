//Collecting Data from the input file
#include <iostream>
#include <fstream>
#include <string>
#include "DataClass.h"
using namespace std;

int main()
{
	ifstream input;
	string Sample, BgL, RelTime, AbsTime, Transfer, AM, Address, Data, Size, Cycle, Status, Iack, Fa, blank; 
	input.open("test_data.log");
	FileData line;
	input.ignore(10000, '\n');
	int lines = 1;

	while(input.is_open())
	{
		input >> Sample >> BgL >> RelTime >> AbsTime >> Transfer >> AM >> Address >> Data >> Size >> Cycle >> Status >> Iack >> Fa >> blank;

	// Store this info into the class FileData line

	// Send this class to another function to do work/translation


	// Iterate lines to keep track of line numbers
		lines++;
	}
	input.close();
	cout << "Grabbing input success" << endl;
	

return 0;
}
