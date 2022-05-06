#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[100] = "";
	printf("[>] 파일에 입력할 문자열을 입력해 주세요. \n[>] ");
	scanf("%[^\n]", str); // "%[^\n] <-- 띄어쓰기도 입력 가능하게..."
	FILE* fp;
	fp = fopen("data.txt", "w");
	fputs(str, fp);
	fclose(fp);
	return 0;
}
