#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int T;
	string ps;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> ps;
		int tmp = 0;
		for (int j = 0; j < ps.length(); j++)
		{
			if (ps[j] == '(')
				tmp++;
			else
				tmp--;
			if (tmp < 0)
				break;
		}
		if (tmp == 0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}