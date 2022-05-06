#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int count, num;

	printf("[>] 3의 배수를 몇 개 프린트 할까요?\n[<] ");
	scanf("%d", &num);
	for (count = 3; count <= 3 * num; count += 3)
	{
		printf("%d ", count);
		if (count % 30 == 0) printf("\n");
	}
	return 0;
}
