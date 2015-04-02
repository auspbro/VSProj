

#include "stdafx.h"
#include <stdio.h>


int main(int argc, char const *argv[])
{
	int a[10];
	printf("Please enter 10 integer numbers:");
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d", a[i]);
	}
	printf("%d\n");
	return 0;
}