#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <math.h>
#define TRI (sqrt(3)/4)
#define PI 3.141592
int rect_ar(int x);

double rect_wid(int x);

int tri_ar(int x);

double tri_wid(int x);

double cir_ar(int x);

double cir_wid(int x);

int main()
{
	int x;
	printf("[>] 정수를 입력하세요.\n[<] ");
	scanf("%d", &x);
	printf("[>] 정사각형의 둘레의 길이는 %d입니다.\n", rect_ar(x));
	printf("[>] 정사각형의 넓이의 길이는 %lf입니다.\n", rect_wid(x));
	printf("[>] 삼각형의 둘레의 길이는 %d입니다.\n", tri_ar(x,y,z));
	printf("[>] 삼각형의 넓이의 길이는 %lf입니다.\n", tri_wid(x,y));
	printf("[>] 원의 둘레의 길이는 %lf입니다.\n", cir_ar(x));
	printf("[>] 원의 둘레의 길이는 %lf입니다.\n", cir_wid(x));
}
int rect_ar(int x)
{
	return x * 4;
}
double rect_wid(int x)
{
	return x * x;
}
int tri_ar(int x)
{
	return x * 3;
}
double tri_wid(int x)
{
	return x * x * TRI;
}
double cir_ar(int x)
{
	return 2*x * PI;
}

double cir_wid(int x)
{
	return (x ^ 2) * PI;
}
