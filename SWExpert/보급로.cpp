#include <iostream>
#include <stdio.h>
#include <queue>
using namespace std;

int visited[100][100] = {0,};
int map[100][100]={0,};

int x[4] = {1,0,-1,0};
int y[4] = {0,1,0,-1};

void BFS(int n)
{
    queue< pair<int, int> > que;
    que.push(make_pair(0,0));
    visited[0][0]=1;
    while(!que.empty()){
        
        pair<int,int> v = que.front();
        que.pop();
        int vx = v.first; //현재좌표
        int vy = v.second;
        
        for(int idx=0; idx<4; idx++)
        {
            int ix = vx + x[idx]; //시뮬좌표
            int iy = vy + y[idx];

            if(ix<0 || ix>n || iy<0 || iy>n)
                continue;
            if(visited[ix][iy]>0 && visited[ix][iy]<=visited[vx][vy]+map[ix][iy])
                continue;
            

            visited[ix][iy] = visited[vx][vy]+map[ix][iy];
            que.push(make_pair(ix,iy));
        }
        
    }

}

int main()
{
    int T,N, min;
    cin>>T;
    for(int C=1; C<=T; C++){
        cin>>N;
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++)
                scanf("%1d",&map[i][j]);
        }
        
        BFS(N-1);

        min= visited[N-1][N-1];

        cout<<'#'<<C<<' '<<min-1<<endl;

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++)
                visited[i][j]=0;
    }
    return 0;
}