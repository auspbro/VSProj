// GCD_LCM_Func1.cpp : 定义控制台应用程序的入口点。
//辗转相除法（又名欧几里德法）
//使用函数递归调用法求两个整数的最大公约数(Greatest Common Divisor)和最小公倍数(Least Common Multiple)
//

#include "stdafx.h"


int gcd(int a, int b)
{
	if (a%b == 0)
		return b;
	else
		return gcd(b, a%b);
}


int _tmain(int argc, _TCHAR* argv[])
{
	int m, n;
	int t1;

	printf("Please input two integer number:");
	scanf_s("%d%d", &m, &n);
	t1 = gcd(m, n);
	printf("The Greatest common divisor is %d\n", t1);
	printf("The Least common multiple is %d\n", m*n/t1);
	getchar();


	return 0;
}

