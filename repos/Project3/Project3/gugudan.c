# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int gugu_front;
	int gugu_back = 9;
	printf("[>] ��ܱ��� ������� �Է����ּ���\n"); //�ȳ��� ���
	printf("[<] "); //�� �Է�
	scanf("%d",&gugu_front);
	for (int i = 1; i <= gugu_back; i++) // ������ �� (���� ���� ���)
	{
		for (int j =1; j <= gugu_front; j++) // ������ �� (��� ����, ��� ���� ���)
		{
			printf("%3d x %d = %2d", j, i, (i * j)); // ������ ���
		}
		printf("\n"); //����
	}
	return 0;
}