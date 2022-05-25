//********************************************************************************
// 배열을 함수의 인자로 전달하여 1부터 10까지의 정수 합을 출력하는 프로그램
//********************************************************************************
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int even_sum(int even[]);
int odd_sum(int odd[]);
int count;
int main()
{
	
	printf("[>] 몇 개 입력받을래요?? (최대 10개)\n[<] ");
	scanf("%d", &count);

	int even[10] = { 0, };
	int odd[10] = { 0, };
	int e_o[10] = { 0, };
	printf("[>] 1 부터 정수를 입력하세요\n");
	for (int j = 0; j < count; ++j)
	{
		int p;
		scanf("%d", &p);
		e_o[j] = p;
	}
	// int* ptr = &e_o; <- 이걸 쓰는 방법??
	for (int i = 0; i < count; ++i)
	{
		if (e_o[i] % 2 == 0)
		{
			even[i] = e_o[i];
		}
		else if (e_o[i] % 2 != 0)
		{
			odd[i] = e_o[i];
		}
		// ptr++;
	}
	printf("[>] 1과 해당 입력한 정수들의 홀수들의 합은 %d이고, 짝수들의 합은 %d입니다.\n", odd_sum(odd), even_sum(even));
	return 0;
}

int even_sum(int even[])
{
	int even_sum = 0;
	// int* ptr = &even; <- 이걸 쓰는 방법??
	for (int i = 0; i < count; ++i)
	{
		even_sum += even[i];
	}
	return even_sum;
}
int odd_sum(int odd[])
{
	// int* ptr = &odd; <- 이걸 쓰는 방법??
	int odd_sum = 0;
	for (int i = 0; i < count; ++i)
	{
		odd_sum += odd[i];
	}
	return odd_sum;
}
