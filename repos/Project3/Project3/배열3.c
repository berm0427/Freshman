# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	char str1[] = { 'p','i','n','n','e','r' };
	char str2[6] = { 'p','i','n','n','e','r' };
	char str3[] = { 'p','i','n','n','e','r','\0'};
	
	printf("[>] str1 = %s\n", str1);
	printf("[>] str2 = %s\n", str2);
	printf("[>] str3 = %s\n", str3);
	
	return 0;
}
