// ConsoleApplication10.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#define SURPLUS(a, b) ((a) % (b))

int _tmain(int argc, _TCHAR* argv[])
{
	int a, b;
	printf("Please input two integer number:");
	scanf_s("%d %d", &a, &b);
	//c = SURPLUS(a, b);
	printf("%d", SURPLUS(a, b));
	return 0;
}

