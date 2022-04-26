#define _CRT_SECURE_NO_WARNINGS // scanf 오류 안뜨게 하기 위한 구문
# include <stdio.h> // 표준 입출력 라이브러리 불러오기 위한 구문

int main() // 메인함수 선언하기 위한 구문
{
	int num1, num2, num3; // 세 수를 입력 받기 위한 세 개의 변수를 선언하는 구문
	printf("-> 숫자 세개를 입력해 주세요\n"); // 세 개를 입력받기 위한 안내문 출력하는 printf 구문
	printf("-> "); // 세 개를 입력받기 위한 안내문 출력하는 printf 구문
	scanf("%d %d %d", &num1, &num2, &num3); // 세 수를 입력받는 scanf 구문
	num1 > num2 ? (num1 > num3 ? printf("-> 세 개의 숫자 중 큰 값은 %d 입니다.", num1) : (num3 > num2 ? printf("-> 세 개의 숫자 중 큰 값은 %d 입니다.", num3) : printf("-> 세 개의 숫자 중 큰 값은 %d 입니다.", num2))) : (num2 > num3 ? printf("-> 세 개의 숫자 중 큰 값은 %d 입니다.", num2) : (num3 > num1 ? printf("-> 세 개의 숫자 중 큰 값은 %d 입니다.", num3) : printf("-> 세 개의 숫자 중 큰 값은 %d 입니다.", num1)));
}   // 세 수를 비교하고 출력하기 위한 삼항연산자 구문 