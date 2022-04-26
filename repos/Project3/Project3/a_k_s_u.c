# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int num;
	printf("[<] 양수 입력 : ");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++ )
	{
		if (num % i == 0)
		{
			printf("[>] %d\n",i);
		}
	}
	return 0;
}