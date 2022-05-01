#include <stdio.h>

int main()
{
	int num = 10;
	int* pnum1 = &num;
	int** pnum2 = &pnum1;

	printf("*pnum1 = %d\n", *pnum1);
	printf("**pnum2 = %d\n", **pnum2);
	return 0;
}
