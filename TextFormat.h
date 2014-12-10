#ifndef TextFormat
#define TextFormat
//TextFormat takes an OutData vector and 
// prints to a named file.
//It does this by interpreting the command 1 word at a time, in either ascending or descending order.
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream> 
#include "DataOut.h"
using namespace std;
class TextClass
{
private:
	//descriptions for each of the commands
	string strRec_Ctrl();
	string strCmd_Type();
	string strEnable(int);
	string strDirection();
	string strParity();
public:
	OutData outobj;
	TextClass();
	void getOutData(OutData o);
	string assignline();
	string assignline (int);
	void toFile(vector<OutData>&);
};
#endif
