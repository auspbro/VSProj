// string_count.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>

int _tmain(int argc, _TCHAR* argv[])
{
	double nc;
	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("The string count:%.0f\n", nc);

	return 0;
}

