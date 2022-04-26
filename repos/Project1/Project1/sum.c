//************************************************************************************************

//  수식과 대입문 사용을 보여준다.

//************************************************************************************************

#include <stdio.h>

int main()
{
	int sum = 0, score;

	score = 70;
	sum += score;
	printf("첫 번째 점수: %d 현재 합: %d \n",score,sum);
	score = 100;
	sum += score;
	printf("두 번째 점수: %d 현재 합: %d \n", score, sum);
	score = 80;
	sum += score;
	printf("세 번째 점수: %d 현재 합: %d \n", score, sum);
	score = 90;
	sum += score;
	printf("네 번째 점수: %d 현재 합: %d \n", score, sum);

	return 0;
}