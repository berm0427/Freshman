#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printIntVar(char* name, int value)
{
	printf("%s\t = %d\n", name, value);
}

int main()
{
	int n;

	printf("[>] 숫자 n을 입력해주세요\n[<] ");
	scanf("%d", &n);

	printIntVar("n", n);
	printIntVar("*&n", *&n);

	return 0;
}
