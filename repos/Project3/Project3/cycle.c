# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int cycle_fir;
	printf("[>] 0~99 ������ ������ �Է����ּ���\n"); //�Է� �ȳ��� ���
	printf("[<] "); // ���̵���� ���
	scanf("%d", &cycle_fir); //scanf �۵�!
	int i = 0; // ����Ŭ ���� ���� �� �ʱ�ȭ
	if (cycle_fir < 100 && cycle_fir >= 0) // 0~99���� 
	{
		int cycle_fin = 0; // �� ����Ŭ�� ���� �� ���� ���� ������ �������� �� �ʱ�ȭ
		int cycle_init = cycle_fir; // �ʱⰪ ����� ���� ���� �� ���
		while (1) // ���� �ݺ���
		{
			if ((cycle_fir / 10 + cycle_fir % 10) < 10) // ���� 10�� �Ѿ�� �ʴ� ��� ó���ϴ� ����
			{
				cycle_fin = ((cycle_fir % 10) * 10) + (cycle_fir / 10 + cycle_fir % 10);
				cycle_fir = cycle_fin;
				i++;
			}
			else if ((cycle_fir / 10 + cycle_fir % 10) >= 10) // ���� 10 �̻��� ��� ó���ϴ� ����
			{
				cycle_fin = ((cycle_fir % 10) * 10) + ((cycle_fir / 10 + cycle_fir % 10) % 10); // ó�� ���� ����
				cycle_fir = cycle_fin; // �� ����Ŭ�� ���� �� �� ���� �ٽ� ó�� ���� �־� ���� ������ �����Ѵٸ� �ٽ� ������ �� 
				i++; // ����Ŭ ���� �� ����
			}
			if (cycle_fin == cycle_init) // ����Ŭ�� �׸� �� ����
			{
				break;
			}
		}
		printf("[>] �� ����Ŭ : %d\n", i); // ����Ŭ ���� �� ���
	}
	else
	{
		printf("���ǿ� ���� �ʴ� �� �Դϴ�. Ȯ�� �� �ٽ� �õ����ֽʽÿ�.\n"); //����ó����
	}
	return 0;
}