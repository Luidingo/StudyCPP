#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int num[26] = { 0 };
	string word;
	cin >> word;

	for (int i = 0; i < word.length(); i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (word[i] == 65 + j || word[i] == 97 + j)
			{
				num[j]++;
				break;
			}
		}
	}

	for (int i = 0; i < 26; i++)
	{
		cout << num[i] << " ";
	}
}