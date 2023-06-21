#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 2 * n - 1 - i; j++)
		{
			if (j < i)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n + i + 1; j++)
		{
			if (j < n - i - 2)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
}