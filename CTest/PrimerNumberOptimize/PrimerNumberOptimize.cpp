// PrimerNumberOptimize.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
//#include <stdio.h>
#include <math.h>

int _tmain(int argc, _TCHAR* argv[])
{
	int i;
	int n;
	double long k;
	
	printf("Please input a integer number here:");
	scanf_s("%d", &n);
	k = sqrt((double long)n);

	for ( i = 2; i <= k; i++ )
	{
		if ( n % i == 0 )
			break;
	}

	if ( i < k )
		printf("%d is a not a primer.\n", n);
	else
		printf("%d is a priemer.\n", n);
	return 0;
}

