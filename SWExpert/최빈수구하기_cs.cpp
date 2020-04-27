#include <stdio.h>
//countingsort이용 최적화완료
//292kb, 4ms, 382byte
int main()
{
	int T,n,a[1000],c[101]={0,},max,idx;
	scanf("%d",&T);
	for(int i=1; i<=T; i++){
		scanf("%d",&n);

		for(int i=0; i<1000; i++){
			scanf("%d",&a[i]);
			c[a[i]]++;
		}
		max=c[0];
		for(int i=1; i<=100; i++){
			if(max<=c[i]){
				max=c[i];
				idx=i;
			}
		}

		printf("#%d %d\n",n,idx);

		for(int i=0; i<=100; i++){
			c[i]=0;
		}
	}
	return 0;
}
