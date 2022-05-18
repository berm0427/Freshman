#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
double hapgae(double m_p, double yeza, int gigan);
int main()
{
	double m_p = 0, r = 0, sum = 0;
	int gigan = 0;
	printf("[>] 월 납입액, 이율, 기간을 입력하세요\n[<] ");
	scanf("%lf %lf %d", &m_p, &r, &gigan);
	double yeza = r / 12;
	printf("[>] 원리합계는 %.2lf입니다. \n",hapgae(m_p,yeza,gigan));
}
double hapgae(double m_p, double yeza, int gigan)
{
	double sum = 0;
	for (int i = 0; i < gigan; i++)
	{
		sum += m_p;
		sum += sum * yeza;
	}
	return sum;
}
