#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int n, m;
	double arr[1000];
	double res = 0;

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	m = *max_element(arr, arr + n);

	for (int i = 0; i < n; i++)
	{
		res += arr[i] / m * 100;
	}
	res = res / n;
	cout << res;
}