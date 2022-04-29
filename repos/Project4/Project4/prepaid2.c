//*********************************************************
// 선불카드 사용을 보여주는 예제 프로그램
//*********************************************************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int balance, amount;

	balance = 100000;
	printf("[>] 사용액 입력 \n[<] ");
	scanf("%d", &amount);

	if (amount <= balance)
	{
		balance = balance - amount;
		printf("[>] 현재 잔액: %d \n", balance);
	}
	else
	{
		printf("[>] 잔액이 부족합니다");
	}
}
