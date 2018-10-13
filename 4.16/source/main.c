#include<stdio.h>
#include<stdlib.h>
int i,j,b;
int main(void)
{
	printf("(A)\n");
	for (i= 1; i<= 10; i++)
	{
		for (j = 0; j < i; j++)
		{
			
			printf("*");
		}
		printf("\n");
	}
	printf("(B)\n");
	for (i= 10; i >= 1; i--)
	{
		for (j = 0; j < i; j++)
		{

			printf("*");
		}
		printf("\n");
	}
	printf("(C)\n");
	b = 10;
	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < b; j++)
		{
			printf("*");
		}
		b--;
		printf("\n");
	}
	printf("(D)\n");
	b = 1;
	for (i = 10; i >= 1; i--)
	{
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < b; j++)
		{
			printf("*");
		}
		b++;
		printf("\n");
	}
	system("pause");
	return 0;
}