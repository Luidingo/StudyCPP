#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void)
{
	map<string, int> str;
	string tmp;
	int n, m, res = 0;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		str.insert({ tmp, i });
	}

	for (int i = 0; i < m; i++)
	{
		cin >> tmp;
		if (str.find(tmp) != str.end())
			res++;
	}

	cout << res;
}