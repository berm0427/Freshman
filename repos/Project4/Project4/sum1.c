//********************************************************************************
// 배열을 함수의 인자로 전달하여 1부터 10까지의 정수 합을 출력하는 프로그램
//********************************************************************************
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int sum(int a[10]);
int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("1 + 2 + ... + 9 + 10 = %d\n", sum(x));
	return 0;
}

int sum(int a[10])
{
	int sum = 0, i;
	for (i = 0; i < 10; ++i)
	{
		sum += a[i];
	}
	return sum;
}
