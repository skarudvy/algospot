#include <iostream>
using namespace std;

struct bytes {
	char byte_1;
	char byte_2;
	char byte_3;
	char byte_4;
};

int main(int argc, char **argv)
{
	int count = 0;
	register int i = 0;

	cin >> count;

	for (; i < count; i++) {
		unsigned int number_bf;
		unsigned int number_af;
		struct bytes *bf = (struct bytes *) &number_bf;
		struct bytes *af = (struct bytes *) &number_af;

		cin >> number_bf;

		af->byte_1 = bf->byte_4;
		af->byte_2 = bf->byte_3;
		af->byte_3 = bf->byte_2;
		af->byte_4 = bf->byte_1;

		cout << number_af << endl;

	}

	return 0;
}