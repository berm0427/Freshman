#include <stdio.h>
void main()
{
	int calc_in_num_1 = 0;
	int calc_in_num_2 = 0;
	int calc_in_buho = 0;
	printf("정수 형태의 첫 번쨰 수를 입력해 주세요: ");
	scanf_s("%d", &calc_in_num_1);
	printf("연산자 종류를 입력해 주세요 1. 더하기 2.빼기 3.곱셈 4. 나눗셈: ");
	scanf_s("%d", &calc_in_buho);
	printf("정수 형태의 두 번쨰 수를 입력해 주세요: ");
	scanf_s("%d", &calc_in_num_2);
	if (calc_in_buho == 1)
	{
		printf("더한 결과는 %d 입니다", calc_in_num_1 + calc_in_num_2);
	}
	else if (calc_in_buho == 2)
	{
		printf("뺀 결과는 %d 입니다", calc_in_num_1 - calc_in_num_2);
	}
	else if (calc_in_buho == 3)
	{
		printf("곱한 결과는 %d 입니다", calc_in_num_1 * calc_in_num_2);
	}
	else if (calc_in_buho == 4)
	{
		printf("나누기한 결과는 %d 입니다", calc_in_num_1 / calc_in_num_2);
	}
}