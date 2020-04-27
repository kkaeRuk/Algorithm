#include <stdio.h>
//17ms
//ladder1에서 약간의 수정을 거쳐, 각 시작지점마다 이동거리를 leng에 저장
//하지만 일일히 1씩 증가하거나 감소하는게 더 빨리 작동함;;
int main()
{	
	int data[100][100],T,n,start[100];
	int x,idx,min,leng,minIdx;

	for(int tc=1; tc<=10; tc++){
		scanf("%d",&T);
		n=0,min=10000;
		for(int i=0; i<100; i++)
			for(int j=0; j<100; j++){
				scanf("%d",&data[i][j]);
				if(i==0 && data[0][j]==1) start[n++]=j;
			}

		for(idx=0; idx<n; idx++){
			x=idx;
			leng=0;
			for(int i=1; i<99; i++){
				if(start[x]>0 && data[i][start[x]-1]==1){
					leng+=start[x]-start[x-1];
					x--;
				}
				else if(start[x]<99 && data[i][start[x]+1]==1){
					leng+=start[x+1]-start[x];
					x++;
				}
			}
			if(leng<=min){
				min=leng;
				minIdx=idx;
			}
		}

		printf("#%d %d\n",T,start[minIdx]);
	}
	return 0;
}
