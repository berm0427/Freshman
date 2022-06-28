#pragma warning(disable:4996)
#include <stdio.h>
#include <conio.h>
#include <Windows.h>

int main(void)
{
	int num;
	char buf[100] = "";
	char cmd_bf[100] = "";
	printf("[>] 원하는 옵션을 선택해주세여\n\n    1. 시스템 종료\n\n    2. 다시 시작\n\n    3. 예약 종료\n\n    4. 예약 종료 취소\n\n    5. 커스터마이징\n\n[<] ");
	scanf("%d", &num);
	if (num == 1)
	{
		system("shutdown /s /f /t 0");
		getch();
	}
	else if (num == 2)
	{
        system("shutdown /r /f /t 0");
		getch();
	}
	else if (num == 3)
	{
		printf("원하는 시간을 입력하세요(단위 초): ");
		scanf("%s", buf);
		sprintf(cmd_bf, "shutdown /s /f /t %s", buf);
		system(cmd_bf);

		num = 0;
		printf("\n\n예약을 취소하고 싶으신 경우 1을 입력.\n");
		scanf("%d", &num);
		if (num == 1) system("shutdown /a");
	}
	else if (num == 4)
	{
		system("shutdown /a");
		getch();
	}
	else if (num == 5)
	{
		num = 0;
		int num_1 = 0;
		printf("\n\n[>] 원하는 옵션을 입력하세요\n\n    1. 시스템 종료\n\n    2. 다시 시작\n\n[>] ");
		scanf("%d", &num);
		printf("\n\n[>] 원하는 옵션을 입력하세요\n\n    1. 예약\n\n    2. 즉시\n\n[>] ");
		scanf("%d", &num_1);
		if (num == 1 && num_1 == 1)
		{
			printf("\n\n[>] 원하는 시간을 입력하세요(단위 초): ");
			scanf("%s", buf);
			sprintf(cmd_bf, "shutdown /s /f /t %s", buf);
			system(cmd_bf);
			
			num = 0;
			printf("\n\n[>] 예약을 취소하고 싶으신 경우 1을 입력.\n");
			scanf("%d", &num);
			if (num == 1) system("shutdown /a");

		}
		else if (num == 2 && num_1 == 1)
		{
			printf("\n\n[>] 원하는 시간을 입력하세요(단위 초): ");
			scanf("%s", buf);
			sprintf(cmd_bf, "shutdown /r /f /t %s", buf);
			system(cmd_bf);
			
			num = 0;
			printf("\n\n예약을 취소하고 싶으신 경우 1을 입력.\n");
			scanf("%d", &num);
			if (num == 1) system("shutdown /a");

		}
		else if (num == 1 && num_1 == 2)
		{
			system("shutdown /s /f /t 0");
			getch();
		}

		else if (num == 2 && num_1 == 2)
		{
			system("shutdown /r /f /t 0");
			getch();
		}
	}
	else
	{
		printf("Error");
	}
	return 0;
}
