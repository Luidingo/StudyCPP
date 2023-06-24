#include <iostream>
#include <string>

using namespace std;

char strArr[5][16];

int main(void)
{
	for (int i = 0; i < 5; i++)
		cin >> strArr[i];

	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (strArr[j][i] != '\0')
				cout << strArr[j][i];
		}
	}
}