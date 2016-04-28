#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

bool isStartBracket(char bracket)
{
	if(bracket == '(' || bracket == '{' || bracket == '[')
		return true;
	else
		return false;
}

bool isMatchBracket(char start, char end)
{
	if(start == '(' && end == ')')
		return true;
	else if(start == '{' && end == '}')
		return true;
	else if(start == '[' && end == ']')
		return true;
	else 
		return false;
}

int main()
{
	int count;
	stack<char> st;
	string bracket_list;
	cin >> count;

	for(int i =0; i < count; i++)
	{
		while(!st.empty())
			st.pop();

		cin >> bracket_list;

		int length = bracket_list.length();
		if(length % 2 != 0)
		{
			cout << "NO" << endl;
			continue;
		}

		for(int bracket_index = 0; bracket_index < length; bracket_index++)
		{
			if(isStartBracket(bracket_list[bracket_index]))
			{
				st.push(bracket_list[bracket_index]);
			}
			else
			{
				if(!st.empty() && isMatchBracket(st.top(), bracket_list[bracket_index]))
				{
					st.pop();
				}
				else				
				{
					cout << "NO" << endl;
					break;
				}
			}
		}

		if(st.empty())
			cout << "YES" << endl;
	}
}