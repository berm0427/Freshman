#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num1, num2;
	printf("input num1 : ");
	scanf("%d", &num1);
	printf("input num2 : ");
	scanf("%d", &num2);
	num1 > num2 ? printf("�� : %d\n������ : %d\n", num1 / num2, num1 % num2) : printf("�� : %d\n������ : %d\n", num2 / num1, num2 % num1);
	return 0;
}