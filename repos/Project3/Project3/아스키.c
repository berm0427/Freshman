#include <stdio.h>

int main()
{
	float dollar, rate;
	int won = 100000;


	rate = 1069.50;
	dollar = won / rate;
	printf("������ ȯ��: %6.2f, 10������ %6.2f �޷��Դϴ�. \n", rate, dollar);


	rate = 1071.40;
	dollar = won / rate;
	printf("ȭ���� ȯ��: %6.2f, 10������ %6.2f �޷��Դϴ�. \n", rate, dollar);


	rate = 1072.65;
	dollar = won / rate;
	printf("������ ȯ��: %6.2f, 10������ %6.2f �޷��Դϴ�. \n", rate, dollar);


	rate = 1073.00;
	dollar = won / rate;
	printf("����� ȯ��: %6.2f, 10������ %6.2f �޷��Դϴ�. \n", rate, dollar);


	rate = 1071.50;
	dollar = won / rate;
	printf("�ݿ��� ȯ��: %6.2f, 10������ %6.2f �޷��Դϴ�. \n", rate, dollar);
}