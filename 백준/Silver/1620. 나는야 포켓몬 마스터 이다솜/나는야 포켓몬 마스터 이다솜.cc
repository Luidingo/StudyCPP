#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main()
{
	int n, m;
	map<string, int> pokemon;
	vector<string> name;
	vector<string> answer;
	string str;

	cin >> n >> m;

	

	for (int i = 1; i <= n; i++)
	{
		cin >> str;
		name.push_back(str);
		pokemon.insert(make_pair(str, i));
	}
	for (int i = 0; i < m; i++)
	{
		cin >> str;
		if (str[0] >= 65 && str[0] <= 90)
			answer.push_back(to_string(pokemon[str]));
		else
            answer.push_back(name[stoi(str) - 1]);
	}

	for (int i = 0; i < m; i++)
	{
		cout << answer[i] << "\n";
	}
}