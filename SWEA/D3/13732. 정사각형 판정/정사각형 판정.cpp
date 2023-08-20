#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 1; i <= T; i++)
	{
		int N;
		cin >> N;
		vector<string> v;
		for (int j = 0; j < N; j++)
		{
			string tmp;
			cin >> tmp;
			v.push_back(tmp);
		}

		int minX = 20, minY = 20;
		int maxX = 0, maxY = 0;
		for (int y = 0; y < N; y++)
		{
			for (int x = 0; x < N; x++)
			{
				if (v[y][x] == '#')
				{
					minX = (x < minX) ? x : minX;
					minY = (y < minY) ? y : minY;
					maxX = (x > maxX) ? x : maxX;
					maxY = (y > maxY) ? y : maxY;
				}
			}
		}

		bool isCube = true;
		if (maxY - minY != maxX - minX)
			isCube = false;
		else
		{
			for (int y = minY; y <= maxY; y++)
			{
				for (int x = minX; x <= maxX; x++)
				{
					if (v[y][x] == '.')
					{
						isCube = false;
						break;
					}
				}
				if (!isCube)
					break;
			}
		}

		if (isCube)
			cout << "#" << i << " yes\n";
		else
			cout << "#" << i << " no\n";
	}
}