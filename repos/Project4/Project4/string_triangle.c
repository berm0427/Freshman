#include <stdio.h>

int main()
{
    char str[] = "Hello World";
    char* ptr = str;
    while (*ptr)
    {
        printf("%s\n", ptr);
        ptr++;
    }
    return 0;
}
