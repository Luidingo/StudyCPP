#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 1; i <= T; i++)
	{
		int N;
		cin >> N;

		vector<int> v;
		int tmp;
		for (int j = 0; j < N; j++)
		{
			cin >> tmp;
			v.push_back(tmp);
		}

		int max = 0;
		long long sum = 0;
		for (int j = N - 1; j >= 0; j--)
		{
			if (max < v[j])
				max = v[j];
			else
				sum += max - v[j];
		}

		cout << "#" << i << " " << sum << "\n";
	}
}