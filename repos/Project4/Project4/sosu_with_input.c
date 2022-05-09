#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int sosu = 0;
	printf("[>]숫자를 입력해주세요\n[<] ");
	scanf("%d", &sosu);
	for (int i = 2; i <= sosu; i++)
	{
		for (int j = 2; j <= sosu; j++)
		{
			if (i % j == 0 && i != 2 && i != j)
			{
				break;
			}

			else if (i == j)
			{
				printf("[>] %d\n", i);
			}
		}
	}
	return 0;
}
