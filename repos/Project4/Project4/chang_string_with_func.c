#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char change_string(char *ptr,char t_str, char ch_str) // 문자열 변환 함수
{

	for (int i = 0; i <= sizeof(ptr); i++) // 바꿀 위치를 찾는 for문 
	{	
		if (*(ptr + i) == t_str) // 변경할 문자와 같은 것이 있는지 보는 if문
		{
			ptr[i] = ch_str; // 바꾸는 문장
		}
	}
}

int main()
{
	char t_str,ch_str; // 변수 선언
	char str[100]; // 배열 선언
	printf("[>] 문자를 입력하세요\n"); // 문자열 입력 안내문
	printf("[<] "); // 입력 가이드라인
	scanf(" %s", str); //입력 받는 함수
	printf("[>] 변경할 문자를 입력하세요\n"); // 변경할 문자 입력 안내문
	printf("[<] "); // 입력 가이드라인
	scanf(" %c", &t_str); // 입력 받는 함수
	printf("[>] 치환할 문자를 입력하세요\n"); // 치환할 문자 입력 안내문
	printf("[<] "); // 입력 가이드라인
	scanf(" %c", &ch_str); // 입력 받는 함수
	change_string(str, t_str, ch_str); // 함수 호출 
	printf("[>] 치환된 문자는 %s입니다.\n", str); // 출력하는 문장
}
