# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int gugu_front;
	int gugu_back = 9;
	printf("[>] 몇단까지 출력할지 입력해주세요\n"); //안내문 출력
	printf("[<] "); //수 입력
	scanf("%d",&gugu_front);
	for (int i = 1; i <= gugu_back; i++) // 구구단 뒤 (뒤의 숫자 담당)
	{
		for (int j =1; j <= gugu_front; j++) // 구구단 앞 (몇단 제외, 몇단 까지 담당)
		{
			printf("%3d x %d = %2d", j, i, (i * j)); // 구구단 출력
		}
		printf("\n"); //개행
	}
	return 0;
}