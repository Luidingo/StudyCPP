#include <stdio.h>

char arr[3072][6144];

void DrawTriangle(int x, int y, int n)
{
	if (n == 3)
	{
		arr[y][x] = '*';
		arr[y + 1][x - 1] = '*';
		arr[y + 1][x + 1] = '*';
		arr[y + 2][x - 2] = '*';
		arr[y + 2][x - 1] = '*';
		arr[y + 2][x] = '*';
		arr[y + 2][x + 1] = '*';
		arr[y + 2][x + 2] = '*';
		return;
	}
	DrawTriangle(x, y, n / 2);
	DrawTriangle(x - (n / 2), y + (n / 2), n / 2);
	DrawTriangle(x + (n / 2), y + (n / 2), n / 2);
}

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < 2 * n - 1; j++)
			arr[i][j] = ' ';

	DrawTriangle(n - 1, 0, n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 2 * n - 1; j++)
		{
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
}