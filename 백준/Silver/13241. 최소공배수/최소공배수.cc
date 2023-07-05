#include <iostream>
#include <vector>

using namespace std;

int main()
{
	long long int a, b;
	cin >> a >> b;
	if (a % b == 0)
		cout << a;
	else if (b % a == 0)
		cout << b;
	else
	{
		long long int tmp = (a < b) ? a : b;
		for (long long int i = tmp;; i += tmp)
		{
			if (i % a == 0 && i % b == 0)
			{
				cout << i;
				break;
			}
		}
	}
}