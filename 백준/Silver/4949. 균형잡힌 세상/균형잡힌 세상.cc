#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void)
{
	string str;
	while (1)
	{
		getline(cin, str);
		if (str[0] == '.')
			break;
		
		stack<char> stk;
		bool a = true;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '(' || str[i] == '[')
				stk.push(str[i]);
			else if (str[i] == ']')
			{
				if (!stk.empty() && stk.top() == '[')
					stk.pop();
				else
				{
					a = false;
					break;
				}
			}
			else if (str[i] == ')')
			{
				if (!stk.empty() && stk.top() == '(')
					stk.pop();
				else
				{
					a = false;
					break;
				}
			}
		}
		if (a && stk.empty())
			cout << "yes\n";
		else
			cout << "no\n";
	}
}