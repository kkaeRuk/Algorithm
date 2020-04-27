#include <stdio.h>
#include <queue>
using namespace std;
int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0};
int went[8][8];

int main()
{
    int m,n;
    queue<int, int> que;
    scanf("%d%d",&m,&n);
    int arr[n][m];
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            scanf("%d",&arr[i][j]);

    while(!que.empty())
    {
        for(int d=0; d<4; d++)
        {
            int nx = que.front().first + dx[d];
            int ny = que.front().second + dy[d];

            if(nx<0 || ny<0 || nx>m-1 || ny>n-1) continue;

            if(went[ny][nx]) continue;

            arr[ny][nx]=1;
            went[ny][nx]=1;
            que.push(make_pair(nx,ny));
            que.pop();
        }

    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}