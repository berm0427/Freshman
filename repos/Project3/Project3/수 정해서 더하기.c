# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int num_s = 0;
	int num_f = 0;
	int sum = 0;
	printf("[>] 숫자 더하기\n");
	printf("[<] 어디서부터? ");
	scanf("%d", &num_s);
	printf("[<] 어디까지? ");
	scanf("%d", &num_f);
	for (int i = num_s; i <= num_f; i++)
	{
		sum += i;
	}
	printf("[>] 숫자 더하기 %d \n", sum);
	return 0;
}