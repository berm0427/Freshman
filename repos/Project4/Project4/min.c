//*********************************************************
// 중첩 if문을 사용하여 최소값을 결정한다.
//*********************************************************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c, min = 0;

	printf("[>] 세 개의 정수 입력 \n[<] ");
	scanf("%d", &a);
	scanf(" %d", &b);
	scanf(" %d", &c);

	if (a < b)
	{
		if (a < c)
		{
			min = a;
		}
		else
		{
			min = c;
		}
	}
	else
	{
		if (b < c)
		{
			min = b;
		}
		else
		{
			min = c;
		}
	}
	printf("[>] 최솟값: %d", min);
}
