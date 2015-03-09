// ConsoleApplication5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int fac(int n);
	int i;
	 for (i = 1; i <= 5; i++)
		 printf("%d!= %d\n", i, fac(i));
	return 0;
}

int fac(int n)
{
	static int f = 1;
	f = f * n;
	return(f);
}
