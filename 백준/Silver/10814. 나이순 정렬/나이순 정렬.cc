#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool compare(pair<int, string> a, pair<int, string> b)
{
	return a.first < b.first;
}
int main(void)
{
	int n;
	cin >> n;
	pair<int, string> tmp;
	vector<pair<int, string>> people;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp.first >> tmp.second;
		people.push_back(tmp);
	}
	stable_sort(people.begin(), people.end(), compare);
	for (int i = 0; i < n; i++)
		cout << people[i].first << ' ' << people[i].second << '\n';
}