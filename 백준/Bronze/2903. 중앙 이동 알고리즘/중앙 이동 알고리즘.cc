#include <iostream>

using namespace std;

int main(void)
{
	int n, tmp = 2;
	cin >> n;
	for (int i = 0; i < n; i++)
		tmp = 2 * tmp - 1;
	cout << tmp * tmp;
}