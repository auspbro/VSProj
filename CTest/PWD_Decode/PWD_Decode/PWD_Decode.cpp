// PWD_Decode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	//int i, j, n;
	char c;

	c = getchar();
	while ( c != '\n' )
	{
		if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
		{
			if ( (c >= 'w' && c <= 'z') || (c >= 'W' && c <= 'Z') )
				c = c - 22;
			else
				c = c + 4;
		}
		printf("%c", c);
		c = getchar();
	}

	printf("\n");
		

	return 0;
}

