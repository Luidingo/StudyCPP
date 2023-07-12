#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> arr;
	int k, tmp;

	cin >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> tmp;
		if (tmp == 0 && !arr.empty())
			arr.pop_back();
		else
			arr.push_back(tmp);
	}

	int sum = 0;
	for (int i = 0; i < arr.size(); i++)
		sum += arr[i];
	cout << sum;
}