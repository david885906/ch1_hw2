#include<stdio.h>
#include<stdlib.h>
int len, bre,i,j;
int main(void)
{
	printf("Enter length:"); scanf_s("%d",&len);
	printf("Enter breadth:"); scanf_s("%d",&bre);
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < bre; j++)
		{
			if (i == 0 || i == (len-1) || j == 0 || j == (bre-1))
			{
				printf("+");
			}
			else printf(" ");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}