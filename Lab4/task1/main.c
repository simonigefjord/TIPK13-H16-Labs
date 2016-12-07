#define WINDOWS

#include "main.h"

void main()
{
	double x, y;
	char a;

	do {
		printf("1. Cartisian to polar\n");
		printf("q. Quit\n");
		printf("----------------------------\n");

		scanf_s("%c", &a);

		clearScreen();
	} while (a != '1' && a != 'q');

	if (a == '1')
	{
		printf("x\t");
		scanf_s("%lf", &x);

		printf("y\t");
		scanf_s("%lf", &y);

		cartesianToPolar(&x, &y);
		printf("\nr\t%f\nangle\t%f rad\n", x, y);
	}

	pause();
}

void cartesianToPolar(double *x, double *y)
{
	double r = sqrt(pow(*x, 2) + pow(*y, 2));
	double angle = atan2(*y, *x);

	*x = r;
	*y = angle;
}