// PI_binomial.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>

int _tmain(int argc, _TCHAR* argv[])
{
	int sign = 1;
	double sum = 0;
	double n = 1.0;
	double term = 1.0;
	for ( ; fabs(term) >= 1e-8; sign = -sign, n = n + 2, term = sign / n )
	{
		sum = sum + term;
	}

	sum = sum * 4;
	printf("PI=%17.15f\n", sum);
	return 0;
}

