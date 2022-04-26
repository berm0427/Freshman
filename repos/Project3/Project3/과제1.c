#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c = 'A';
	for (int i = 0; i <= 25; i++)
	{
		char a = c + i;
		printf("%c\n", a);
		printf("%d\n", a);
		printf("-------------\n");
	}
}