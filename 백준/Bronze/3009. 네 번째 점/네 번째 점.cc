#include <iostream>
using namespace std;

int main()
{
	int x1, y1;

	cin >> x1 >> y1;

	int x2, y2;

	cin >> x2 >> y2;

	int x3, y3;

	cin >> x3 >> y3;

	int ansX, ansY;

	if (x1 == x2)
		ansX = x3;
	else if (x1 == x3)
		ansX = x2;
	else if (x2 == x3)
		ansX = x1;

	if (y1 == y2)
		ansY = y3;
	else if (y1 == y3)
		ansY = y2;
	else if (y2 == y3)
		ansY = y1;

	cout << ansX << " " << ansY;
}