#include <stdio.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			for (int j = 0; j < n; j++)
				printf("*");
			for (int j = 0; j < 2 * n - 3; j++)
				printf(" ");
			for (int j = 0; j < n; j++)
				printf("*");
		}
		else if (i == n - 1)
		{
			for (int j = 0; j < n - 1; j++)
				printf(" ");
			printf("*");
			for (int j = 0; j < n - 2; j++)
				printf(" ");
			printf("*");
			for (int j = 0; j < n - 2; j++)
				printf(" ");
			printf("*");
		}
		else
		{
			for (int j = 0; j < i; j++)
				printf(" ");
			printf("*");
			for (int j = 0; j < n - 2; j++)
				printf(" ");
			printf("*");
			for (int j = 0; j < 2 * n - 3 - 2 * i; j++)
				printf(" ");
			printf("*");
			for (int j = 0; j < n - 2; j++)
				printf(" ");
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < n - 1; i++)
	{
		if (i == n - 2)
		{
			for (int j = 0; j < n; j++)
				printf("*");
			for (int j = 0; j < 2 * n - 3; j++)
				printf(" ");
			for (int j = 0; j < n; j++)
				printf("*");
		}
		else
		{
			for (int j = 0; j < n - 2 - i; j++)
				printf(" ");
			printf("*");
			for (int j = 0; j < n - 2; j++)
				printf(" ");
			printf("*");
			for (int j = 0; j < 2 * i + 1; j++)
				printf(" ");
			printf("*");
			for (int j = 0; j < n - 2; j++)
				printf(" ");
			printf("*");
		}
		printf("\n");
	}
}