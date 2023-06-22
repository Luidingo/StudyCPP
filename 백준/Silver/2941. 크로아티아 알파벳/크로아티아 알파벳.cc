#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	string s;
	cin >> s;

	int n, res = 0;

	for (n = 0; n < s.length(); n++)
	{
		if (s[n] == 'c' && s[n + 1] == '=')
			n++;
		else if (s[n] == 'c' && s[n + 1] == '-')
			n++;
		else if (s[n] == 'd' && s[n + 1] == 'z' && s[n + 2] == '=')
			n += 2;
		else if (s[n] == 'd' && s[n + 1] == '-')
			n++;
		else if (s[n] == 'l' && s[n + 1] == 'j')
			n++;
		else if (s[n] == 'n' && s[n + 1] == 'j')
			n++;
		else if (s[n] == 's' && s[n + 1] == '=')
			n++;
		else if (s[n] == 'z' && s[n + 1] == '=')
			n++;
		res++;
	}
	cout << res;
}