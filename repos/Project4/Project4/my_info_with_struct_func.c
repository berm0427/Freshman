#include <stdio.h>
#pragma warning(disable : 4996)

#define INPUT 1
#define OUTPUT 2
#define EXIT 3

#define MAX 10

typedef struct student_info
{
    int studentID;
    char name[9];

    int writing;
    int discreate_mathematics;
    int C_Pro;
}student;

student input()
{
    student p;

    printf("[>] 학번을 입력하세요\n[<] ");
    scanf("%d", &(p.studentID));

    printf("[>] 이름을 입력하세요\n[<] ");
    scanf("%s", p.name);

    printf("[>] 성적을 입력하세요\n[>] 글쓰기\n[<] ");
    scanf("%d", &p.writing);

    printf("[>] 이산수학\n[<] ");
    scanf("%d", &p.discreate_mathematics);

    printf("[>] C프로그래밍\n[<] ");
    scanf("%d", &p.C_Pro);

    return p;
}

void output(student* p, int size)
{//         구조체의포인터   사이즈변수
    printf("학번     이름     글쓰기   이산수학   C프로그래밍\n");
    for (int i = 0; (p + (size * i))->studentID != NULL; i++) 
    {
        printf("%-08d %-08s %-08d %-08d   %-08d\n", (p + (size * i))->studentID, (p + (size * i))->name, (p + (size * i))->writing, (p + (size * i))->discreate_mathematics, (p + (size * i))->C_Pro);
    }// (p + (size * i))->studentID : 참조하는 식
}  // 포인터 배열의사이즈 변수  

void main()
{
    int index = 0;
    int cycle = 0;

    student studentList[MAX] = { NULL, };

    while (1)
    {
        printf("------------------------\n");
        printf("1. 입력  2. 출력  3.종료\n");
        printf("------------------------\n");

        printf("[<] ");
        scanf("%d", &index);

        switch (index)
        {
        case INPUT:
            if (MAX <= cycle)
            {
                printf("[>] 더 이상 추가할 수 없습니다");
                break;
            }

            studentList[cycle] = input();
            cycle++;
            break;

        case OUTPUT:
            output(&studentList[0], &studentList[1] - &studentList[0]);
            break;
                 //포인터가 가리킬 초기 주소  주소값의 차이를 통해 배열의 사이즈 구하는 식 

        case EXIT:
            printf("[>] Bye Bye!");
            return;
            break;
        }
    }
}
