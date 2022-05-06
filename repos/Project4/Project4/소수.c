#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	for (int i = 2; i<=10; i++)
	{
		for (int j = 2; j <= 10; j++)
		{
			if (i % j == 0 && i != 2 && i != j)
			{
				break;
			}

			else if (i == j)
			{
				printf("%d\n", i);
			}
		}
	}
	return 0;
}
