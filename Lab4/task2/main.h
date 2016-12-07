#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
	double x, y;
} vector2d;

void cartesianToPolar(vector2d *);
void polarToCartesian(vector2d *);

void clearScreen()
{
#ifdef WINDOWS
	system("cls");
#else
	system("clear");
#endif
}

void pause()
{
#ifdef WINDOWS
	system("pause");
#else
	system("read");
#endif
}