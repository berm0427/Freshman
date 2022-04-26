# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int num1, num2;
	char booho;
	printf("[>] 첫 번째 값이 더 큰 두 개의 연산자를 입력해주세요.\n");
	printf("[<] ");
	scanf("%d %d", &num1, &num2); // 오류 발생!
	if (num1 > num2)
	{
		printf("[>] 계산하고 싶은 연산자를 입력하세요 ex) + - * /\n");
		printf("[<] ");
		scanf("%c", &booho);
		if (booho == "+")
		{
			printf("[>] %d", num1 + num2);
		}
		else if (booho == "-")
		{
			printf("[>] %d", num1 - num2);
		}
		else if (booho == "*")
		{
			printf("[>] %d", num1 * num2);
		}
		else if (booho == "/")
		{
			printf("[>] %d", num1 / num2);
		}
	}
	return 0;
}