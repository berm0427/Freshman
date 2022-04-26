# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int calc_add(int calc1, int calc2)
{
	return  calc1 + calc2;
}
int calc_minus(int calc1, int calc2)
{
	return  calc1 - calc2;
}
int calc_multi(int calc1, int calc2)
{
	return  calc1 * calc2;
}
int calc_div(int calc1, int calc2)
{
	return  calc1 / calc2;
}
int main()
{
	int calc1, calc2;
	printf("[<] 숫자 입력 : ");
	scanf("%d %d", &calc1, &calc2);
	printf("%d + %d = %d\n", calc1,calc2, calc_add(calc1, calc2));
	printf("%d - %d = %d\n", calc1, calc2, calc_minus(calc1, calc2));
	printf("%d x %d = %d\n", calc1, calc2, calc_multi(calc1, calc2));
	printf("%d / %d = %d\n", calc1, calc2, calc_div(calc1, calc2));

	return 0;
}