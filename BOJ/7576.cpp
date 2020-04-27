#include <stdio.h>
#include <iostream>
#include <queue>

using namespace std;
int tomato[8][8]={0,};
int visited[8][8] = {0,};
queue<pair<int, int> > que;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

void BFS(int m, int n)
{
    int day = 0;
    pair<int,int> v;
    while(!que.empty()){
        v = que.front();
        que.pop();

        for(int idx=0; idx<4; idx++){
            int ix = v.first + dx[idx];
            int iy = v.second + dy[idx];

            if(ix<0 || ix>m || iy<0 || iy>n)
                continue;
            else if(tomato[iy][ix]!=0)
                continue;

            visited[iy][ix] = visited[v.second][v.first]+1;
            que.push(make_pair(ix,iy));
        }
        day++;
        if(day>24){
            break;
        }
    }

    
    
    printf("%d %d\n",visited[v.second][v.first],day);
    printf("%d %d",v.second, v.first);
}

int main()
{
	int M,N;
    scanf("%d%d",&M,&N);

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++){
            scanf("%d",&tomato[i][j]); //j: X , i: Y
            if(tomato[i][j]==1)
                que.push(make_pair(j,i));
                visited[i][j]=1;
        }
    
    BFS(M-1,N-1);

    /*for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            printf("%d ",tomato[i][j]);
        }
        cout<<endl;
    }*/
	
	return 0;
}
