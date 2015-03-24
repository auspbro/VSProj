// ConsoleApplication10.cpp : 定义控制台应用程序的入口点。
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

