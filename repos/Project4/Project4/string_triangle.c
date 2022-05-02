#include <stdio.h>

int main()
{
    char str[] = "Hello World"; //배열 선언
    char* ptr = str; // 포인터 선언
    while (*ptr) // 포인터가 가리키는 값이 '\0'이 아닐 때 까지 반복
    {
        printf("%s\n", ptr); // 포인터가 n번째를 가리키면 n번째부터 모두 출력
        ptr++; // 포인터가 다음 위치로 이동
    }
    return 0; // 리턴
}
