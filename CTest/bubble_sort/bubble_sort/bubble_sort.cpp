// bubble_sort.cpp : 瀹氫箟鎺у埗鍙板簲鐢ㄧ▼搴忕殑鍏ュ彛鐐广€?
// 鍐掓场鎺掑簭

#include "stdafx.h"
#define SIZE 10

int _tmain(int argc, _TCHAR* argv[])
{
	void bubble_sort(int a[], int n);
	int number[SIZE];
	printf("Please input 10 integer numbers:\n");
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &number[i]);
	}
	bubble_sort(number, SIZE);
	printf("The scored numbers is:\n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", number[i]);
	}
	printf("\n");
	return 0;
}


void bubble_sort(int a[], int n)
{
	int i, j, temp;
	
	for (j = 0; j < n - 1; j++)
		for (i = 0; i < n - 1 - j; i++)
		{
			if (a[i] > a[i+1])		
			{
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
}
