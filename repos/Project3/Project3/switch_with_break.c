# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h> 

int main()
{
	int num = 0;

	printf("[>] 1~3���� �Է����ּ���!\n");
	printf("[<] ");
	scanf("%d", &num);

	switch (num)
	{
	case 1:
		printf("[>] �Է��� ���ڰ� 1�̳׿�.\n");
		break;
	case 2:
		printf("[>] �Է��� ���ڰ� 2�̳׿�.\n");
		break;
	case 3:
		printf("[>] �Է��� ���ڰ� 3�̳׿�\n");
		break;
	}

	return 0;
}