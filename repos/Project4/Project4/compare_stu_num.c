#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct person
{
	int number;
	char name[20];
	int student_number;
};

int main()
{
	struct person p[3];
	int num = 0, stu_num = 0;
	char name[18];
	int max=0;
	for (int i = 0; i < 3; i++)
	{
		printf("[>] 번호 입력 : ");
		scanf("%d", &num);
		printf("[>] 이름 입력 : ");
		scanf("%s", name);
		printf("[>] 학번 입력 : ");
		scanf("%d", &stu_num);

		p[i].number = num;
		strcpy(p[i].name, name);
		p[i].student_number = stu_num;
		printf("\n");
	}
	for (int i = 0; i < 3; i++)
	{
		if(max < p[i].student_number)
		{
			max = p[i].student_number;
		}
	}
	printf("MAX : %d\n", max);
	return 0;
}
