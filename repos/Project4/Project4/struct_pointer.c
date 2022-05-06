#include <stdio.h>

struct person
{
	int number;
	char name[20];
	int student_number;
};

int main()
{
	struct person p;
	struct person* ptr = &p;
	ptr->number = 1;
	strcpy(ptr->name, "유창범"); // 여기서는 선언 안함...
	ptr->student_number = 20223595;
	printf("[>] number : %d\n name : %s\n student_number : %d", ptr->number, ptr->name, ptr->student_number);
	return 0;
}
