#include<stdio.h>
#include<stdlib.h>
float sales,salary;
int main(void)
{
	while (1)
	{

		printf("Enter sales in dollar(-1 to end):"); scanf_s("%f", &sales);
		if (sales != -1)
		{
			salary = 200 + sales*0.09;
			printf("salary is:%.2f\n",salary);
		}
		else break;
	}
	system("pause");
	return 0;
}