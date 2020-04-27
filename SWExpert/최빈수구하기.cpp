#include <stdio.h>
#include <string.h>

int main()
{
	int score[101]={0,},n,T,tc;
	int max,max_idx;
	scanf("%d",&T);
	for(int i=1; i<=T; i++){
		scanf("%d",&tc);
		max=0; max_idx=0;
		for(int j=0; j<1000; j++){
			scanf("%d",&n);
			score[n]++;
			if(max<score[n]) {
				max=score[n];
				max_idx=n;
			}
			else if(max==score[n] && max_idx<n){
				max_idx=n;
			}
		}
		memset(score,0,sizeof(int)*101);
		printf("#%d %d\n",tc,max_idx);
	}
	return 0;
}
