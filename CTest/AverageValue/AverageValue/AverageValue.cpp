// AverageValue.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	float average(float array[10]);
	float score[10], aver;
	int i;
	printf("Please input 10 numbers:\n");

	for (i = 0; i <=10; i++)
	{
		scanf_s("%f", &score[i]);
	}
	printf("\n");
	aver = average(score);
	printf("average score is %5.2f\n",aver);

	return 0;
}

float average(float array[10])
{
	int i;
	float aver, sum = array[0];

	for(i = 0; i <= 10; i++)
	{
		sum = sum + array[i];
	}

	aver = sum / 10;
	return(aver);
}
