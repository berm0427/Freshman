#include <stdio.h>

struct person
{
	char name[20];
	char address[100];
	int age;
}; 

int main()
{
	struct person p = { "유창범", "경기도 안산시 단원구 고잔동", 21 };
	printf("[>] name : %s\t address : %s\t age : %d\t", p.name, p.address, p.age);
	return 0;
}
