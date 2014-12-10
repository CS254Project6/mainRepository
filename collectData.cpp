//Collecting Data from the input file
#include <iostream>
#include <fstream>
#include <string>
#include "DataClass.h"
#include <queue>
#include "DataOut.h"
#include<vector>
#include<cstdlib>
#include "TextFormat.h"
using namespace std;

void parse(vector<FileData> &, vector<OutData> &);
void toFile(vector<OutData> &);
void readFromFile(char *file_name)
{
	cout << file_name << endl;
	vector<OutData> OutQueue;
	
	ifstream input;
	string Sample, BgL, RelTime, AbsTime, Transfer, AM, Address, Data, Size, Cycle, Status, Iack, Fa, blank; 
	
	vector<FileData> list;
	input.open(file_name);
	if(input.is_open())
	{
		cout << "Valid File" << endl;
	}
	else
	{
		cout << "Invalid File" << endl;
		exit(1);
	}
	input.ignore(10000, '\n');
	int lines = 1;

	while(!input.eof())
	{
		FileData line;
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
		list.push_back(line);
		cout << "Collecting data from file" << endl;
		lines++;
	}
		//system("pause");
	
	input.close();
	cout << "List size: " << list.size() << endl;
	cout << "Grabbing input success" << endl;
	
	parse(list,OutQueue); //passes the queue into the parser
	
	toFile(OutQueue);
}






