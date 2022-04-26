# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h> 

int main()
{
	int num = 0;

	printf("[>] 1~3까지 입력해주세요!\n");
	printf("[<] ");
	scanf("%d", &num);

	switch (num)
	{
	case 1:
		printf("[>] 입력한 숫자가 1이네요.\n");
		break;
	case 2:
		printf("[>] 입력한 숫자가 2이네요.\n");
		break;
	case 3:
		printf("[>] 입력한 숫자가 3이네요\n");
		break;
	}

	return 0;
}