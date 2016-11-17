// task1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

bool isPerfect(int n);

int main(void)
{
	int n = 0;

	printf("Check if following number is perfect: ");
	scanf_s("%d", &n);

	if (isPerfect(n)) printf("%d is perfect!\n", n);
	else printf("%d is not perfect!\n", n);

	system("pause");

	return 0;
}

bool isPerfect(int a)
{
	int sum = 0;
	for (int b = a / 2; b > 0; b--)
		if (a % b == 0) sum += b;

	if (sum == a) return true;

	return false;
}