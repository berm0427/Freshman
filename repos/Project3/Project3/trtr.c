#include <stdio.h>

int sub(int c, int d)
{
	int result = c - d;
	return result;
}
int main()
{
	int a = 0;
	printf("%d", sub(3, 1));
	return 0;
}