# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int num1, num2;
	char booho;
	printf("[>] ù ��° ���� �� ū �� ���� �����ڸ� �Է����ּ���.\n");
	printf("[<] ");
	scanf("%d %d", &num1, &num2); // ���� �߻�!
	if (num1 > num2)
	{
		printf("[>] ����ϰ� ���� �����ڸ� �Է��ϼ��� ex) + - * /\n");
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