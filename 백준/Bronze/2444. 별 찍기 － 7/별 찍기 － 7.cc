#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n + i; j++)
		{
			if ((n - i - 1) <= j)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < 2 * n - 2 - i; j++)
		{
			if (i < j)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}