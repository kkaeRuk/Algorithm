#include <stdio.h>
#include <string.h>
//유기농 배추
int m,n;//가로세로
int bea[51][51]={0,};

void bulre(int x, int y)
{
    if(x<0 || y<0 || x>m-1 || y>n-1 || bea[y][x]==0) return;

    bea[y][x]=0;

    //상하좌우 확인
    bulre(x,y+1);
    bulre(x,y-1);
    bulre(x-1,y);
    bulre(x+1,y);
}

int main()
{
	int T;
    scanf("%d",&T);
    int k,x,y;
    while(T--)
    {
        scanf("%d%d%d",&m,&n,&k);
        for(int i=0; i<k; i++)
        {
            scanf("%d%d",&x,&y);
            bea[y][x]=1;
        }
        int cnt=0;
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
            {
                if(bea[i][j]==1)
                {
                    bulre(j,i);
                    cnt++; //이어져있는배추들 보호
                }
            }

        printf("%d\n",cnt);

        memset(bea,0,sizeof(bea));
    }
	
	return 0;
}
