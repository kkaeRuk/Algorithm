#include <stdio.h>
//19ms
//가능한 시작지점 저장해서, 일일히 다 탐색
int main()
{	
	int data[100][100],T,n,start[100];		//start[]:가능한 시작지점의 집합
	int wid,j;								//wid:start배열의 인덱스, j:답을 가리키는 start의 인덱스

	for(int tc=1; tc<=10; tc++){
		scanf("%d",&T);
		n=0;
		for(int i=0; i<100; i++)
			for(int j=0; j<100; j++){
				scanf("%d",&data[i][j]);
				if(i==0 && data[0][j]==1) start[n++]=j;
			}

		for(j=0; j<n; j++){
			wid=j;			//각 시작지점 인덱스 저장
			for(int i=1; i<99; i++){
				if(start[wid]>0 && data[i][start[wid]-1]==1) wid--;		//왼쪽확인
				else if(start[wid]<99 && data[i][start[wid]+1]==1) wid++;	//오른쪽확인 
			}

			if(data[99][start[wid]]==2) break;			//도착지점에 도착시 루프문탈출 
		}

		printf("#%d %d\n",T,start[j]);
	}
	return 0;
}
