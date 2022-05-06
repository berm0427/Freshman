# include <stdio.h>

int main()
{
	int count = 1, total = 0;
	while (count <= 100)
	{
		total += count;
		count++;
	}
	printf("[>] 1부터 100까지의 자연수의 합은 %d 입니다.\n", total);

	return 0;
}
