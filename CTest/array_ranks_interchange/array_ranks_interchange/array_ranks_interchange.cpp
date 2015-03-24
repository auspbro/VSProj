// array_ranks_interchange.cpp : 定义控制台应用程序的入口点。
// 数组行列交换

#include "stdafx.h"
#define N 3

int _tmain(int argc, _TCHAR* argv[])
{
	void array_ranks_interchange(int a[][3]);
	int i, j;
	int a[N][N];
	printf("Please input array a:");
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			scanf_s("%d", &a[i][j]);
	printf("\noriginal array:\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}

	array_ranks_interchange(a);
	printf("convert array:\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
		


	return 0;
}

void array_ranks_interchange(int a[][3])		//定义转置数组的函数
{
	int i, j, t;
	for (i = 0; i < N; i++)
		for (j = i + 1; j < N; j++)
		{
			t = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = t;
		}
}

