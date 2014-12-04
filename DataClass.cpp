#include "DataClass.h"
#include <iostream>
#include <string>
using namespace std;

FileData::FileData(string Sample_arg, string BgL_arg, string RelTime_arg, string AbsTime_arg, string Transfer_arg, string AM_arg,                                  string Address_arg, string Data_arg, string Cycle_arg,  string Status_arg, string Iack_arg, string Fail_arg, string IRQ_arg)
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
	Fail = Fail_arg;
	IRQ = IRQ_arg;
}

void FileData::setSample(string Sample_arg)
{
	Sample = Sample_arg;
}
	
void FileData::setBgL(string BgL_arg)
{
	BgL = BgL_arg;
}

void FileData::setRelTime(string RelTime_arg)
{
	RelTime = RelTime_arg;
}

void FileData::setAbsTime(string AbsTime_arg)
{
	AbsTime = AbsTime_arg;
}

void FileData::setTransfer(string Transfer_arg)
{
	Transfer = Transfer_arg;
}

void FileData::setAM(string AM_arg)
{
	AM = AM_arg;
}
	
void FileData::setAddress(string Address_arg)
{
	Address = Adress_arg;
}

void FileData::setData(string Data_arg)
{
	Data = Data_arg;
}

void FileData::setCycle(string Cycle_arg)
{
	Cycle = Cycle_arg;
}

void FileData::setStatus(string Status_arg)
{
	Status = Status_arg;
}


void FileData::setIack(string Iack_arg)
{
	Iack = Iack_arg;
}

void FileData::setFail(string Fail_arg)
{
	Fail = Fail_arg;
}

void FileData::setIRQ(string IRQ_arg)
{
	IRQ = IRQ_arg;
}

string FileData::getSample()
{
	return Sample;

}

string FileData::getBgL()
{
	return BgL;
}

string FileData::getRelTime()
{
	return RelTime;
}

string FileData::getAbsTime()
{
	return AbsTime;
}

string FileData::getTransfer()
{
	return Transfer;
}

string FileData::getAM()
{
	return AM;
}

string FileData::getAddress()
{
	return Address;
}

string FileData::getData()
{
	return Data;
}

string FileData::getCycle()
{
	return Cycle;
}

string FileData::getStatus()
{
	return Status;
}

string FileData::getIack()
{
	return Iack;
}


string FileData::getFail()
{
	return Fail;
}

string FileData::getIRQ()
{
	return IRQ;
}






















































































