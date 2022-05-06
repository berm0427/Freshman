#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	double total = 0, score, count = 0;
	double average = 0;
	int average_2 = 0;

	printf("[>] 점수 입력 (0은 끝): \n");
	scanf("%lf", &score);

	while (score != 0)
	{
		total += score;
		count++;
		scanf("%lf", &score);
	}

	if (count == 0)
	{
		printf("[>] 입력 없음.\n");
	}
	else
	{
		average = total / count;
		average_2 = (int)(average + 0.5);
		printf("[>] 총점: %lf \n", total);
		printf("[>] 평균: %5.2lf \n", average);
		printf("[>] 평균: %d \n", average_2);
	}

	return 0;
}
