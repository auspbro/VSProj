﻿// ConsoleApplication7.cpp : 定义控制台应用程序的入口点。
//辗转相除法（又名欧几里德法）
//使用函数嵌套调用法求两个整数的最大公约数(Greatest Common Divisor)和最小公倍数(Least Common Multiple)

#include "stdafx.h"


int gcd(int a, int b)		//自定义函数求两数的最大公约数
{
	int temp;				//定义局部整型变量

	if (a < b)				//通过比较求两数中最大值和最小值
	{
		temp = a; 
	    a = b;
		b = temp;
	}

	while (b != 0)			//通过循环求两数的余数，直到余数为0
	{
		temp = a % b;
		a = b;
		b = temp;
	}

	return a;				//返回最大公约数到调用函数处
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

