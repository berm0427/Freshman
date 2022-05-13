#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int add1(int x)
{
	return (x + 1);
}

double half(int x)
{
	return(x / 2.0);
}

int main()
{
	int num;

	printf("[>] 정수를 하나 입력하세요.\n[<] ");
	scanf("%d", &num);
	printf("\n");

	printf("[>] %d의 바로 다음 정수는 %d이고\n", num, add1(num));
	printf("[>] %d의 반은 %.1f 입니다\n", num, half(num));
	printf("\n");
	printf("[>] 제가 맞게 계산했나요? \n");

	return 0;
}
