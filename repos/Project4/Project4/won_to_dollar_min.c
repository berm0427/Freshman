//*********************************************************
// 달러 환율 프로그램
//*********************************************************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int dollar, won, exchange, d1 = 0, d2 = 0, d5 = 0, d10 = 0, d20 = 0, d50 = 0, d100 = 0;
	printf("[>] 달러 환전을 위한 원화 입력\n[<] ");
	scanf("%d", &won);
	for (;;)
	{
		if (won < 0)
		{
			printf("[>] 잘못된 값 입니다.\n");
			printf("[>] 달러 환전을 위한 원화 입력\n[<] ");
			scanf("%d", &won);
		}
		else
		{
			break;
		}
	}
	dollar = won / 1200;
	for (;;)
	{
		if (dollar < 2)
		{
			d1 = dollar / 1;
			dollar %= 1;
		}
		else if (dollar < 5)
		{
			d2 = dollar / 2;
			dollar %= 2;
		}
		else if (dollar < 10)
		{
			d5 = dollar / 5;
			dollar %= 5;
		}
		else if (dollar < 20)
		{
			d10 = dollar / 10;
			dollar %= 10;
		}
		else if (dollar < 50)
		{
			d20 = dollar / 20;
			dollar %= 20;
		}
		else if (dollar < 100)
		{
			d50 = dollar / 50;
			dollar %= 50;
		}
		else
		{
			d100 = dollar / 100;
			dollar %= 100;
		}
		if (dollar == 0)
		{
			break;
		}
	}
	printf("[>] 100달러: %d개\n", d100);
	printf("[>] 50달러: %d개\n", d50);
	printf("[>] 20달러: %d개\n", d20);
	printf("[>] 10달러: %d개\n", d10);
	printf("[>] 5달러: %d개\n", d5);
	printf("[>] 2달러: %d개\n", d2);
	printf("[>] 1달러: %d개\n", d1);
	return 0;
}
