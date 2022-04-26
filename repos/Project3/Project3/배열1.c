# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int i, num[4] = { 1,2,3,4 };
	for (i = 0; i < sizeof(num) / 4; i++)
	{
		printf("[>] num[%d] = %d\n", i, num[i]);
	}
	printf("\n");
	num[0] = 10;
	num[1] = 20;
	num[2] = 30;
	num[3] = 40;
	for (i = 0; i < sizeof(num) / 4; i++)
	{
		printf("[>] num[%d] = %d\n", i, num[i]);
	}
	return 0;
}
