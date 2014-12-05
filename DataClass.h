//Class to store the data
#include <string>
using namespace std;
#ifndef DATA_CLASS
#define DATA_CLASS

class FileData
{
private:
	int lineNumber;
	string Sample, BgL, RelTime, AbsTime, Transfer, AM, Address, Data, Size, Cycle, Status, Iack, Fail, IRQ;
public:
	FileData(int, string, string, string, string, string, string,                     string, string, string, string, string, string);
	void setLineNumber(int);
	void setSample(string);
	void setBgL(string);
	void setRelTime(string);
	void setAbsTime(string);
	void setTransfer(string);
	void setAM(string);
	void setAddress(string);
	void setData(string);
	void setCycle(string);
	void setStatus(string);
	void setIack(string);
	void setFail(string);
	void setIRQ(string);
	int getLineNumber(int);
	string getSample();
	string getBgL();
	string getRelTime();
	string getAbsTime();
	string getTransfer();
	string getAM();
	string getAddress();
	string getData();
	string getCycle();
	string getStatus();
	string getIack();
	string getFail();
	string getIRQ();
};
	




#endif
