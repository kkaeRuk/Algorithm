#include <stdio.h>
#include <string.h>
int main()
{	
	char str[5];
	char arr[5];
	memset(arr,'0',sizeof(arr));

	scanf("%s",str);

	for(int i=0; i<5; i++)
		printf("%c",str[i]);
	putchar('\n');	

	for(int i=0; i<5; i++)
		printf("%c",arr[i]);
	putchar('\n');	

	if(strncmp(str,arr,5)==0) printf("ok");
	else printf("no");
	return 0;
}
