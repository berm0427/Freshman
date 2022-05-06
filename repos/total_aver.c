#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int total = 0, score, count = 0;
	float average;

	printf("[>] 점수 입력 (0은 끝): \n");
	scanf("%d", &score);

	while (score != 0)
	{
		total += score;
		count++;
		scanf("%d", &score);
	}

	if (count == 0)
	{
		printf("[>] 입력 없음.\n");
	}
	else
	{
		average = (float)total / count;
		printf("[>] 총점: %d \n", total);
		printf("[>] 평균: %5.2f \n", average);
	}

	return 0;
}
