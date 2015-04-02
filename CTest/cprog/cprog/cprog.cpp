// cprog.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#define SIZE 10

int _tmain(int argc, _TCHAR* argv[])
{

	int i;
	int a[SIZE];
	int * p;
	p = a;
	printf("Pleae input 10 integer numbers:\n");
	for (i = 0; i < SIZE; i++)
	{
		scanf_s("%d", p++);
	}
	p = a;
	for (i = 0; i < SIZE; i++, p++)
	{
		//printf("%d", a[i]);
		printf("%d\t", *p);
	}
	printf("\n");
	return 0;
}

