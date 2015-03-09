// ConsoleApplication4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int f(int);
	int a = 2, i;
	for ( i = 0; i < 3; i++)
		printf("%d\n", f(a));

	return 0;
}

int f(int a)
{
	int b = 0;
	static int c = 3;
	b = b + 1;
	c = c + 1;
	return(a + b + c);
}