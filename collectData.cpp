//Collecting Data from the input file
#include <iostream>
#include <fstream>
#include <string>
#include "DataClass.h"
#include <queue>
#include "DataOut.h"
#include<vector>
#include<cstdlib>

using namespace std;

void parse(vector<FileData> &, vector<OutData> &);
void toFile(vector<OutData> &);
void readFromFile(char *file_name)
{
	cout << file_name << endl;
	vector<OutData> OutQueue;
	//TextClass writeToFile;
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
	cout << "Size of processed data: " << OutQueue.size();
	//toFile(OutQueue);
	
	// --------------------------------------------
	// ------------- PRESENTATION STUFF -----------
	// -------------- DELETE AFTER ----------------
	// --------------------------------------------
	
	
	bool display = false;
	char answer;
	
	cout << "\nDisplay results? (y/n) ";
	cin >> answer;
	
	if ( answer == 'Y' || answer == 'y' )
		display = true;
	
	while ( display && !OutQueue.empty() )
	{
		cout << "Line " << OutQueue.front().getlinenumber() << ": ";
		if ( OutQueue.front().getwrite())
			cout << " Write ";
		else
			cout << " Read ";
		if ( OutQueue.front().getD2S())
			cout << " D-to-S ";
		else
			cout << " S-to-D ";
		cout << "command: " << OutQueue.front().getwords() << " words";
		
		for ( int i = 0; i <= OutQueue.front().getwords(); i++)
				{
					switch (i)
					{
						case 0:
							cout << "\nWord " << i << ": Rec_Ctrl = ";
							cout << OutQueue.front().getRec_Ctrl();
							break;
						case 1:
							cout << "\nWord " << i << ": Cmd_Type = ";
							cout << OutQueue.front().getCmd_Type();
							break;
						case 4:
							cout << "\nWord " << i << ": Rec_Raw = ";
							cout << OutQueue.front().getRec_Raw();
							break;
						case 5:
							cout << "\nWord " << i << ": Cmd_ID = ";
							cout << OutQueue.front().getCmd_ID();
							break;
						case 10:
							cout << "\nWord " << i << ": Num_Responses = ";
							cout << OutQueue.front().getNum_Responses();
							break;
						case 15:
							cout << "\nWord " << i << ": Reset_Enable = ";
							cout << OutQueue.front().getReset_Enable();
							break;
						case 22:
							cout << "\nWord " << i << ": Direction = ";
							cout << OutQueue.front().getDirection();
							break;
						case 32:
							cout << "\nWord " << i << ": Num_Samples = ";
							cout << OutQueue.front().getNum_Samples();
							break;
						case 37:
							cout << "\nWord " << i << ": Parity = ";
							cout << OutQueue.front().getParity();
							break;
						case 38:
							cout << "\nWord " << i << ": Test = ";
							cout << OutQueue.front().getTest();
							break;
						case 40:
							cout << "\nWord " << i << ": Ctrl_Enable = ";
							cout << OutQueue.front().getCtrl_Enable();
							break;
						case 41:
							cout << "\nWord " << i << ": Code = ";
							cout << OutQueue.front().getCode();
							break;
						default:
							break;
					}
		}
		
		OutQueue.erase(OutQueue.begin());
		cout << endl << endl;
	}
}






