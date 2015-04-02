// ConsoleApplication12.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int num = 0;
	int word = 0;
	char c;
	char str[50];
	gets_s(str);

	for (int i = 0; (c = str[i]) != '\0'; i++)
	{
		if (c == ' ')
		{
			word = 0;	
		}
		else if (word == 0)
		{
			word = 1;
			num++;
		}
	}
	printf("There are %d words in this line.\n", num);

	return 0;
}

