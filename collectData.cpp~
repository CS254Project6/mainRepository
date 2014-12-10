//Collecting Data from the input file
#include <iostream>
#include <fstream>
#include <string>
#include "DataClass.h"
#include <queue>
#include "DataOut.h"
using namespace std;

queue<FileData> parse(queue<FileData> &);

void readFromFile()
{
	queue<OutData> OutQueue;
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
		list.push(line);
	
		lines++;
	}
		//system("pause");
	
	input.close();
	cout << "Grabbing input success" << endl;
	
	//OutQueue = 
	parse(list); //passes the queue into the parser
}






