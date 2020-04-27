#include <stdio.h>

int main()
{
	int T,n,odd;
	scanf("%d",&T);
	for(int i=1; i<=T; i++){
		odd=0;
		for(int j=1; j<=10; j++){
			scanf("%d",&n);
			if(n%2!=0) odd+=n;
		}

		printf("#%d %d\n",i,odd);
	}	
	return 0;
}
