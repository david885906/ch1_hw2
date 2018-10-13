#include<stdio.h>
#include<stdlib.h>
int hour;
float rate,salary;
int main(void)
{
	while (1)
	{
		printf("Enter # of hours worked(-1 to end):"); scanf_s("%d", &hour);
		if (hour != -1)
		{

			if (hour<=40)
			{
				printf("Enter hourly rate of the worker($00.00):"); scanf_s("%f", &rate);
				salary = hour*rate;
				printf("salary is $%.2f\n", salary);
			}
			else
			{
				printf("Enter hourly rate of the worker($00.00):"); scanf_s("%f", &rate);
				salary = 40 * rate +(hour-40)* rate*1.5;
				printf("salary is $%.2f\n", salary);
			}
		}
		else break;
	}

	system("pause");
	return 0;
}