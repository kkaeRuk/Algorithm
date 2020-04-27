#include <stdio.h>
//18ms
//도착지점부터 위쪽으로 탐색
struct point{
	int x,y;
}start;		//도착지점 저장할 구조체 

int main()
{	
	int data[100][100],T,n,s[100],idx;
	int wid;

	for(int tc=1; tc<=10; tc++){
		scanf("%d",&T);
		n=0;
		for(int i=0; i<100; i++)
			for(int j=0; j<100; j++){
				scanf("%d",&data[i][j]);
				if(i==0 && data[0][j]==1) s[n++]=j;		//가능한 시작지점 start[]에 저장
				if(i==99 && data[99][j]==2){	//도착지점찾으면, 구조체에 저장 
					start.x=j;
					start.y=i;
				}
			}

		for(int i=0; i<n; i++){
			if(s[i]==start.x){
				idx=i; break;	//도착지점에 해당하는 'start[인덱스] = 도착지점'
			}					//여기서 '인덱스' 찾는 루프문, idx='인덱스' 
		}

		for(int i=start.y; i>=0; i--){
			if(start.x<99 && data[i][start.x+1]==1)	//오른쪽확인
				start.x=s[++idx];
			else if(start.x>0 && data[i][start.x-1]==1) //왼쪽확인
				start.x=s[--idx];
		}

		printf("#%d %d\n",T,start.x);
	}
	return 0;
}
