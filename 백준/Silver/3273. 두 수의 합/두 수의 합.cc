#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> numArr;
	int n;
	cin >> n;

	int tmp;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		numArr.push_back(tmp);
	}

	int x;
	cin >> x;

	sort(numArr.begin(), numArr.end());

	int count = 0;
	int left = 0, right = n - 1;
	while (left < right)
	{
		if (numArr[left] + numArr[right] == x)
		{
			count++;
			left++;
			right--;
		}
		else if (numArr[left] + numArr[right] > x)
			right--;
		else
			left++;
	}
	cout << count;
}