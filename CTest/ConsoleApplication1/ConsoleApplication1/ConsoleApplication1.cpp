// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>


/* copy input to output, 1st version*/
int _tmain(int argc, _TCHAR* argv[])
{
	int c;
	c = getchar();
	while ((c = getchar()) != EOF)
	{
		putchar(c);
		//c = getchar();
	}
	return 0;
}

