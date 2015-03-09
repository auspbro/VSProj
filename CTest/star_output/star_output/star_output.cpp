// star_output.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{

	int i, j, k;

	for ( i = 0; i <= 3; i++ )
	{
		for ( j = 0; j <= 2-i; j++ )
			printf(" ");

		for ( k = 0; k <= 2*i; k++ )
			printf("*");

		printf("\n");
	}
	return 0;
}

