#include <stdio.h>
void main()
{
	int calc_in_num_1 = 0;
	int calc_in_num_2 = 0;
	int calc_in_buho = 0;
	printf("���� ������ ù ���� ���� �Է��� �ּ���: ");
	scanf_s("%d", &calc_in_num_1);
	printf("������ ������ �Է��� �ּ��� 1. ���ϱ� 2.���� 3.���� 4. ������: ");
	scanf_s("%d", &calc_in_buho);
	printf("���� ������ �� ���� ���� �Է��� �ּ���: ");
	scanf_s("%d", &calc_in_num_2);
	if (calc_in_buho == 1)
	{
		printf("���� ����� %d �Դϴ�", calc_in_num_1 + calc_in_num_2);
	}
	else if (calc_in_buho == 2)
	{
		printf("�� ����� %d �Դϴ�", calc_in_num_1 - calc_in_num_2);
	}
	else if (calc_in_buho == 3)
	{
		printf("���� ����� %d �Դϴ�", calc_in_num_1 * calc_in_num_2);
	}
	else if (calc_in_buho == 4)
	{
		printf("�������� ����� %d �Դϴ�", calc_in_num_1 / calc_in_num_2);
	}
}