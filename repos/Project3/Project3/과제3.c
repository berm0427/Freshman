#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c = '0';
	for (int i = 0; i <= 9; i++)
	{
		char a = c + i;
		printf("%c\n", a);
		printf("%d\n", a);
		printf("-------------\n");
	}
}