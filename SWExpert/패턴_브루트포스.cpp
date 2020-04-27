#include <stdio.h>
#include <string.h>
int main()
{	
	char t[11];	//t:whole string, p:patern string,  
	char p[5];

	scanf("%s",t);
	scanf("%s",p);

	int m = strlen(p);
	int n = strlen(t);
	int i=0,j=0;
	while(i<n && j<m){
		if(p[j]!=t[i]){
			i=i-j; j=-1;
		}
		j++;
		i++;
	}

	if(j==m) printf("success idx : %d ~ %d \n",i-j,i-1);
	else
		printf("fail\n");
	return 0;
}
