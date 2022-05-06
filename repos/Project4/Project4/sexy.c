#include <stdio.h>

struct person
{
	int number;
	char name[20];
	int student_number;
};

int main()
{
	struct person p[3] =
	{
		{1, "유창범", 20223595},
		{2, "조규봉", 20223608},
		{3, "sexycb", 20224570}
	};
	for (int i = 0; i < 3; i++)
	{
		printf("[>] number : %d\n name: %s\n student_number : %d\n\n", p[i].number, p[i].name, p[i].student_number);
	}
	return 0;
}
