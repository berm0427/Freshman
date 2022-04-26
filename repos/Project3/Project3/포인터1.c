# include <stdio.h>

int main()
{
	int* ptr = NULL; // 포인터 선언하는 문장
	int num = 1; // 정수형 변수 선언하는 문장
	ptr = &num; // 포인터에 변수의 주소값 저장
	printf("[>] *ptr value : %d\n", *ptr); // 포인터가 가리키는 주소의 저장된 값을 출력
	printf("[>] ptr value : 0x%08x\n", ptr); // 포인터가 가리키는 주소 값을 출력
	printf("[>] ptr address : 0x%08x\n", &ptr); // 포인터 주소를 출력
	printf("[>] num address : 0x%08x\n", &num); // num변수의 주소를 출력

	return 0;
}
