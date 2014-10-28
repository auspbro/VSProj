// PrimeNumber.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>


int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	int i;

	printf("Please input a number:");
	scanf_s("%d", &n);

	for ( i = 2; i <= n-1; i++ )
	{
		if ( n % i == 0 )
			break;

	}
	if ( i < n )
		printf("%d is a not a primer.\n", n);
	else
		printf("%d is a priemer.\n", n);
	return 0;
}

