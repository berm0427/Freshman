#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[100] = "";
	printf("[>] 파일에 입력할 문자열을 입력해 주세요. \n[>] ");
	scanf("%s", str);
	FILE* fp;
	fp = fopen("data.txt", "w");
	fputs(str, fp);
	fclose(fp);
	return 0;
}
