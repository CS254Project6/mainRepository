#include "DataClass.h"
#include <iostream>
#include <string>
using namespace std;

FileData::FileData(string Sample_arg, string BgL_arg, string RelTime_arg, string AbsTime_arg, string Transfer_arg, string AM_arg,                                  string Address_arg, string Data_arg, string Cycle_arg,  string Status_arg, string Iack_arg, string Fa_arg, string IRQ_arg)
{
	Sample = Sample_Arg;
	BgL = BgL_arg;
	RelTime = RelTime_arg;
	AbsTime = AbsTime_arg;
	Transfer = Transfer_arg;
	AM = AM_arg;
	Address = Adress_arg;
	Data = Data_arg;
	Size = Size_arg;
	Cycle = Cycle_arg;
	Status = Status_arg;
	Iack = Iack_arg;
	Fa = Fa_arg;
	IRQ = IRQ_arg;
}
	

