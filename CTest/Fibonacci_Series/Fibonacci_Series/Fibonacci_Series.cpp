// Fibonacci_Series.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
//#include <stdio.h>

int _tmain(int argc, _TCHAR* argv[])
{
	long int f1, f2, f3;
	int i;
	f1 = 1;
	f2 = 1;

	printf("%12ld\n%12ld\n", f1, f2);

	for ( i = 0; i <= 38; i++ )
	{
		
		f3 = f1 + f2;
		printf("%12ld\n", f3);
		f1 = f2;
		f2 = f3;                 
	}
	getchar();
	
	return 0;
}

