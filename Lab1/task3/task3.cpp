// task3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(void)
{
	int num, count, sumCount;
	int sum = 0;

	printf("The program will sum the first odd positive integers 1 + 3 + ...\n");
	printf("How many integer should be summed: ");
	scanf_s("%d", &count);
	sumCount = 0;
	num = 1;
	while (sumCount < count)
	{
		if (num % 2 == 1)
		{
			sum += num;
			printf("%d", num);
			if (sumCount < count - 1) printf(" + ");
			sumCount++;
		}
		num++;
	}

	printf(" = %d\n", sum);
	system("pause");

	return 0;
}