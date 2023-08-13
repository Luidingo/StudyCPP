#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

map<string, int> m;

bool cmp(string fst, string scd)
{
	if (m[fst] != m[scd])
		return m[fst] > m[scd];
	else
	{
		if (fst.length() != scd.length())
			return fst.length() > scd.length();
		else
		{
			return fst < scd;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);    
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	string word;
	vector<string> Voca;
	for (int i = 0; i < N; i++)
	{
		cin >> word;
		if (word.length() >= M)
		{
			if (m.find(word) == m.end())
			{
				m[word] = 0;
				Voca.push_back(word);
			}
			else
				m[word]++;
		}
	}

	sort(Voca.begin(), Voca.end(), cmp);

	for (int i = 0; i < Voca.size(); i++)
		cout << Voca[i] << "\n";
}
