#include<stdio.h>
#include<stdlib.h>
int num;
float balance, charge, credit, limit, nbalance;
int main(void)
{
	while (1)
	{
		printf("Enter account number(-1 to end):"); scanf_s("%d", &num);
		if (num != -1)
		{
			printf("Enter begining balance:"); scanf_s("%f", &balance);
			printf("Enter total charges:"); scanf_s("%f", &charge);
			printf("Enter total credits:"); scanf_s("%f", &credit);
			printf("Enter credits limit:"); scanf_s("%f", &limit);
			nbalance = balance + charge - credit;
			printf("account:%d\ncredit limit:%.2f\nnbalance:%.2f\ncredit limit exceed.\n", num, limit, nbalance);
		}
		else break;
	}

	system("pause");
	return 0;
}