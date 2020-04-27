#include <stdio.h>

void BitPrint(char i)
{
	for(int j=7; j>=0; j--)
		printf("%d",(i>>j)&1);
}

int main()
{	
	int digit;
	char a;

	scanf("%c %d",&a,&digit);

	

	switch(digit){
		
		case 2:

	}


	return 0;
}
