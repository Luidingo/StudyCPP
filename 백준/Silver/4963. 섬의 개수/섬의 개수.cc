#include <iostream>

using namespace std;

int arr1[50][50];
int arr2[50][50];
int h, w;

// 위부터 시계방향으로 탐색
int X[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };
int Y[8] = { -1, -1, 0, 1, 1, 1, 0, -1 };

void dfs(int x, int y)
{
	arr2[y][x]++;
	for (int i = 0; i < 8; i++) {
		int dx = x + X[i];
		int dy = y + Y[i];
		if (dx < 0 || dy < 0 || dx >= w || dy >= h)
			continue;
		if (!arr2[dy][dx] && arr1[dy][dx])
			dfs(dx, dy);
	}
}

int main(void)
{
	while (true)
	{
		cin >> w >> h;

		if (!w && !h)
			break;

		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				arr2[i][j] = 0;
				cin >> arr1[i][j];
			}
		}

		int ans = 0;
		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				if (arr1[i][j] && !arr2[i][j])
				{
					dfs(j, i);
					ans++;
				}
			}
		}
		cout << ans << "\n";
	}
}