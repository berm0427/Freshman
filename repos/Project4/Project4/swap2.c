#include <stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("swap_a : %d \n", *a);
	printf("swap_b : %d \n", *b);
}
int main()
{
	int a, b;
	a = 10;
	b = 20;
	swap(&a, &b);

	printf("swap 호출 이후 a : %d \n", a);
	printf("swap 호출 이후 b : %d \n", b);
	return 0;
}
