#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct book
{
	char title[30];
	char author[30];
	int price;
}my_book; 

int main()
{
	my_book my;
	strcpy(my.title,"snowman");
	my.price = 20000;
	printf("[>] title : %s\t price : %d\t", my.title, my.price);
	return 0;
}
