# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int count = 0;
	char str[100] = {NULL};
	printf("[>] string input\n");
	printf("[<] ");
	scanf("%s", &str);
	for (int i = 0;;i++)
	{

		if (*(str+i) == '\0')
		{
			break;
		}
		else if (*(str + i) != '\0')
		{
			count++;
		}
	}
	printf("[>] string array count : %d\n", count);
	return 0;
}