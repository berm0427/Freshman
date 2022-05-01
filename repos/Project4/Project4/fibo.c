#define _CRT_SECURE_NO_WARNINGS // scanf 오류 방지
#include <stdio.h>

int f_n(int f) // 피보나치 수열 재귀함수 
{
	if (f == 0) // 함수가 받은 수가 0일때
	{
		return 0; // 0을 반환
	}
	else if (f == 1) // 함수가 받은 수가 1일때
	{
		return 1; //1을 반환
	}
	else if (f > 1) // 함수가 받은 수가 1 초과일때
	{
		return f_n(f - 1) + f_n(f - 2); // 피보나치 수열 계산
	}
}

int main()
{
	int fibo; // 입력 받을 변수 선언
	printf("[>] 수를 입력해주세요\n[<] "); // 수를 입력받는 가이드라인 출력
	scanf("%d", &fibo); // 수를 입력받는 구문
	printf("[>]"); // 출력 가이드 라인 출력
	for (int i = 1; i < fibo; i++) // 피보나치 계산을 도와주기 위한 for문
	{
		printf(" %d ", f_n(i)); //피보나치 수열 계산하는 함수에 입력받은 범위까지의 정수를 줘서 계산하게하고, 계산한 걸 받고, 출력하는 구문
	}
	printf("\n"); // 개행하는 구문
	return 0;
}
