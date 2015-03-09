// GCD_LCM_Func1.cpp : �������̨Ӧ�ó������ڵ㡣
//շת�����������ŷ����·���
//ʹ�ú����ݹ���÷����������������Լ��(Greatest Common Divisor)����С������(Least Common Multiple)
//

#include "stdafx.h"


int gcd(int a, int b)
{
	if (a%b == 0)
		return b;
	else
		return gcd(b, a%b);
}


int _tmain(int argc, _TCHAR* argv[])
{
	int m, n;
	int t1;

	printf("Please input two integer number:");
	scanf_s("%d%d", &m, &n);
	t1 = gcd(m, n);
	printf("The Greatest common divisor is %d\n", t1);
	printf("The Least common multiple is %d\n", m*n/t1);
	getchar();


	return 0;
}

