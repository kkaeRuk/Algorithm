#include <stdio.h>
#include <string.h>
int main()
{	
	char t[11];	//t:whole string, p:patern string,  
	char p[6];

	scanf("%s",t);
	scanf("%s",p);

	int m = strlen(p);
	int n = strlen(t);
	
	int skip[129];	//확장아스키사용시 129->257로 변

	for(int idx=0; idx<=128; idx++)
		skip[idx]=m;

	for(int idx=m-1; idx>=0; idx--){
		if(skip[p[idx]]==m)
			skip[p[idx]]=m-idx-1;
	}

	for(int i=0; i<m; i++){
		printf("%c %d\n",p[i],skip[p[i]]);
	}																			

	int i=m-1,j=m-1;
	while(i<n && j>0){
		if(t[i]!=p[j]){
			i+=skip[t[i]];
			j=m-1;
		}
		else{
			j--;
			i--;
		}
	}


	if(j==0) printf("success idx : %d ~ %d \n",i,i+m-1);
	else
		printf("fail\n");


	return 0;
}
