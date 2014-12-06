#include "DataOut.h"
#include <iostream>
#include <string>
using namespace std;

/*OutData::OutData(int Rec_Ctrl, int Cmd_Type, int Rec_Raw, int Cmd_ID,
	int Num_Responses, int Reset_Enable, int Direction, int Num_Samples,
	int Parity, int Test, int Ctrl_Enable, int Code,
	int linenumber,
	bool write,
	bool D2S,
	int words)
{
	write = false;
	D2S = false;
}
/**/
OutData::OutData()
{
	linenumber = 0;
	write = false;
	D2S = false;
	words = 0;
}
void OutData::setRec_Ctrl(int x)
{
	Rec_Ctrl=x;
}
void OutData::setCmd_Type(int x)
{
	Cmd_Type=x;
}
void OutData::setRec_Raw(int x)
{
	Rec_Raw=x;
}
void OutData::setCmd_ID(int x)
{
	Cmd_ID=x;
}
void OutData::setNum_Responses(int x)
{
	Num_Responses=x;
}
void OutData::setReset_Enable(int x)
{
	Reset_Enable=x;
}
void OutData::setDirection(int x)
{
	Direction=x;
}
void OutData::setNum_Samples(int x)
{
	Num_Samples=x;
}
void OutData::setParity(int x)
{
	Parity=x;
}
void OutData::setTest(int x)
{
	Test=x;
}
void OutData::setCtrl_Enable(int x)
{
	Ctrl_Enable=x;
}
void OutData::setCode(int x)
{
	Code=x;
}
void setlinenumber(int x);
{
	linenumber=x;
}
void setwrite(bool x);
{
	write=x;
}
void setD2S(bool x);
{
	D2S=x;
}
void setwords(int x);
{
	words=x;
}

int OutData::getRec_Ctrl()
{
	return Rec_Ctrl;
}
int OutData::getCmd_Type()
{
	return Cmd_Type;
}
int OutData::getRec_Raw()
{
	return Rec_Raw;
}
int OutData::getCmd_ID()
{
	return Cmd_ID;
}
int OutData::getNum_Responses()
{
	return Num_Responses;
}
int OutData::getReset_Enable()
{
	return Reset_Enable;
}
int OutData::getDirection()
{
	return Direction;
}
int OutData::getNum_Samples()
{
	return Num_Samples;
}
int OutData::getParity()
{
	return Parity;
}
int OutData::getTest()
{
	return Test;
}
int OutData::getCtrl_Enable()
{
	return Ctrl_Enable;
}
int OutData::getCode()
{
	return Code;
}
int OutData::getlinenumber()
{
	return linenumber;
}
bool OutData::getwrite()
{
	return write;
}
bool OutData::getD2S()
{
	return D2S;
}
int OutData::getwords()
{
	return words;
}
