// ConsoleApplication14.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	char str[] = "Hello, World!";
	printf("%s\n", str);
	printf("%c\n", str[13]);
	printf("%c\n", *(str + 7));
	return 0;
}

