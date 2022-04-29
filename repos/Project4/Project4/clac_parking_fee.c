//*********************************************************
// 주차비 계산 프로그램
//*********************************************************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int minute, fare = 0;
	printf("[>] 주차요금 계산을 위한 시간을 분으로 입력\n[<] ");
	scanf("%d", &minute);
	for (;;)
	{
		if (minute < 0)
		{
			printf("[>] 잘못된 값 입니다.\n");
			printf("[>] 주차요금 계산을 위한 시간을 분으로 입력\n[<] ");
			scanf("%d", &minute);
		}
		else
		{
			break;
		}
	}
	if (minute < 30)
	{
		fare = 1200;
	}
	else if (minute > 30 && minute < 1440)
	{
		fare = 1200;
		minute -= 30;
		for (;;)
		{
			fare += 600;
			minute -= 15;
			if (minute < 15)
			{
				break;
			}
		}
	}
	else
	{
		fare = 0;
		for (;;)
		{
			fare += 24000;
			minute -= 1440;
			if (minute < 1440)
			{
				break;
			}
		}
	}
	printf("[>] 주차요금은 %d원\n", fare);
	return 0;
}
