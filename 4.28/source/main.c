#include<stdio.h>
#include<stdlib.h>
int i,d1,hour,many;
float rate, salary,sales;
int main(void)
{
	printf("選擇計算錢的方式:"); scanf_s("%d",&i);
	if (i == 1)
	{
		printf("Enter dollar:"); scanf_s("%d", &d1);
		printf("salary is %d\n", d1);
	}
	else if (i==2)
	{
		printf("Enter # of hours worked:"); scanf_s("%d", &hour);

		if (hour <= 40)
		{
			printf("Enter hourly rate of the worker($00.00):"); scanf_s("%f", &rate);
			salary = hour*rate;
			printf("salary is $%.2f\n", salary);
		}
		else
		{
			printf("Enter hourly rate of the worker($00.00):"); scanf_s("%f", &rate);
			salary = 40 * rate + (hour - 40)* rate*1.5;
			printf("salary is $%.2f\n", salary);
		}
	}
		
	else if (i==3)
	{
		printf("Enter sales in dollar:"); scanf_s("%f", &sales);
		salary = 200 + sales*0.09;
		printf("salary is:%.2f\n", salary);
	}
	else
	{
		printf("輸入賣幾個:"); scanf_s("%d", &many);
		printf("輸入一個多少錢:"); scanf_s("%f", &sales);
		salary = many*sales;
		printf("salary is $%.2f\n", salary);
		
	}
	system("pause");
	return 0;
}