#include <stdio.h>

char arr[397][399];

void star(int x, int y, int n)
{
	arr[y + 1][x] = '*';
	if (n == 2)
	{
		for (int i = 0; i < 5; i++) 
		{
			arr[y][x + i] = '*';
			arr[y + 6][x + i] = '*';
		}
		for (int i = 0; i < 4; i++)
		{
			arr[y + 2 + i][x] = '*';
			arr[y + 2 + i][x + 4] = '*';
			if (i == 0)
			{
				arr[y + 2 + i][x + 2] = '*';
				arr[y + 2 + i][x + 3] = '*';
			}
			else if (i == 1 || i == 2)
			{
				arr[y + 2 + i][x + 2] = '*';
			}
		}
		return;
	}
	for (int i = 0; i < 1 + 4 * (n - 1); i++) 
	{
		arr[y][x + i] = '*';
		arr[y + 6 + 4 * (n - 2)][x + i] = '*';
	}
	for (int i = 0; i < 5 + 4 * (n - 2); i++)
	{
		arr[y + 2 + i][x] = '*';
		arr[y + 2 + i][x + 4 * (n - 1)] = '*';
	}
	arr[y + 2][x + 7 + 4 * (n - 3)] = '*';
	star(x + 2, y + 2, n - 1);
}

int main()
{
	int n;
	scanf("%d", &n);

	

	if (n == 1)
	{
		printf("*\n");
		return 0;
	}

	for (int i = 0; i < 7 + 4 * (n - 2); i++) 
		for (int j = 0; j < 1 + 4 * (n - 1); j++)
			arr[i][j] = ' ';

	star(0, 0, n);

	for (int i = 0; i < 7 + 4 * (n - 2); i++)
	{
		if (i == 1)
			printf("%c\n", arr[i][0]);
		else
		{
			for (int j = 0; j < 1 + 4 * (n - 1); j++)
			{
				printf("%c", arr[i][j]);
			}
			printf("\n");
		}
	}
}