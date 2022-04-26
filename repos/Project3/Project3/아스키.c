#include <stdio.h>

int main()
{
	float dollar, rate;
	int won = 100000;


	rate = 1069.50;
	dollar = won / rate;
	printf("월요일 환율: %6.2f, 10만원은 %6.2f 달러입니다. \n", rate, dollar);


	rate = 1071.40;
	dollar = won / rate;
	printf("화요일 환율: %6.2f, 10만원은 %6.2f 달러입니다. \n", rate, dollar);


	rate = 1072.65;
	dollar = won / rate;
	printf("수요일 환율: %6.2f, 10만원은 %6.2f 달러입니다. \n", rate, dollar);


	rate = 1073.00;
	dollar = won / rate;
	printf("목요일 환율: %6.2f, 10만원은 %6.2f 달러입니다. \n", rate, dollar);


	rate = 1071.50;
	dollar = won / rate;
	printf("금요일 환율: %6.2f, 10만원은 %6.2f 달러입니다. \n", rate, dollar);
}