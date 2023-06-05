#include <iostream>

using namespace std;

int main(void)
{
	int n, i = 1, up, down;
	cin >> n;

	while (n > i) {
		n -= i;
		i++;
	}

	if (i % 2 == 1)
	{
		up = i + 1 - n;
		down = n;
	}
	else
	{
		up = n;
		down = i + 1 - n;
	}
	
	cout << up << "/" << down << endl;
}