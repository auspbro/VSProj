// Equation_Solver.cpp : ¶¨Òå¿ØÖÆÌ¨Ó¦ÓÃ³ÌÐòµÄÈë¿Úµã¡£
//一元二次方程求解

#include "stdafx.h"
#include <math.h>

float x1, x2;
float disc;
float p, q;

int _tmain(int argc, _TCHAR* argv[])
{
	void greater_than_zero(float, float);
	void equal_to_zero(float, float);
	void less_than_zero(float, float);

	float a, b, c;
	printf("Please Input a, b, c values:");
	scanf_s("%f %f %f", &a, &b, &c);
	printf("equation:%5.2f * x * x + %5.2f * x + %5.2f = 0\n", a, b, c);
	disc = b * b - 4 * a * c;
	printf("root:\n");

	if (disc > 0)
	{
		greater_than_zero(a, b);
		printf("x1 = %f\t\tx2 = %f\n", x1, x2);
	}
	else if (disc == 0)
	{
		equal_to_zero(a, b);
		printf("x1 = %f\t\tx2 = %f\n", x1, x2);
	}
	else
	{
		less_than_zero(a, b);
		printf("x1 = %f + %fi\tx2 = %f - %fi\n", p, q, p, q);
	}
	
	return 0;
}

void greater_than_zero(float a, float b)
{
	x1 = (-b + sqrt(disc)) / (2 * a);
	x2 = (-b - sqrt(disc)) / (2 * a);
}

void equal_to_zero(float a, float b)
{
	x1 = x2 = (-b) / (2 * a);
}

void less_than_zero(float a, float b)
{
	p = -b / (2 * a);
	q = sqrt(-disc) / (2 * a);
}
