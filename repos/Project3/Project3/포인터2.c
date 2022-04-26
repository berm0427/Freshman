#include <stdio.h>

int main()
{
    int* ptr = NULL; //포인터 선언문
    int num = 1; // 정수형 변수 선언문

    ptr = &num; // 포인터에 num변수의 주소를 저장
    printf("[>] num value : %d\n", num); //num변수에 저장된 값을 출력

    *ptr = 10; // 포인터를 이용해 num값을 바꾸는 구문
    printf("[>] num value : %d\n", num);// 바뀐 num값을 출력

    *ptr = 20; // 포인터를 이용해 num값을 바꾸는 구문
    printf("[>] num value : %d\n", num); // 바뀐 num값을 출력
    return 0; 
}
