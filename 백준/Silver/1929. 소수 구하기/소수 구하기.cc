#include <iostream>

using namespace std;

bool isPrime(int num)
{
	if (num == 1)
		return false;
	else if (num == 2 || num == 3)
		return true;
	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int m, n, res = 0;
	cin >> m >> n;
	for (int i = m; i <= n; i++)
	{
		if (isPrime(i))
			cout << i << "\n";
	}
}