# define _CRT_SECURE_NO_WARNINGS //scanf 오류 안나게 하는 구문
# include <stdio.h>

int main()
{
	int count = 0; // 정수형 count변수 선언 및 초기화
	char str[100] = {NULL}; // 문자형 str배열 선언 및 초기화
	printf("[>] string input\n"); // 입력 안내문 출력
	printf("[<] "); // 입력 가이드라인 출력
	scanf("%s", &str); // 배열에 입력받는 구문
	for (int i = 0;;i++) // 배열에서 끝나는 지점을 찾기위해 반복해주는 구문
	{

		if (*(str+i) == '\0') // 배열에서 끝나는 지점 찾는 구문
		{
			break; // 끝나면 멈추는 구문
		}
		else if (*(str + i) != '\0') // 끝나지 않는 다면
		{
			count++; // count변수 증가
		}
	}
	printf("[>] string array count : %d\n", count); // 개수 출력
	return 0;
}
