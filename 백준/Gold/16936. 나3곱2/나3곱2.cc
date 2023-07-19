#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool cmp(long long a, long long b)
{
	int a_two = 0, a_three = 0;
	while (1)
	{
		if (a % 2 == 0) // 첫번째 수의 2의 지수 구하기
		{
			a_two++;
			a /= 2;
		}
		else if (a % 3 == 0) // 첫번째 수의 3의 지수 구하기
		{
			a_three++;
			a /= 3;
		}
		else
			break;
	}
	int b_two = 0, b_three = 0;
	while (1)
	{
		if (b % 2 == 0) // 두번째 수의 2의 지수 구하기
		{
			b_two++;
			b /= 2;
		}
		else if (b % 3 == 0) // 두번째 수의 3의 지수 구하기
		{
			b_three++;
			b /= 3;
		}
		else
			break;
	}

	if (a_three == b_three)
		return a_two < b_two;
	return a_three > b_three;
}

int main(void)
{
	int n;
	long long tmp;
	cin >> n;

	vector<long long> v;

	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		v.push_back(tmp);
	}

	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < n; i++)
		cout << v[i] << " ";
}