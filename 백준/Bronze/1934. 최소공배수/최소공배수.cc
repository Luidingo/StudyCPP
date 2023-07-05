#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int t, a, b, tmp;
	vector<int> arr;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		tmp = (a < b) ? a : b;
		for (int j = tmp;; j += tmp)
		{
			if (j % a == 0 && j % b == 0)
			{
				arr.push_back(j);
				break;
			}
		}
	}

	for (int i = 0; i < arr.size(); i++)
		cout << arr[i] << "\n";
}