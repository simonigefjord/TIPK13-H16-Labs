#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void cartesianToPolar(double *, double *);

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