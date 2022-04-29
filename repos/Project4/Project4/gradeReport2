//*********************************************************
// switch 문의 사용을 보여준다.
//*********************************************************

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int score, category;
	char grade;
	printf("[>] 점수 입력 (0 to 100)\n[<] ");
	scanf("%d", &score);
	
	for (;;)
	{
		if (score < 0 || score > 100)
		{
			printf("[>] 잘못된 점수 입니다.\n");
			printf("[>] 점수 입력 (0 to 100)\n[<] ");
			scanf("%d", &score);
		}
		else
		{
			break;
		}
	}
	category = score / 10;
	switch (category)
	{
		case 10:
			grade = 'A';
			break;
		case 9:
			grade = 'A';
			break;
		case 8:
			grade = 'B';
			break;
		case 7:
			grade = 'C';
			break;
		case 6:
			grade = 'D';
			break;
		default:
			grade = 'F';
	}
	printf("[>] 점수: %d \t 학점: %c\n", score, grade);
	return 0;
}
