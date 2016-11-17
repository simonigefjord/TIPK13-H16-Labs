// task4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(void)
{
	printf("Simple calculator menu:\n\n");
	printf("+ addition\n");
	printf("- subtraction\n");
	printf("* multiplication\n");
	printf("/ division\n");
	printf("E to exit\n\n");
	printf("What do you choose: ");

	char operation = getchar();

	float a, b;

	printf("Scan the first number: ");
	scanf_s("%f", &a);
	printf("Scan the second number: ");
	scanf_s("%f", &b);

	switch (operation)
	{
	case '+':
		printf("Addition\n\t");
		printf("%.1f + %.1f = %.f", a, b, a + b);
		break;
	case '-':
		printf("Subtrak´ction\n\t");
		printf("%.1f - %.1f = %.f", a, b, a - b);
		break;
	case '*':
		printf("Multiplication\n\t");
		printf("%.1f * %.1f = %.f", a, b, a * b);
		break;
	case '/':
		printf("Division\n\t");
		printf("%.1f / %.1f = %.f", a, b, a / b);
		break;
	case 'E':
		printf("Exit\n");
		break;
	}

	printf("\n");

	system("pause");

	return 0;
}