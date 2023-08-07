#include <iostream>
#include <string>

using namespace std;

int main()
{
	int T;
	cin >> T;

	
	for (int i = 1; i <= T; i++)
	{
		string str1, str2;
		cin >> str1 >> str2;
		
		string changedStr1 = "", changedStr2 = "";
		for (int j = 0; j < str2.length(); j++)
		{
			changedStr1 += str1;
		}
		for (int j = 0; j < str1.length(); j++)
		{
			changedStr2 += str2;
		}

		if (changedStr1 == changedStr2)
			cout << "#" << i << " yes\n";
		else
			cout << "#" << i << " no\n";
	}
}