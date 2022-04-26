# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int dia_size; // 다이아 중간 줄 까지의 길이 값을 담당할 변수 선언 어차피 입력 받을 예정이라 따로 초기화는 하지 않음.
	printf("[>] 크기를 입력해주세요\n"); // 크기 입력 안내문 출력
	printf("[<] "); // 입력 가이드라인 출력
	scanf("%d", &dia_size); // scanf 발동!
	for (int i = 0; i < dia_size; i++) // 다이아 중간 줄 까지 출력하는 구문(점점 증가)
	{
		for (int j = i; j < dia_size - 1; j++) // 다이아 모양 유지를 위한 구문 (공백을 넣어 입력한 줄 수에 맞도록 함.)
		{
			printf(" ");
		}
		for (int j = 0; j <= (i * 2); j++) // 다이아 별 찍는 구문
		{
			printf("*");
		}
		printf("\n"); //모든 작업이 끝나고 개행하는 개행 문자
	}
	for (int i = dia_size - 2; i >= 0; i--) //다이아 중간줄~끝줄 까지 출력하는 구문(점점 감소)
	{
		for (int j = i; j < dia_size - 1; j++) // 다이아 모양 유지를 위한 구문 (공백을 넣어 입력한 줄 수에 맞도록 함.)
		{
			printf(" ");
		}
		for (int j = 0; j <= (i * 2); j++) // 다이아 별 찍는 구문
		{
			printf("*");
		}
		printf("\n"); // 모든 작업이 끝나고 개행하는 개행 문자
	}
	return 0;
}
	
