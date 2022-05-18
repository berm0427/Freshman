#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
float hapgae(float m_p, float yeza, float gigan);
int main()
{
	float m_p, r, sum;
	int gigan;
	printf("[>] 월 납입액, 이율, 기간을 입력하세요\n[<] ");
	scanf("%f%f", &m_p, &r);
	scanf("%d", &gigan);
	float yeza = r / 12;
	printf("[>] 원리합계는 %.2f입니다.\n",hapgae(m_p,yeza,gigan));
}
float hapgae(float m_p, float yeza, float gigan)
{
	float sum = 0;
	sum = m_p * (1 + yeza) * (powf(1 + yeza, gigan) - 1.0) / yeza;
	return sum;
}
