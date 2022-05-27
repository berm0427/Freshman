#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double a_mean(double a, double b)
{
	return (a + b) / 2;
}

double h_mean(double a, double b)
{
	return (2 * a * b);
}

double g_mean(double a, double b)
{
	return sqrt(a * b);
}

int main()
{
	double x, y;
	int sel;
	char* name[] = { "산술평균", "조화평균", "기하평균" };
	double (*fun[])(double, double) = { a_mean,h_mean,g_mean };
	int size = sizeof name / sizeof name[0];
	
	printf("[>] 평균을 구할 두 수를 입력해주세용\n[<] ");
	scanf("%lf%lf", &x, &y);

	printf("\n[>] 어떤 평균을 구하고 싶으신가용?\n");
	for (int i = 0; i < size; ++i)
	{
		printf("[>] %d. %s\n", i + 1, name[i]);
	}
	printf("[>] 번호를 입력해주세용\n[<] ");
	scanf("%d", &sel);
	while (sel < 1 || sel > 3)
	{
		printf("[>] 다시 번호를 입력해주세여\n[<] ");
		scanf("%d", &sel);
	}
	sel--;
	printf("\n[>] %s(%f, %f) = %f\n", name[sel], x, y, fun[sel](x, y));
}
