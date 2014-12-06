//Collecting Data from the input file
#include <iostream>
#include <fstream>
#include <string>
#include "DataClass.h"
#include <queue>
using namespace std;

int main()
{
	ifstream input;
	string Sample, BgL, RelTime, AbsTime, Transfer, AM, Address, Data, Size, Cycle, Status, Iack, Fa, blank; 
	FileData line;
	queue<FileData> list;
	input.open("test_data.log");
	input.ignore(10000, '\n');
	int lines = 1;

	while(!input.eof())
	{
		input >> Sample >> BgL >> RelTime >> AbsTime >> Transfer >> AM >> Address >> Data >> Size >> Cycle >> Status >> Iack >> Fa >> blank;
		line.setSample(Sample);
		line.setBgL(BgL);
		line.setRelTime(RelTime);
		line.setAbsTime(AbsTime);
		line.setTransfer(Transfer);
		line.setAM(AM);
		line.setAddress(Address);
		line.setData(Data);
		line.setSize(Size);
		line.setCycle(Cycle);
		line.setStatus(Status);
		line.setIack(Iack);
		line.setFail(Fa);
		line.setIRQ(blank);
		line.setLineNumber(lines);
		cout << line.getLineNumber() << " " << line.getAddress() << " " << endl;
		
		list.push(line);
	
		lines++;
	}
		//system("pause");
	
	input.close();
	while(!list.empty())
	{
		cout << list.front().getLineNumber() << endl;
		list.pop();
	}
	cout << "Grabbing input success" << endl;
	

return 0;
}
