#include <stdio.h>

void hello(int Count)
{
	if (Count >= 0)
	{
		printf("hello %d\n",Count);
		hello(Count -1);
	}
	return;
}

int main()
{
	hello(4);
	return 0;
}
