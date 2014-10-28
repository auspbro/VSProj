// PrimerNumOpt2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <math.h>

int _tmain(int argc, _TCHAR* argv[])
{
	int i, j;
	int n;
	long double k;
	
	//printf("Please input a integer number here:");
	//scanf_s("%d", &n);
	//k = sqrt((double long)n);

	for ( i = 100; i <= 200; i++ )
	{
		k = sqrt((long double)i);

		for ( j = 2; j <= k; j++ )
		{
			if ( i % j == 0 )
				break;
		}

		if ( i < k )
		printf("%d is a not a primer.\n", n);
	else
		printf("%d is a priemer.\n", n);
	}



	
	return 0;
}

