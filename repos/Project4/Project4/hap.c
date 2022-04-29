#include <stdio.h>

void hap(int su1,int su2)
{
	int sum = 0;
	for (int i=su1; i<=su2; i++)
	{
		sum += i;
	}
	printf("%d에서 %d까지의 합 : %d\n",su1,su2,sum);
}

int main()
{
	hap(1, 10);
	hap(1, 50);
}
