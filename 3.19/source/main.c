#include<stdio.h>
#include<stdlib.h>
int loan;
float rate, day, interest;
int main(void)
{
	while (1)
	{
		printf("Enter loan principal(-1 to end):"); scanf_s("%d", &loan);
		if (loan != -1)
		{
			printf("Enter interest rate:"); scanf_s("%f", &rate);
			printf("Enter term of the loan in days:"); scanf_s("%f", &day);
			interest = loan*rate*day / 365;
			printf("The interest charge is $%.2f\n",interest);
		}
		else break;
	}

	system("pause");
	return 0;
}