#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
	int sum = 0, tmp, res;
	int n[10];

	for (int i = 0; i < 10; i++)
	{
		cin >> n[i];
	}

	for (int i = 0; i < 10; i++)
	{
		tmp = 100 - sum;
		sum += n[i];
		if (abs(100 - sum) <= tmp)
		{
			res = sum;
		}
	}
	cout << res;
}