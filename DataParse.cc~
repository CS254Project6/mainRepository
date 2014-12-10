#include "DataClass.h"
#include "DataOut.h"
#include<iostream>
#include<iomanip>
#include <string>
#include <bitset>
#include <sstream>
#include <vector>
#include <queue>
#include <stack>
#include<cstdlib>
using namespace std;

// FUNCTION DECLARATIONS

void Hex_Splitter(string a, string &b, string &c);
//splits 8 digit hexadecimal string in half
int Hex_to_Dec(string a);
//converts Hexadecimal string to word count as an int
string Hex_to_Bin(string a);
//converts Hexadecimal string to 16 bit Binary string 
int zero ( string );
//Calls the 0 word using bits 14-13
int one ( string );
//Calls the 1 word using bits 15-13
int four ( string );
//Calls the 4 word using bit 0
int five ( string );
//Calls the 5 word using bits 6-0
int ten ( string );
//Calls the 10 word using bits 15-11
int fifteen ( string );
//Calls the 15 word using bit 2
int twentytwo ( string );
//Calls the 22 word using bit 3
int thirtytwo ( string );
//Calls the 32 word using bits 14-0
int thirtyseven ( string );
//Calls the 37 word using bit 15
int thirtyeight ( string );
//Calls the 38 word using bit 14
int forty ( string );
//Calls the 40 word using bit 7
int fortyone ( string );
//Calls the 41 word using bit 14-8

// BEGIN MAIN FILE ITERATION

queue<OutData> parse(queue<FileData> &list)
{
	queue<OutData> returnList;      //May need fixing
	
	// NEED AN INTERATION LOOP TO GO THROUGH THE LINKED LIST
	while ( !list.empty() )
	{
		OutData data;
		FileData temp = list.front();
		int Word_Num = 0;
		
		bool createData = false;
		bool d2s = false;
		
		if ( temp.getAddress() == "40000810" )
		{
			//grab first Hexadecimal to get # of words
			Word_Num=Hex_to_Dec(temp.getData());
		}
		else if ( temp.getAddress() == "40000C18" )
		{
			//grab first Hexadecimal to get # of words
			Word_Num=Hex_to_Dec(temp.getData());
			d2s = true;
		}
		
		
		/*
		%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
		%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
		%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
		Changed some of the class defintions.
		*/
		if (createData == true)
		{
			if ( d2s == false )
				//data.setD2S=false;
				data.setD2S(false);
			else
				//data.setD2S=true;
				data.setD2S(true);
			data.setwords(Word_Num);
			data.setlinenumber(temp.getLineNumber());
			
			if(temp.getCycle() == "Wr")
				//data.setwrite=true;
				data.setwrite(true);
			else
				//data.setwrite=false;
				data.setwrite(false);
			
		
			if (Word_Num!=0)
			{
				// Create a Vector in order from 0 -> highest
				vector<string> next;
				
				list.pop();
				temp = list.front();
				string aa = NULL;
				string bb = NULL;
				Hex_Splitter(temp.getData(),aa,bb);
				aa=Hex_to_Bin(aa);
				bb=Hex_to_Bin(bb);
				next.push_back(aa);
				next.push_back(bb);
				string tempAddress = list.front().getAddress();
				list.pop();
				temp = list.front();
				
				bool hilo = false;
				if (Hex_to_Dec(tempAddress) > Hex_to_Dec(temp.getAddress()))
					hilo = true;
					
				for ( int i = 1; i <= (Word_Num/2); i++)
				{
					string aa;
					string bb;
					Hex_Splitter(temp.getData(),aa,bb);
					aa=Hex_to_Bin(aa);
					bb=Hex_to_Bin(bb);
					//if statement to deal with low high high low ordering
					if ( hilo == true )
					{
						next.push_back(bb);
						next.push_back(aa);
					}
					else
					{
						next.push_back(aa);
						next.push_back(bb);
					}
					list.pop();
					temp = list.front();
				}
				
				// According to how ever many words are in the code, assign certain values to it.
				for ( int i = 0; i <= Word_Num; i++)
				{
					switch (i)
					{
						case 0:
							data.setRec_Ctrl(zero(next[0]));
							break;
						case 1:
							data.setCmd_Type(one(next[1]));
							break;
						case 4:
							data.setRec_Raw(four(next[4]));
							break;
						case 5:
							data.setCmd_ID(five(next[5]));
							break;
						case 10:
							data.setNum_Responses(ten(next[10]));
							break;
						case 15:
							data.setReset_Enable(fifteen(next[15]));
							break;
						case 22:
							data.setDirection(twentytwo(next[22]));
							break;
						case 32:
							data.setNum_Samples(thirtytwo(next[32]));
							break;
						case 37:
							data.setParity(thirtyseven(next[37]));
							break;
						case 38:
							data.setTest(thirtyeight(next[38]));
							break;
						case 40:
							data.setCtrl_Enable(forty(next[40]));
							break;
						case 41:
							data.setCode(fortyone(next[41]));
							break;
						default:
							break;
					}
				}
			}
			
			returnList.push(data);
		}
		
		list.pop();
	}
	
	return returnList;
}

