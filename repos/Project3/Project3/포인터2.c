# include <stdio.h>

int main()
{
	int* ptr = NULL;
	int num = 1;
	ptr = &num;
	printf("[>] num value : %d\n", num);
	*ptr = 10;
	printf("[>] num value : %d\n", num);
	*ptr = 20;
	printf("[>] num value : %d\n", num);

	return 0;
}