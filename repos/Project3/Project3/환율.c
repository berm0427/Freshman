#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/// **********************************************************************
///  
/// 문자와 다음 문자의 ASCII 코드 값을 프린트한다.
///
/// **********************************************************************
int main() {
	
	int c;

	c = 'A';
	printf("처음문자 :            %c \n",c);
	printf("처음문자의 ASCII 값 : %d \n",c);

	c = c + 1;
	printf("다음문자 :            %c \n", c);
	printf("다음문자의 ASCII 값 : %d \n", c);

	return 0;
}