//Main File
#include<string>
#include<iostream>

using namespace std;
void readFromFile(char *);		//forward declaration to call function from another file
int main(int argc, char *argv[])
{
	char *file_name = argv[1];
	readFromFile(file_name);
	return 0;
}
	
