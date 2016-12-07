#define WINDOWS

#include "main.h"

void main()
{
	vector2d v;
	char a;
	 
	do {
		printf("1. Cartisian to polar\n");
		printf("2. Polar to cartesian\n");
		printf("q. Quit\n");
		printf("----------------------------\n");

		scanf_s("%c", &a);

		clearScreen();
	} while (a != '1' && a != '2' && a != 'q');

	switch (a) {
	case '1':
		printf("x\t");
		scanf_s("%lf", &v.x);

		printf("y\t");
		scanf_s("%lf", &v.y);

		cartesianToPolar(&v);
		printf("\nr\t%f\nangle\t%f rad\n", v.x, v.y);
		break;
	case '2':
		printf("r\t");
		scanf_s("%lf", &v.x);

		printf("angle\t");
		scanf_s("%lf", &v.y);

		polarToCartesian(&v);
		printf("\nx\t%f\ny\t%f\n", v.x, v.y);
		break;
	}

	pause();
}

void cartesianToPolar(vector2d *v)
{
	double r = sqrt(pow((*v).x, 2) + pow((*v).y, 2));
	double angle = atan2((*v).y, (*v).x);

	(*v).x = r;
	(*v).y = angle;
}

void polarToCartesian(vector2d *v)
{
	double x = (*v).x * cos((*v).y);
	double y = (*v).x * sin((*v).y);

	(*v).x = x;
	(*v).y = y;
}