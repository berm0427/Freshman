//*********************************************************
// 달러 환율 프로그램 (with 반올림II)
//*********************************************************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int d1 = 0, d2 = 0, d5 = 0, d10 = 0, d20 = 0, d50 = 0, d100 = 0;
	double dollar, won, exchange;
	printf("[>] 달러 환전을 위한 원화 입력\n[<] ");
	scanf("%lf", &won);
	for (;;)
	{
		if (won < 0)
		{
			printf("[>] 잘못된 값 입니다.\n");
			printf("[>] 달러 환전을 위한 원화 입력\n[<] ");
			scanf("%lf", &won);
		}
		else
		{
			break;
		}
	}
	printf("[>] 달러 환전을 위한 환율 입력\n[<] ");
	scanf("%lf", &exchange);
	for (;;)
	{
		if (exchange < 0)
		{
			printf("[>] 잘못된 값 입니다.\n");
			printf("[>] 달러 환전을 위한 환율 입력\n[<] ");
			scanf("%d", &exchange);
		}
		else
		{
			break;
		}
	}
	dollar = won / exchange;
	int dollar_result = floor(dollar + 0.5);
		for (;;)
		{
			if (dollar_result <2)
			{
				d1 = dollar_result / 1;
				dollar_result %= 1;
			}
			else if (dollar_result < 5)
			{
				d2 = dollar_result / 2;
				dollar_result %= 2;
			}
			else if (dollar_result < 10)
			{
				d5 = dollar_result / 5;
				dollar_result %= 5;
			}
			else if (dollar_result < 20)
			{
				d10 = dollar_result / 10;
				dollar_result %= 10;
			}
			else if (dollar_result < 50)
			{
				d20 = dollar_result / 20;
				dollar_result %= 20;
			}
			else if (dollar_result < 100)
			{
				d50 = dollar_result / 50;
				dollar_result %= 50;
			}
			else
			{
				d100 = dollar_result / 100;
				dollar_result %= 100;
			}
			if (dollar_result == 0)
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
	printf("[>] 1달러: %d\n", d1);
	return 0;
}
