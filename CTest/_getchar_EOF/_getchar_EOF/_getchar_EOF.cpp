// _getchar_EOF.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	printf("Press a key. Enter would be nice :-)\n\n");
	printf("The expression getchar() != EOF evaluates to %d\n", getchar() != EOF);

	printf("The value of EOF is %d\n", EOF);

	return 0;
}

