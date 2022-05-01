#include <stdio.h>

int main()
{
	int arr[2][4] = { {10,20,30,40} , {50,60,70,80} };
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			printf("[>] arr[%d][%d] : %d\t", y, x, arr[y][x]);
		}
		printf("\n");
	}
	return 0;
}
