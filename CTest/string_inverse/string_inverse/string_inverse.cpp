// string_inverse.cpp : �������̨Ӧ�ó������ڵ㡣
//�ַ��������ź���

#include "stdafx.h"
#include <string.h>

int _tmain(int argc, _TCHAR* argv[])
{
	void string_inverse(char str[]);
	char str[100];
	printf("Please input string:");
	scanf_s("%s", str);
	string_inverse(str);
	printf("Inverse string:%s\n", str);
	return 0;
}


void string_inverse(char str[])
{
	char t;
	int i, j;
	//unsigned int i, j;
	for (i = 0, j = strlen(str); i < (strlen(str) / 2); i++, j--)
	{
		t = str[i];
		str[i] = str[j - 1];
		str[j - 1] = t;
	}
}

