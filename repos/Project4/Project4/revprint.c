//********************************************************************************
// 다섯 개의 정수를 입력받아, 배열에 저장하고, 이를 역순으로 출력하는 프로그램
//********************************************************************************
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int x[5], i;
	printf("[>] 다섯 개의 정수를 입력해주세요\n[>] ");
	for (i = 0; i < 5; ++i)
	{
		scanf("%d",&x[i]);
	}
	printf("[>] 입력된 정수를 역순으로 출력하면 다음과 같습니다.\n");
	for (i = 4; i >= 0; --i)
	{
		printf("[>] %d\n", x[i]);
	}
	return 0;
}
