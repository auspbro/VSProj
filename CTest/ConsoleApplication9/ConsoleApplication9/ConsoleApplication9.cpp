// ConsoleApplication9.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#define SWAP(a, b) t = b; b = a; a = t

int _tmain(int argc, _TCHAR* argv[])
{
	int a, b, t;
	scanf_s("%d %d", &a, &b);
	SWAP(a, b);
	printf("a = %d\tb = %d\n", a, b);

	return 0;
}

