#include <stdio.h>

void hello()
{
	printf("hello\n");
	hello();
}

int main()
{
	hello();
	return 0;
}
