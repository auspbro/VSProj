// ConsoleApplication5.cpp : �������̨Ӧ�ó������ڵ㡣
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
