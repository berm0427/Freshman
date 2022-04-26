# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int i, num[6] = { 1,2,3, };
	char array[] = { 'p','i','n','n','e','r' };
	for (i = 0; i < 6; i++)
	{
		printf("[>] num[%d] = %d\t", i, num[i]);
		printf("[>] array[%d] = %c\n", i, array[i]);
	}
	return 0;
}
