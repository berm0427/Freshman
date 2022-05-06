#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cstring>

typedef struct book
{
	char title[30];
	char author[30];
	int price;
}my_book; 

int main()
{
	my_book my;
	strcpy(my.title,"snowman"); // C++에서는 별도의 선언이 필요없지만, C언어는 "#include <cstring>"라는 선언이 필요함.
	my.price = 20000;
	printf("[>] title : %s\t price : %d\t", my.title, my.price);
	return 0;
}
