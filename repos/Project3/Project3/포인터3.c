#include <stdio.h>

int main()
{
    int num[4] = { 1,2,3,4 }; // 정수형 배열 선언
    char ch[5] = { 's', 'e', 'c', 'u', '\0'}; // 문자형 배열 선언

    printf("[>] num size : %d\n", sizeof(num)); // num배열의 사이즈 출력
    printf("[>] ch size : %d\n", sizeof(ch)); // ch배열의 사이즈 출력 
    printf("[>] *num size : %d\n", sizeof(*num)); // num 배열의 포인터의 사이즈 출력
    printf("[>] *ch size : %d\n\n", sizeof(*ch)); // ch 배열의 포인터의 사이즈 출력

    printf("[>] num address : %08x\n", &num); // num[0]의 주소를 출력
    printf("[>] (num + 1) address : %08x\n", &num[1]); // num[1]의 주소를 출력
    printf("[>] ch address : %08x\n", &ch);// ch[0]의 주소를 출력
    printf("[>] (ch + 1) address : %08x\n\n", &ch[1]);// ch[1]의 주소를 출력

    printf("[>] *(num) value : %d\n", *(num)); // num[0]의 값을 출력
    printf("[>] *(num + 1) value : %d\n\n", *(num + 1)); // num[1]의 값을 출력

    printf("[>] *(ch) value : %c\n", *(ch)); // ch[0]의 값을 출력
    printf("[>] *(ch + 1) value : %c\n", *(ch + 1)); // ch[1]의 값을 출력

    return 0;
}
