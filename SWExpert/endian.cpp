#include <stdio.h>
//내컴퓨터의 엔디안 확인하기
int main()
{	
	int n=0x00111111;
	char* c=(char*)&n;
	
	//메모리의 가장큰값인 '00'이 앞에있으면 big, 맨뒤에있으면 small
	if(c[0]) printf("small endian");
	else printf("big endian");
	return 0;
}
