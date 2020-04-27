#include <stdio.h>
//메모리에서 구조체변수들이 저장되는 규칙을 알아보자!

struct test1{
	char d1;	//1byte
	short d2;	//2byte
	int d3;		//4byte
	char d4;	//1byte
}t1;			// + padding byte(4byte)

struct test2{
	char d1;	//1byte
	char d4;	//1byte	
	short d2;	//2byte
	int d3; 	//4byte
}t2;			//+padding byte(0byte)

int main()
{	
	printf("test1 size : %ldbyte\n",sizeof(t1));
	printf("test2 size : %ldbyte\n",sizeof(t2));

	return 0;
}
