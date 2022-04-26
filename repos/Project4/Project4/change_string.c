#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char str[100]; // 배열 선언
	char t_str; // 변경할 문자 입력 받을 변수 선언
	char ch_str; // 치환할 문자 입력 받을 변수 선언
	char* ptr = NULL; //배열에 접근할 포인터 선언
	printf("[>] 문자를 입력하세요\n"); // 문자열 입력 안내문
	printf("[<] "); // 입력 가이드라인
	scanf(" %s", str); //입력 받는 함수
	ptr = str; // 포인터에 변수 주소 저장
	printf("[>] 변경할 문자를 입력하세요\n"); // 변경할 문자 입력 안내문
	printf("[<] "); // 입력 가이드라인
	scanf(" %c", &t_str); // 입력 받는 함수
	printf("[>] 치환할 문자를 입력하세요\n"); // 치환할 문자 입력 안내문
	printf("[<] "); // 입력 가이드라인
	scanf(" %c", &ch_str); // 입력 받는 함수
	for (int i = 0; i <= sizeof(ptr); i++) // 바꿀 위치를 찾는 for문 
	{
		if (*(ptr + i) == t_str) // 변경할 문자와 같은 것이 있는지 보는 if문
		{
			str[i] = ch_str; // 바꾸는 문장
		}
	}
	printf("[>] 치환된 문자는 %s입니다.\n", str); // 출력하는 문장
	
	return 0;
}