// FUNCTION DEFINITIONS

int zero ( string bits )  //Calls the 0 word using bits 14-13
{
	string bitValue = "";
	
	bitValue.push_back(bits[1]);
	bitValue.push_back(bits[2]);
	
	return (atoi(bitValue.c_str()));
}

int one ( string bits )
//Calls the 1 word using bits 15-13
{
	string bitValue = "";
	
	bitValue.push_back(bits[0]);
	bitValue.push_back(bits[1]);
	bitValue.push_back(bits[2]);
	
	return (atoi(bitValue.c_str()));
}

int four ( string bits )
//Calls the 4 word using bit 0
{
	string bitValue = "";
	
	bitValue.push_back(bits[15]);
	
	return (atoi(bitValue.c_str()));
}

int five ( string bits )
//Calls the 5 word using bits 6-0
{
	string bitValue = "";
	
	bitValue.push_back(bits[9]);
	bitValue.push_back(bits[10]);
	bitValue.push_back(bits[11]);
	bitValue.push_back(bits[12]);
	bitValue.push_back(bits[13]);
	bitValue.push_back(bits[14]);
	bitValue.push_back(bits[15]);
	
	return (atoi(bitValue.c_str()));
}

int ten ( string bits )
//Calls the 10 word using bits 15-11
{
	string bitValue = "";
	
	bitValue.push_back(bits[0]);
	bitValue.push_back(bits[1]);
	bitValue.push_back(bits[2]);
	bitValue.push_back(bits[3]);
	bitValue.push_back(bits[4]);
	
	return (atoi(bitValue.c_str()));
}

int fifteen ( string bits )
//Calls the 15 word using bit 2
{
	string bitValue = "";
	
	bitValue.push_back(bits[13]);
	
	return (atoi(bitValue.c_str()));
}

int twentytwo ( string bits )
//Calls the 22 word using bit 3
{
	string bitValue = "";
	
	bitValue.push_back(bits[12]);
	
	return (atoi(bitValue.c_str()));
}

int thirtytwo ( string bits )
//Calls the 32 word using bits 14-0
{
	string bitValue = "";
	
	for ( int i = 1; i < 16; i++)
		bitValue.push_back(bits[i]);
	
	return (atoi(bitValue.c_str()));
}

int thirtyseven ( string bits )
//Calls the 37 word using bit 15
{
	string bitValue = "";
	
	bitValue.push_back(bits[0]);
	
	return (atoi(bitValue.c_str()));
}

int thirtyeight ( string bits )
//Calls the 38 word using bit 14
{
	string bitValue = "";
	
	bitValue.push_back(bits[1]);
	
	return (atoi(bitValue.c_str()));
}

int forty ( string bits )
//Calls the 40 word using bit 7
{
	string bitValue = "";
	
	bitValue.push_back(bits[8]);
	
	return (atoi(bitValue.c_str()));
}

int fortyone ( string bits )
//Calls the 41 word using bit 14-8
{
	string bitValue = "";
	
	for ( int i = 1; i < 8; i++ )
		bitValue.push_back(bits[i]);
	
	return (atoi(bitValue.c_str()));
}

void Hex_Splitter(string a, string &b, string &c)
//Takes in string a of length 8 and splits into 
// first and second half and returns first half, b
// and second half c
{
	
	string temp;
	for (int i=0; i<4; i++)
	{
		stringstream ss;
		ss<<a[i];
		ss>>temp;
		(b).append(temp);
		temp.clear();
	}
	for (int i=4; i<8; i++)
	{
		stringstream ss;
		ss<<a[i];
		ss>>temp;
		(c).append(temp);
		temp.clear();
	}
};

int Hex_to_Dec(string a)
//takes hexadecimal string converts it to Decimal int
{
	stringstream aa;
	aa<<hex<<a;
	int n=0;
	aa>>n;
	return n/2;
};

string Hex_to_Bin(string a)
//Converts Hexadecimal string to String of binary 16 bit
{
	
	stringstream aa;
	aa<<hex<<a;
	unsigned n;
	aa>>n;
	bitset<16> b(n);
	return b.to_string();
};