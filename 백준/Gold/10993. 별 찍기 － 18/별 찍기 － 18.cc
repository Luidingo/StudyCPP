#include <stdio.h>
#include <math.h>

char arr[1024][2048];

void func(int y, int x, int n)
{
	if (n == 1)
	{
		arr[y][x] = '*';
		return;
	}

	int height = pow(2, n + 1) - 3;
	int width = pow(2, n) - 1;

	if (n % 2)
	{
		for (int i = 0; i < height; i++)
			arr[y + width - 1][x + i] = '*';

		for (int i = 0; i < width - 1; i++)
		{
			arr[y + i][x + height / 2 - i] = '*';
			arr[y + i][x + height / 2 + i] = '*';
		}

		func(y + width / 2, x + pow(2, n - 1), n - 1);

		return;
	}

	for (int i = 0; i < height; i++)
		arr[y][x + i] = '*';

	for (int i = 1; i < width; i++)
	{
		arr[y + i][x + i] = '*';
		arr[y + i][x + height - (i + 1)] = '*';
	}

	func(y + 1, x + pow(2, n - 1), n - 1);

	return;

}

int main(void)
{
	int n;
	scanf("%d", &n);

	func(0, 0, n);

	int height = pow(2, n + 1) - 3;
	int width = pow(2, n) - 1;

	for (int i = 0; i < width; i++)
	{
		if (n % 2)
		{
			for (int j = 0; j < height - width + (i + 1); j++)
			{
				char c = arr[i][j] == '*' ? '*' : ' ';
				printf("%c", c);
			}
			printf("\n");
			continue;
		}
		for (int j = 0; j < height - i; j++)
		{
			char c = arr[i][j] == '*' ? '*' : ' ';
			printf("%c", c);
		}
		printf("\n");
	}
}