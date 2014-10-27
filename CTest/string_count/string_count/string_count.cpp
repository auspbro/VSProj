// string_count.cpp : 定义控制台应用程序的入口点。
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

