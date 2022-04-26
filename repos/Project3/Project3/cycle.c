# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int cycle_fir;
	printf("[>] 0~99 사이의 정수를 입력해주세요\n"); //입력 안내문 출력
	printf("[<] "); // 가이드라인 출력
	scanf("%d", &cycle_fir); //scanf 작동!
	int i = 0; // 사이클 변수 선언 및 초기화
	if (cycle_fir < 100 && cycle_fir >= 0) // 0~99까지 
	{
		int cycle_fin = 0; // 한 사이클을 돌고 난 후의 값을 저장할 변수선언 및 초기화
		int cycle_init = cycle_fir; // 초기값 백업용 변수 선언 및 백업
		while (1) // 무한 반복문
		{
			if ((cycle_fir / 10 + cycle_fir % 10) < 10) // 합이 10을 넘어가지 않는 경우 처리하는 문장
			{
				cycle_fin = ((cycle_fir % 10) * 10) + (cycle_fir / 10 + cycle_fir % 10);
				cycle_fir = cycle_fin;
				i++;
			}
			else if ((cycle_fir / 10 + cycle_fir % 10) >= 10) // 합이 10 이상인 경우 처리하는 문장
			{
				cycle_fin = ((cycle_fir % 10) * 10) + ((cycle_fir / 10 + cycle_fir % 10) % 10); // 처리 과정 구문
				cycle_fir = cycle_fin; // 한 사이클을 돌고 난 후 값을 다시 처음 값에 넣어 만일 조건을 만족한다면 다시 돌도록 함 
				i++; // 사이클 바퀴 수 증가
			}
			if (cycle_fin == cycle_init) // 사이클이 그만 돌 조건
			{
				break;
			}
		}
		printf("[>] 총 사이클 : %d\n", i); // 사이클 바퀴 수 출력
	}
	else
	{
		printf("조건에 맞지 않는 수 입니다. 확인 후 다시 시도해주십시요.\n"); //오류처리문
	}
	return 0;
}