#include <iostream>
using namespace std;

int main()
{
  int n,m,arr[301][301],k,sum;
  scanf("%d%d",&n,&m);

  for(int i=1; i<=n; i++)
    for(int j=1; j<=m; j++)
      scanf("%d",&arr[i][j]);

  scanf("%d",&k);
  int i,j,x,y;
  while(k--)
  {
    scanf("%d%d%d%d",&i,&j,&x,&y);
    sum=0;
    for(int a=i; a<=x; a++)
      for(int b=j; b<=y; b++)
        sum+=arr[a][b];
    printf("%d\n",sum);
  }

  return 0;
}
