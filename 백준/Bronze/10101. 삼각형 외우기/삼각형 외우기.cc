#include <iostream>

using namespace std;

int main(void)
{
	int a, b, c, sum;
	cin >> a;
	cin >> b;
	cin >> c;
	sum = a + b + c;
	if (sum != 180)
		cout << "Error";
	else if (a != b && a != c && b != c)
		cout << "Scalene";
	else if (a == b && a == c)
		cout << "Equilateral";
	else
		cout << "Isosceles";
}