# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int num_s = 0;
	int num_f = 0;
	int sum = 0;
	printf("[>] ���� ���ϱ�\n");
	printf("[<] ��𼭺���? ");
	scanf("%d", &num_s);
	printf("[<] ������? ");
	scanf("%d", &num_f);
	for (int i = num_s; i <= num_f; i++)
	{
		sum += i;
	}
	printf("[>] ���� ���ϱ� %d \n", sum);
	return 0;
}