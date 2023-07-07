#include <iostream>

using namespace std;

int main()
{
	int n, tmp, ans = 0;
	bool a;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		
		if (tmp == 1)
			continue;
		else if (tmp == 2 || tmp == 3)
			ans++;
		else
		{
			a = true;
			for (int j = 2; j * j <= tmp; j++)
			{
				if (tmp % j == 0)
				{
					a = false;
					break;
				}
			}
			if (a)
				ans++;
		}
	}

	cout << ans;
}