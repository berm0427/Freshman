# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int num = 0;

	printf("[>] ���ڸ� �Է����ּ���!\n");
	printf("[<] ");
	scanf("%d", &num);

	if (num > 0)
	{
		printf("[>] �Է��� ���� ����̴�. \n");
	}
	else if (num < 0)
	{
		printf("[>] �Է��� ���� �����̴�.\n");
	}
	else 
	{
		printf("[>] �Է��� ���� 0�̴�.\n");
	}

	return 0;
}