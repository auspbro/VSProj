// max_value.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int max_value(int array[][4]);
	int a [3][4] = {{23, 2, 13, 4}, {22, 2434,5, 7}, {13, 6, 232, 132}};
	printf("Max value is %d\n", max_value(a));

	return 0;
}

int max_value(int array[][4])
{

	int i, j, max;
	max = array[0][0];

	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
			if (array[i][j] > max)
				max = array[i][j];
	return(max);
}
