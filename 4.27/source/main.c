#include<stdio.h>
#include<stdlib.h>
int a, b, c;
int main(void)
{
	for (c = 1; c < 501; c++)
	{
		for (b = 1; b < 501; b++)
		{
			for (a = 1; a < 501; a++)
			{
				if (c*c == a*a + b*b) printf("%d %d %d \t \n",a,b,c);
			}
		}
	}
	system("pause");
	return 0;
}