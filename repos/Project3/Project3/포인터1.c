# include <stdio.h>

int main()
{
	int *ptr = NULL;
	int num = 1;
	ptr = &num;
	printf("[>] *ptr value : %d\n", *ptr);
	printf("[>] ptr value : 0x%08x\n", ptr);
	printf("[>] ptr address : 0x%08x\n", &ptr);
	printf("[>] num address : 0x%08x\n", &num);

	return 0;
}