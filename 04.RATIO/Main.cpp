#include <iostream>
#include <cmath>

#define MAX_COUNT 2000000000

using namespace std;

int main(void)
{
	int testCase;
	cin >> testCase;

	while (testCase--)
	{
		long long int M, N;
		long long int start, end;
		long long int k;
		int curRate, lastRate;

		start = 1;
		end = MAX_COUNT;
		k = (start + end) / 2;

		cin >> N >> M;

		if (N >= 1 && N <= MAX_COUNT / 2 && M >= 0 && M <= N)
		{
			curRate = floor((long double)M / N * 100);

			while (start != end)
			{
				if (curRate >= 99)
				{
					k = -1;
					break;
				}
				lastRate = (long double)(M + k) / (N + k) * 100;

				if (lastRate - curRate >= 1)
				{
					end = k;
					k = (start + end) / 2;
				}
				else
				{
					start = k + 1;
					k = (start + end) / 2;
				}
			}
		}
		else
			k = -1;
		cout << k << endl;
	}

	return 0;
}