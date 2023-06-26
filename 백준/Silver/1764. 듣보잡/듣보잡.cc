#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	map<string, int> name1;
	vector<string> name2;
	string tmp;
	int n, m;

	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		name1.insert({ tmp, i });
	}
	for (int i = 0; i < m; i++)
	{
		cin >> tmp;
		if (name1.find(tmp) != name1.end())
			name2.push_back(tmp);
	}
	cout << name2.size() << endl;
	sort(name2.begin(), name2.end());
	for (int i = 0; i < name2.size(); i++)
	{
		cout << name2[i] << endl;
	}
}