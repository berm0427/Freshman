#include <stdio.h>

int main()
{
    int num[4] = { 10, 20, 30, 40 }; // 정수형 배열 선언

    printf("[>] *(num + 2) value : %d\n", *(num + 2)); // num[2]의 값 출력
    printf("[>] *num + 2 value : %d\n", *num + 2); // num[1] + 2의 값을 출력

    return 0;
}
