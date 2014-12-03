//Collecting Data from the input file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream input;
	string Sample, BgL, RelTime, AbsTime, Transfer, AM, Address, Data, Size, Cycle, Status, Iack, Fa, blank; 
	input.open("test_data.log");
	if(input.is_open())
	{
		input.ignore(10000, '\n');
		input >> Sample >> BgL >> RelTime >> AbsTime >> Transfer >> AM >> Address >> Data >> Size >> Cycle >> Status >> Iack >> Fa			  >> blank;
	}

	cout << Sample << " " << BgL << " " << RelTime << " " << AbsTime << " " << Transfer << " " << AM << " " << Address << " " << Data <<	               " " << Size << " " << Cycle  << " "<< Status  << " "<< Iack << " " << Fa << " " << blank << " " << endl;
	input.close();
	cout << "Grabbing input success" << endl;
	

return 0;
}
