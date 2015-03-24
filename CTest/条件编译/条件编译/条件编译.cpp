// 条件编译.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#define LETTER 0


int _tmain(int argc, _TCHAR* argv[])
{
	char str[20] = "C Language";
	char c;
	int i;
	i = 0;
	while ((c = str[i]) != '\0')
	{
		i++;
		#if LETTER
		if (c >= 'a' && c <= 'z')
		{
			c = c - 32;
		}
		#else
		if (c >= 'A' && c <= 'Z')
		{
			c = c + 32;
		}
		#endif
		printf("%c", c);

	}
	printf("\n");
	return 0;
}

