//************************************************************************************************

//  수식과 대입문 사용을 보여준다.

//************************************************************************************************

#include <stdio.h>

int main()
{
	int mid, final, total;

	mid = 70;
	printf("중간 점수는 %d입니다.\n", mid);
	final = 90;
	printf("기말 점수는 %d입니다.\n", final);
	total = mid + final;
	printf("총점는 %d입니다.\n", total);
}