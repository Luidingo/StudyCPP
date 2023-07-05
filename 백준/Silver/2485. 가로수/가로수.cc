#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

int main()
{
	int n, tmp, res = 0;
	vector<int> tree;
	vector<int> interval;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		tree.push_back(tmp);
	}
	for (int i = 0; i < n - 1; i++)
	{
		interval.push_back(tree[i + 1] - tree[i]);
	}
	tmp = interval[0];
	for (int i = 1; i < interval.size(); i++)
	{
		tmp = gcd(tmp, interval[i]);
	}
	for (int i = 0; i < interval.size(); i++)
	{
		res += (interval[i] / tmp) - 1;
	}
	cout << res;
}