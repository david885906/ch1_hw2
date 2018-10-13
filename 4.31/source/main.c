#include<stdio.h>
#include<stdlib.h>
int i, j, k;
int main(void)
{
	k = 1;
	for (i = 0; i < 5; i++)
	{
			for (j = 4; j>i; j--)
			{
				printf(" ");
			}
			for (j = 0; j < k; j++)
			{
				printf("*");
			}
			k = k + 2;
			printf("\n");
	}
	k = 7;
	for (i = 1; i < 5; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < k; j++)
		{
			printf("*");
		}
		k = k - 2;
		printf("\n");
	}
	system("pause");
	return 0;
}