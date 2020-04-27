#include <stdio.h>

int main()
{
	int a[9],n,end=0,run,triple;

	while(1){
		scanf("%d",&end);
		if(end==0) return 0;

		for(int i=0; i<9; i++){
			a[i]=0;
		}

		for(int i=0; i<6; i++){
			scanf("%d",&n);
			a[n]++;
		}
		
		run=0; triple=0;
		for(int i=1; i<=6; i++){
			if(a[i]>=3){
				if(a[i]%3==0) triple+=a[i]/3;
				else{
					a[i]-=3; triple++; continue;
				}
			}

			else if(a[i] && a[i]==a[i+1] && a[i+2]==a[i]){
				run+=a[i]; a[i]=0; a[i+1]=0; a[i+2]=0; continue;
			}

			if(run+triple>=2) break;
		}
//		printf("%d %d\n",run,triple);
		printf("#%d ",end);
		if(run+triple==2) printf("Baby gin!\n");
		else printf("Nope\n");

	}

	return 0;
}
