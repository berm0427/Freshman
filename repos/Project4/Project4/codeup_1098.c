#define _CRT_SECURE_NO_WARNINGS // scanf 오류 안나게 하는 구문
#include <stdio.h>

int main()
{
	int h, w, n, l, d, x, y; // 문제를 풀기 위한 변수 선언
	int sugar[100][100] = { 0, }; // 배열 선언
	printf("[>] 세로와 가로의 크기를 입력하시오.\n[<] "); // 입력 가이드라인 출력
	scanf("%d %d", &h, &w); // 입력 받는 함수
	printf("[>] 놓을 수 있는 막대의 개수를 입력하시오.\n[<] "); // 입력 가이드라인 출력
	scanf("%d", &n); // 입력 받는 함수
	printf("[>] 막대의 길이, 방향, 좌표를 입력하시오.\n"); // 입력 가이드라인 출력
	for (int i = 1; i <= n; i++)  // 입력을 받기 위한 for문
	{
		printf("[<] "); // 입력 가이드라인 출력
		scanf("%d %d %d %d", &l, &d, &x, &y); //길이 방향 좌표를 입력하는 함수 (d:가로는 0, 세로는 1)
		if (d == 0) // 가로일 경우
		{
			for (int j = 0; j < l; j++) // y좌표를 돌리는 for문
			{
				sugar[x][y + j] = 1; // 입력받은 시작값을 기준으로 막대의 길이를 표현하는 함수  
			}
		}
		else if (d == 1) // 세로일 경우
		{
			for (int j = 0; j < l; j++) // x좌표를 돌리는 함수
			{
				sugar[x + j][y] = 1; // 입력받은 시작값을 기준으로 막대의 길이를 표현하는 함수

			}
		}
	}
	printf("\n"); // 개행하는 함수
	for (int i = 1; i <= h; i++) //한 줄(위에서 아래로) 씩 출력하는 걸 도와주는 for문
	{
		for (int j = 1; j <= w; j++) //한 열(왼쪽에서 오른쪽으로) 씩 출력하는 걸 도와주는 for문
		{
			printf("%d ", sugar[i][j]); //값을 출력하는 함수
		}
		printf("\n"); //줄 바꾸는 함수
	}

	return 0;
}
