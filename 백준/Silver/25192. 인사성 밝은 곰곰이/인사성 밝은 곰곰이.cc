#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
	set<string> name;
	int N;
	cin >> N;

	string tmp;
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		if (tmp == "ENTER")
		{
			count += name.size();
			name.clear();
		}
		else
			name.insert(tmp);
	}
	count += name.size();
	cout << count;
}
