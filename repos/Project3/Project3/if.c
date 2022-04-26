# include <stdio.h>

int main()
{
	int num = 0;

	printf("[>] 숫자를 입력해주세요!\n");
	printf("[<] ");
	scanf_s("%d", &num);

	if (num == 10) 
	{
		printf("[>] 입력한 숫자는 %d입니다. \n",num);
	}

	return 0;
}