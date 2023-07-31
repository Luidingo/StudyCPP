#include <iostream>

using namespace std;

int Sum(int num)
{
	int res = 0;
	while (num != 0)
	{
		res += num % 10;
		num /= 10;
	}
	return res;
}

int main(void)
{
	bool a;
	for (int i = 1; i < 10000; i++)
	{
		a = true;
		for (int j = 1; j < i; j++)
		{
			if (j + Sum(j) == i)
			{
				a = false;
				break;
			}
		}
		if (a)
			cout << i << "\n";
	}
}

