//Data class to be used by the parser to interpret and print

#ifndef DATA_OUT
#define DATA_OUT
#include <string>
using namespace std;
class OutData
{
private:
	int Rec_Ctrl, Cmd_Type, Rec_Raw, Cmd_ID, Num_Responses, Reset_Enable, Direction, Num_Samples, Parity, Test, Ctrl_Enable, Code;
	int linenumber;
	bool write = false;
	bool D2S = false;
	int words;
public:
	//FileParity(int, int, int, int, int, int, int, int, int);
	OutData();
	void setRec_Ctrl(int);
	void setCmd_Type(int);
	void setRec_Raw(int);
	void setCmd_ID(int);
	void setNum_Responses(int);
	void setReset_Enable(int);
	void setDirection(int);
	void setNum_Samples(int);
	void setParity(int);
	void setTest(int);
	void setCtrl_Enable(int);
	void setCode(int);
	int getRec_Ctrl();
	int getCmd_Type();
	int getRec_Raw();
	int getCmd_ID();
	int getNum_Responses();
	int getReset_Enable();
	int getDirection();
	int getNum_Samples();
	int getParity();
	int getTest();
	int getCtrl_Enable();
	int getCode();
	
	void printline(int word);
};
#endif
