#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{
	int count = 0;
	unsigned int number = 0;
	unsigned int nResult;
	char *endptr;
	stringstream stream;

	cin >> count;

	for(int i=0; i < count; i++)
	{
		cin >> number;

		//stream.clear();
		stream.str("");
		string temp = "0x";

		stream << "0x" << std::uppercase << setfill('0') << setw(8) << std::hex << number; //oX1234567
	
		temp = temp + stream.str()[6 + 2];
		temp = temp + stream.str()[7 + 2];
		temp = temp + stream.str()[4 + 2];
		temp = temp + stream.str()[5 + 2];
		temp = temp + stream.str()[2 + 2];
		temp = temp + stream.str()[3 + 2];
		temp = temp + stream.str()[0 + 2];
		temp = temp + stream.str()[1 + 2];

		cout << strtoul(temp.c_str(), &endptr, 16) << endl;

	}
}
