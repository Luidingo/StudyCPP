#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{
	string str = "";
	string arr[100];
	int n, res = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	char before;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < arr[i].length(); j++)
		{
			if (str == "")
			{
				if (arr[i].length() == 1)
				{
					res++;
					break;
				}
				str += arr[i][j];
				before = arr[i][j];
			}
			else if (before != arr[i][j])
			{
				if (str.find(arr[i][j]) == string::npos)
				{
					str += arr[i][j];
					before = arr[i][j];
					if (j == arr[i].length() - 1)
						res++;
				}
				else
					break;
			}
			else if (before == arr[i][j] && j == arr[i].length() - 1)
				res++;
		}
		str = "";
	}
	cout << res;
}