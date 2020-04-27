#include <stdio.h>
//4byte크기의 int형변수의 비트값 출력
//16진수형태의 변수의 비트값 출력
void BitPrint(char i)
{
	for(int j=7; j>=0; j--)
		printf("%d",(i>>j)&1);
}

int main()
{	
	char* p;
	char a= 0x10;
	int x= 0x01020304;

	printf("%d = ",a);
	p = &a;
	BitPrint(*p);
	putchar('\n');

	printf("0%X = ", x);
	p = (char *)&x;
	for(int i=0; i<4; i++){	//4->3->2->1순서로 거꾸로출력됌
		BitPrint(*p++);
		putchar(' ');
	}
	putchar('\n');

	return 0;
}
