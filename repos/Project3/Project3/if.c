# include <stdio.h>

int main()
{
	int num = 0;

	printf("[>] ���ڸ� �Է����ּ���!\n");
	printf("[<] ");
	scanf_s("%d", &num);

	if (num == 10) 
	{
		printf("[>] �Է��� ���ڴ� %d�Դϴ�. \n",num);
	}

	return 0;
}