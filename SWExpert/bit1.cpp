#include <stdio.h>
//char형변수의 비트값 출력
void BitPrint(char i)
{
	for(int j=7; j>=0; j--)
		printf("%d",(i>>j)&1);
}

int main()
{	

	char i;

	for(i=-5; i<6; i++){
		printf("%3d = ",i);
		BitPrint(i);
		putchar('\n');
	}
	
	return 0;
}
