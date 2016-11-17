// task3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(void)
{
	printf("How many rows of stars should be printed: ");
	int n;
	scanf_s("%d", &n);

	for (int i = 1; i < n; i++)
	{
		printf("\n");
		for (int j = 0; j < i; j++) printf("*");
	}

	printf("\n\n");

	system("pause");

	return 0;
}