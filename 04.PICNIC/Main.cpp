#include <iostream>
#include <set>
#include <string>
using namespace std;

struct Friend {
	int alpha;
	int beta;
	Friend(int _alpha, int _beta)
	{
		if (_alpha < _beta)
		{
			alpha = _alpha;
			beta = _beta;
		}
		else
		{
			alpha = _beta;
			beta = _alpha;
		}
	}

	void toString()
	{
		cout << "(" << alpha << "," << beta << ")" << endl;
	}

};

int main()
{
	typedef pair<int, int> Point;
	typedef set<Point> List;

	List list[5];
	list[0] = { 1,2 };

}