// GCD_LCM_Func2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int gcd(int a, int b)
{
	while (b != 0)
	{
		a %= b;
		a ^= b;
		b ^= a;
		a ^= b;
	}

	return a;
}

int lcm(int a, int b)
{
	return a / gcd(a, b) * b;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int res = 1;
	int i;
	for (i = 2; i <= 20; i++)
	{
		res = lcm(res, i);
	}

	printf("%d\n", res);
	return 0;
}

