// task1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

float goldenRatio();

int main()
{
	printf("The golden ratio is %f\n\n", goldenRatio());
	system("PAUSE");
	return 0;
}

float goldenRatio()
{
	return (1 + sqrt(5)) / 2;
}