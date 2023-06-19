#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
int arr[100001];

void binarySearch(int val)
{
	int mid;
	int fst = 0, scd = n - 1;
	while (scd >= fst)
	{
		mid = (fst + scd) / 2;
		if (val == arr[mid])
		{
			cout << 1 << "\n";
			return;
		}
		else if (val < arr[mid])
			scd = mid - 1;
		else
			fst = mid + 1;
	}
	cout << 0 << "\n";
    return;
}

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + n);

	cin >> m;

	int val;
	for (int i = 0; i < m; i++)
	{
		cin >> val;
		binarySearch(val);
	}
}
