# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int num = 0;

	printf("[>] 숫자를 입력해주세요!\n");
	printf("[<] ");
	scanf("%d", &num);

	if (num > 0)
	{
		printf("[>] 입력한 값은 양수이다. \n");
	}
	else if (num < 0)
	{
		printf("[>] 입력한 값은 음수이다.\n");
	}
	else 
	{
		printf("[>] 입력한 값은 0이다.\n");
	}

	return 0;
}