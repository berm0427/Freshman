#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct person
{
	char name[20];
	int student_number;
	int k_s;
	int m_s;
	int p_s;
};

void stu_info()
{
	int i = 0, stu_num = 0;
	int num = 0;
	char name[18] = {'\0',};
	struct person p[100] = {'\0',};
	struct person* ptr = &p;
	int k_s;
	int m_s;
	int p_s;
	for(;;)
	{
		start:
			printf("------------------------\n");
			printf("1. 입력 2. 출력 3. 종료 \n");
			printf("------------------------\n[<] ");
			scanf("%d", &i);
		switch (i)
		{	 
			case 1:
				printf("[>] 학번 입력 : \n[<] ");
				scanf("%d", &stu_num);
				printf("[>] 이름 입력 : \n[<] ");
				scanf("%s", name);
				printf("[>] 성적을 입력하세요.\n");
				printf("[>] 글쓰기\n[<] ");
				scanf("%d", &k_s);
				printf("[>] 이산수학\n[<] ");
				scanf("%d", &m_s);
				printf("[>] C프로그래밍\n[<] ");
				scanf("%d", &p_s);
				for (num;;)
				{
					strcpy(ptr[num].name, name);
					ptr[num].student_number = stu_num;
					ptr[num].k_s = k_s;
					ptr[num].m_s = m_s;
					ptr[num].p_s = p_s;
					printf("\n");
					if (1)
					{	
						num++;
						break;
					}
				}
				break;
			case 2:
				printf("학번\t이름\t국어\t수학\tC프\n");
				for (int num = 0;; num++)
				{
					if (ptr[num].student_number != 0)
					{
						printf("%d\t%s\t%d\t%d\t%d", p[num].student_number, p[num].name, p[num].k_s, p[num].m_s, p[num].p_s);
						printf("\n");
					}
					if (ptr[num].student_number == 0)
					{
						goto start;
					}
				}
				break;
			case 3:
				break;
	}
	}
}
int main()
{
	stu_info();
	return 0;
}
