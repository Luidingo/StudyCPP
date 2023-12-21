#include <iostream>

using namespace std;

int main()
{
	int contest1[6] = { 500, 300, 200, 50, 30, 10 };
	int contest2[5] = { 512, 256, 128, 64, 32 };
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int sum = 0;
		int a, b;
		cin >> a >> b;
		if (a == 1)
			sum += contest1[0];
		else if (a >= 2 && a <= 3)
			sum += contest1[1];
		else if (a >= 4 && a <= 6)
			sum += contest1[2];
		else if (a >= 7 && a <= 10)
			sum += contest1[3];
		else if (a >= 11 && a <= 15)
			sum += contest1[4];
		else if (a >= 16 && a <= 21)
			sum += contest1[5];

		if (b == 1)
			sum += contest2[0];
		else if (b >= 2 && b <= 3)
			sum += contest2[1];
		else if (b >= 4 && b <= 7)
			sum += contest2[2];
		else if (b >= 8 && b <= 15)
			sum += contest2[3];
		else if (b >= 16 && b <= 31)
			sum += contest2[4];

		cout << sum * 10000 << endl;
	}
}