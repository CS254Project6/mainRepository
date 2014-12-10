#ifndef TextFormat
#define TextFormat
//TextFormat takes an OutData object and 
// returns a printed command log chunk.
//It does this by interpreting the command 1 word at a time, in either ascending or descending order.
#include <iostream>
#include <fstream>
#include <queue>
#include "DataOut.h"
using namespace std;
class TextFormat
{
private:
	OutData outobj;
	//descriptions for each of the commands
	string strRec_Ctrl()
	{	switch(outobj.getRec_Ctrl())
		case 0:  return "0 (no recording)";             break;
		case 2:  return "2 (no processing)";            break;
		case 3:  return "3 (processing and recording)"; break;
		default: return "NaN (not found)";              break;
	}
	string strCmd_Type()
	{	switch(outobj.getCmd_Type())
		case 1:  return "1 (unknown)";     break;
		case 4:  return "4 (type A)";      break;
		case 5:  return "5 (type B)";      break;
		case 6:  return "6 (type C)";      break;
		default: return "NaN (not found)"; break;
	}
	string strEnable(int e)
	{	return (e)? "1 (enable)": "0 (disable)";
	}
	string strDirection()
	{	return (outobj.getDirection())? "1 (left)": "0 (right)";
	}
	string strParity()
	{	return (outobj.getParity())? "1 (odd)": "0 (even)";
	}
 
	//Function to print the first line of a command object
	public:
	TextFormat(){}
	
	void getOutData(OutData o)
	{	outobj = o;
	}
	
	string assignline()
	{ string direction = (outobj.getD2S())?
			"Write D-to-S command: ":
			"Write S-to-D command: ";
		return "Line " + outobj.getlinenumber() + ": " +
						direction + outobj.getwords() + "words\n";
	}//end of assignline()
	
	//Function to print any of the other lines ()
	string assignline (int wordnumber)
	{	
		//conditional assignment returns line ## containing command
		string linenum = (outobj.getHiLo())?
			(outobj.getlinenumber() + outobj.getwords() - wordnumber / 2):
			(outobj.getlinenumber() + wordnumber / 2);
		string strfield; //contains word #, cmd name and cmd-description
		switch(wordnumber)
		case  0: strfield =
			"Word 0: Rec_Ctrl = "+strRec_Ctrl(); break;
		case  1: strfield =
			"Word 1: Cmd_Type = "+strCmd_Type(); break;
		case  4: strfield =
			"Word 4: Rec_Raw = "+strEnable(outobj.getRec_Raw()); break;
		case  5: strfield =
			"Word 5: Cmd_ID = "+outobj.getCmd_ID(); break;
		case 10: strfield =
			"Word 10: Num_Responses = "+outobj.getNum_Responses(); break;
		case 15: strfield =
			"Word 15: Reset_Enable = "+strEnable(outobj.getReset_Enable()); break;
		case 22: strfield =
			"Word 22: Direction = "strDirection(); break;
		case 32: strfield =
			"Word 32: Num_Samples = "+outobj.getNum_Samples(); break;
		case 37: strfield =
			"Word 37: Parity = "+strParity(); break;
		case 38: strfield =
			"Word 38: Test = "+strEnable(outobj.getTest()); break;
		case 40: strfield =
			"Word 40: Ctrl_Enable = "+strEnable(outobj.getCtrl_Enable()); break;
		case 41: strfield =
			"Word 41: Code = "+outobj.getCode(); break;
		default: break;
		return "Line " + linenum + ": " + strfield + "\n";
		//      Line ##: Word #: <command> = <description>
	}
	void Read(OutData o)
	{	assignline();
		if (highlow)
		{ 
			for (int i = 0; i <= words; i++)
			{
				assignline(i);
			}
		}
		else
		{	
			for (int i = words; i >= 0; i--)
			{
				assignline(i);
			}
		}
	}
	void toFile(queue<OutData>& outqueue, string fname)
	{
		fstream f;
		f.open (fname, ios::out);
		while (!outque.empty())
		{	//load item from queue
			getOutData(outqueue.pop());
			//read and send output lines to file
			f << assignline();
			for (int i = words; i >= 0; i--)
			{
				f << assignline(i);
			}
			f << endl;
		}
		f.close();
	}
};
#endif
