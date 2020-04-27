#include <stdio.h>
#include <stdlib.h>

int main()
{
	int size;
	int i, j;
	
	scanf("%d", &size);
	
	for(i=0; i<size*2-1; i++) {		//천재인듯;;;
		for(j=0; j<size - abs(size-i-1); j++)
			putchar('*');
		for(; j<size + abs(size-i-1); j++)
			putchar(' ');
		for(; j<size*2; j++)
			putchar('*');
		putchar('\n');
	}
	
	return 0;
}