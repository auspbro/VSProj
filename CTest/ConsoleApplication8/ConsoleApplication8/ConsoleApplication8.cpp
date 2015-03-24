// ConsoleApplication8.cpp : 定义控制台应用程序的入口点。
//


/*
#include "stdafx.h"
#define PI 3.1415926
#define S(r) PI * r * r


int _tmain(int argc, _TCHAR* argv[])
{
	double a, area;
	a = 3.600;
	area = S(a);
	printf("r = %f\narea = %f", a, area);
	return 0;
}
*/

#include "stdafx.h"
#include <stdio.h>
#include "format.h"

int main(int argc, char const *argv[])
{
	int a, b, c, d;
	char string[] = "CHINA";
	a = 1;
	b = 2;
	c = 3;
	d = 4;
	PR(D1, a);
	PR(D2, a, b);
	PR(D3, a, b, c);
	PR(D4, a, b, c, d);
	PR(S, string);
	return 0;
}
