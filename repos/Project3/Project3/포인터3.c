# include <stdio.h>

int main()
{
	int num[4] = {1,2,3,4};
	char ch[5] = { 's', 'e', 'c', 'u', '\0' };

	printf("[>] num size : %d\n", sizeof(num));
	printf("[>] ch size : %d\n", sizeof(ch));
	printf("[>] *num size : %d\n", sizeof(*num));
	printf("[>] *ch size : %d\n\n", sizeof(*ch));

	printf("[>] num address : %08x\n", &num);
	printf("[>] (num + 1) address : %08x\n", &num[1]);
	printf("[>] ch size : %08x\n", &ch);
	printf("[>] (ch + 1) address : %08x\n", &ch[1]);

	printf("[>] *(num) value : %d\n", *(num));
	printf("[>] *(num + 1) address : %d\n\n", *(num + 1));

	printf("[>] *(ch) value : %d\n", *(ch));
	printf("[>] *(ch + 1) address : %d\n\n", *(ch + 1));

	return 0;
}