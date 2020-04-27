//Small World Network
#include <stdio.h>

int arr[101][101];

int friends(int n, int x, int y)
{
    int min=1000,rout;
    for(int i=1; i<=n; i++)
    {
        if(x==i || y==i) continue;
        if(arr[x][i]!=0 && arr[y][i]!=0)
        {
            rout=arr[x][i]+arr[y][i];
            if(min>rout) min=rout;
        }
    }
    if(min==1000) return 0;
    return min;
}

int main()
{
	int n,k,x,y,max=0;
    scanf("%d%d",&n,&k);

    for(int i=0; i<k; i++)
    {
        scanf("%d%d",&x,&y);

        arr[x][y]=1;
        arr[y][x]=1;
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==j) continue;
            else if(arr[i][j]==0)
            {
                arr[i][j]=friends(n,i,j);
                arr[j][i]=arr[i][j];
            }
            if(max<arr[i][j]) max=arr[i][j];
        }
    }

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            printf("%d %d %d\n",i,j,arr[i][j]);

	if(max>6) printf("Big World!");
    else printf("Small World!");

	return 0;
}
