#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

stack<char> st;

bool isStartBracket(char bracket)
{
	if (bracket == '(' || bracket == '{' || bracket == '[')
		return true;
	else
		return false;
}

bool isMatchBracket(char start, char end)
{
	if (start == '(' && end == ')')
		return true;
	else if (start == '{' && end == '}')
		return true;
	else if (start == '[' && end == ']')
		return true;
	else
		return false;
}

bool IsValidBracket(string bracket_list)
{
	while (!st.empty())
		st.pop();

	int length = bracket_list.length();
	if (length % 2 != 0)
		return false;

	for (int bracket_index = 0; bracket_index < length; bracket_index++)
	{
		if (isStartBracket(bracket_list[bracket_index]))
		{
			st.push(bracket_list[bracket_index]);
		}
		else
		{
			if (!st.empty() && isMatchBracket(st.top(), bracket_list[bracket_index]))
				st.pop();
			else
				return false;
		}
	}

	return true;
}

int main()
{
	int count;

	string bracket_list;
	cin >> count;

	for (int i = 0; i < count; i++)
	{
		cin >> bracket_list;

		if (IsValidBracket(bracket_list))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}