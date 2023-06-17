#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isPrime(int num)
{
    if (num < 2)
        return false;
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}

bool isPalindrome(string s)
{
	string tmp = s;
	reverse(s.begin(), s.end());
	if (tmp == s)
		return true;
	return false;
}

int main(void)
{
	int n;

	cin >> n;


    for (int i = n;; i++)
    {
        if (isPalindrome(to_string(i)))
        {
            if (isPrime(i))
            {
                cout << i;
                return 0;
            }
        }
    }
}