// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{

	int fac(int n);
	int y, n;
	printf("Please input a interger number:");
	scanf_s("%d", &n);
	y = fac(n);
	printf("%d!=%d\n", n, y);
	return 0;
}

int fac(int n)
{
	int f;
	if (n < 0)
		printf("n < 0, data error!");
	else if (n == 0 || n == 1)
		f = 1;
	else f = fac( n-1 ) * n;
	return (f);


}