#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

int main(int argc, char **argv)
{
//	unsigned int number = 305419896;
//	unsigned int number = 2018915346;
//	unsigned int number = 1;
	unsigned int number = 100000;
//	unsigned int number = 4294967295;

	unsigned int nResult;

	stringstream stream;
	stream.clear();
	string temp = "0x";

	//cout << hex << number << endl;

	//stream << "ox" << hex << number;
	stream << "0x" << std::uppercase << setfill('0') << setw(8) << std::hex << number; //oX1234567
	
	//cout << stream.str() << endl;

	temp = temp + stream.str()[6 + 2];
	temp = temp + stream.str()[7 + 2];
	temp = temp + stream.str()[4 + 2];
	temp = temp + stream.str()[5 + 2];
	temp = temp + stream.str()[2 + 2];
	temp = temp + stream.str()[3 + 2];
	temp = temp + stream.str()[0 + 2];
	temp = temp + stream.str()[1 + 2];

	char *endptr;

	nResult = strtol(temp.c_str() , &endptr, 16);

	unsigned int desdf = 0xA0860100;

	cout << dec << desdf << endl;
	cout << nResult << endl;
}