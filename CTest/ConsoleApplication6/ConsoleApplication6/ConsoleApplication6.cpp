// ConsoleApplication6.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int max();
	extern int A, B, C;
	printf("Please enter three integer numbers:");
	scanf_s("%d %d %d", &A, &B, &C);
	printf("max is %d\n", max());
	return 0;
}

int A, B, C;

int max()
{
	int m;
	m = A > B ? A : B;
	if (C > m) 
		m = C;
	return(m);
}
