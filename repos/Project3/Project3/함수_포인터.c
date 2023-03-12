# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int calc(int calc1, int calc2)
{
	int plus = calc1 + calc2;
	int minus = calc1 - calc2;
	int multi = calc1 * calc2;
	float div = calc1 / calc2;
}

int main()
{
	int calc1, calc2;
	printf("[<] 수를 입력 : ");
	scanf("%d %d", &calc1, &calc2);
	printf("%d + %d = %d\n", calc1, calc2, calc_add(calc1, calc2));
	printf("%d - %d = %d\n", calc1, calc2, calc_minus(calc1, calc2));
	printf("%d x %d = %d\n", calc1, calc2, calc_multi(calc1, calc2));
	printf("%d / %d = %d\n", calc1, calc2, calc_div(calc1, calc2));

	return 0;
}
