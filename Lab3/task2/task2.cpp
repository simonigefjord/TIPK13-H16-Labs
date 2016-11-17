// task2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int printRoots(float p, float q);

int main()
{
	float p = 1;
	float q = -1;
	if (!printRoots(p, q))
		printf("The equation is missing real roots!\n");
	system("PAUSE");
	return 0;
}

/*
* Function: printRoots
* Usage: printRoots(p, q);
* ------------------------
* printRoots prints the real roots of the equation
* x^2 + px + q = 0. The function returns 0 if no
* real roots can be found. The following special cases apply:
*
* 1. If p is zero and q is positive, no real roots can
*    be found.
* 2. If the root of (p / 2)^2 - q is negative, the
*    roots are not real.
*/
int printRoots(float p, float q)
{
	if (p == 0 && q > 0) return 0;
	float a = (pow(p, 2) / 4) - q;
	if (a < 0) return 0;
	p = -p / 2;
	a = sqrt(a);
	printf("%f, %f\n", p - a, p + a);
	return 1;
}