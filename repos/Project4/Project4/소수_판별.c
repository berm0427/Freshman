#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int sosu;
	printf("[>]수를 입력해주세요 \n[<] ");
	scanf("%d", &sosu);
	for (int i = 2; i <= sosu; i++)
	{
		if (sosu % i == 0 && sosu != i)
		{
			printf("[>] %d -> 소수가 아닙니다.\n", sosu);
			break;
		}
		else if (i == sosu)
		{
			printf("[>] %d -> 소수 입니다.\n", sosu);
		}
	}
	return 0;
}
