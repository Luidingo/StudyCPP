#include <iostream>

using namespace std;

int main(void)
{
	int n, res = 0;

	cin >> n;

	while (n >= 0)
	{
		if (n % 5 == 0)
		{
			res += n / 5;
			cout << res;
			return 0;
		}
		n -= 3;
		res++;
	}
	cout << -1;
}