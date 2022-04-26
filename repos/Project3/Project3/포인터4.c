# include <stdio.h>

int main()
{
	int num[4] = { 10, 20, 30, 40 };

	printf("[>] *(num + 2) value : %d\n", *(num + 2));
	printf("[>] *num + 2 value : %d\n", *num + 2);

	return 0;
}