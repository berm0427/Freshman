#include <stdio.h>

int hap(int su)
{
	if (su <= 1)
	{
		return 1;
	}
	else
	{
		return su + hap(su - 1);
	}
}

int main()
{
	printf("1에서 10의 합 : %d\n",hap(10));
	printf("1에서 50의 합 : %d\n",hap(50));
}
