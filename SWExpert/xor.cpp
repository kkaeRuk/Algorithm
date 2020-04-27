#include <stdio.h>
//xor두번하면 자기자신
void BitPrint(int i)
{
	for(int j=7; j>=0; j--)
		printf("%d",(i>>j)&1);
}

int main()
{	
	char a= 0x86;	
	char key = 0xAA;

	printf("a			==> ");
	BitPrint(a);
	putchar('\n');

	printf("key 		==> ");
	BitPrint(key);
	putchar('\n');

	printf("a^key 		==> ");
	a^=key;
	BitPrint(a);
	putchar('\n');

	printf("a^key^key 	==> ");
	a^=key;
	BitPrint(a);
	putchar('\n');

	return 0;
}
