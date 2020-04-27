//300 kb, 5 ms
#include <stdio.h>
#include <string.h>

char dx[4]={1,0,-1,0};
char dy[4]={0,1,0,-1};
int main()
{
    int t,n;
    scanf("%d",&t);
    for(int tc=1; tc<=t; tc++)
    {
        int x=0,y=0, gx,gy;
        int num=2;
        scanf("%d",&n);

        char arr[n][n], visit[n][n];
        memset(visit, 0, sizeof(visit));
        
        arr[0][0]=1; visit[0][0]=1;
        while(num<=n*n)
        {
            for(int j=0; j<4; j++)
            {
                while(1)
                {
                    gx=x+dx[j];
                    gy=y+dy[j];

                    if(gx<0 || gx>n-1 || gy<0 || gy>n-1 || visit[gy][gx]==1) break;
                    
                    x=gx; y=gy;

                    arr[y][x]=num++;
                    visit[y][x]=1;
                }
            }

        }

        printf("#%d\n",tc);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++)
                printf("%d ",arr[i][j]);
            puts("");
        }
    }
    return 0;
}