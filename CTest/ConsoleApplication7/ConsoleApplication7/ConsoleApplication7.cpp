// ConsoleApplication7.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int gcd(int a, int b)		//自定义函数求两数的最大公约数
{
	int temp;

	if (a < b)
	{
		temp = a; 
	    a = b;
		b = temp;
	}

	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}

	return a;
}

int lcm(int a, int b)
{
	return a / gcd(a,b) * b;
}


int _tmain(int argc, _TCHAR* argv[])
{
	int m, n;
	int t1, t2;

	printf("Please enter two positive integer numbers:");
	scanf_s("%d%d", &m, &n);
	t1 = gcd(m, n);
	t2 = lcm(m, n);
	printf("The Greatest Common Divisor is %d\n", t1);
	printf("The Least Common Multiple is %d\n", t2);


	return 0;
}

