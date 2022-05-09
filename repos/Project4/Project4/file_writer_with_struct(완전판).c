#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct person
{
	char name[10];
	int age;
	char gender;
};
int main()
{
	char name[10] = { '\0', };
	int age = 0;
	char gender;
	struct person p = { '\0', };
	struct person* ptr = &p;
	printf("[>] 이름 \n[<] ");
	scanf("%s", name);
	printf("[>] 나이 \n[<] ");
	scanf("%d", &age);
	printf("[>] 성별 \n[<] ");
	scanf("\n%c", &gender);
	strcpy(p.name,name);
	p.age = age;
	p.gender = gender;
	FILE* fp;
	fp = fopen("data.txt", "w+");
	fprintf(fp, "%s %d %c", p.name, p.age, p.gender);
	return 0;
	
}
