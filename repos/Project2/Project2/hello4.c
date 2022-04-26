#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	char chr;
	printf("숫자와 문자를 입력해 주세요 -> ");
	scanf("%d %c", &num, &chr);
	printf("숫자 : %d\n문자 : %c", num, chr);
	return 0;
}