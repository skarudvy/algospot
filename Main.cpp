#include <iostream>
using namespace std;

int eval_coins(int total, int num_kind, int coin_list[])
{
	if (num_kind == 1)
	{
		if (total % coin_list[num_kind - 1] == 0)
			return 1;
		else
			return 0;
	}
	else
	{
		if (coin_list[num_kind - 1] > total)
			return eval_coins(total, num_kind - 1, coin_list);
		else
			return eval_coins(total, num_kind - 1, coin_list) + eval_coins(total - coin_list[num_kind - 1], num_kind, coin_list);
	}
}

int main(int argc, char **argv)
{
	int count = 0;
	int total = 0;
	int num_kind = 0;

	cin >> count;
	for (int i =0 ; i < count; i++)
	{
		cin >> total;
		cin >> num_kind;
		int *coin_list = new int[num_kind];

		for (int j = 0; j < num_kind; j++)
		{
			cin >> coin_list[j];
		}

		cout << eval_coins(total, num_kind, coin_list) << endl;
	}

	system("PAUSE");
	
}