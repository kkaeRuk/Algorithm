#include <stdio.h>
#include <string.h>
int main()
{	
	char str[11],tmp;
	
	scanf("%s",str);
	
	int len=strlen(str);
	printf("len : %d\n",len);

	for(int i=0; i<len/2; i++){
		tmp=str[i];
		str[i]=str[len-i-1];
		str[len-i-1]=tmp;
	}

	for(int i=0; i<len; i++)
		printf("%c",str[i]);
	return 0;
}
