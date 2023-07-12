#include <stdio.h>

void DrawRect(int x, int y, int n)
{
	if ((x / n) % 3 == 1 && (y / n) % 3 == 1)
	{
		printf(" ");
	}
	else
	{
		if (n / 3 == 0)
			printf("*");
		else
		{
			DrawRect(x, y, n / 3);
		}
	}
}

int main()
{
	int n, i, j;
	scanf("%d", &n);
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			DrawRect(i, j, n);
			j++;
		}
		printf("\n");
		i++;
	}
}