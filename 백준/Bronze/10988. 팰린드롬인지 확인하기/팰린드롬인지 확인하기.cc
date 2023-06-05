#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	string a, b;

	cin >> a;

	b = a;
	
	reverse(a.begin(), a.end());

	if (a == b)
		cout << 1;
	else
		cout << 0;
}