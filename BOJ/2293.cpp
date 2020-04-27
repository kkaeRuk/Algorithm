#include <stdio.h>

int main()
{
  int n,k,table[10001]={0,};
  scanf("%d%d",&n,&k);
  table[0]=1;
  for(int p=0; p<n; p++)
  {
    int coin;
    scanf("%d",&coin);
    for(int i=coin; i<=k; i++)
      table[i] = table[i] + table[i-coin]; //i원으로 만들 수 있는 경우의 수
  }

  printf("%d",table[k]);

  return 0;
}
/*
{2,3,5}
table[0] = 1    {} //공집합이기 때문에
table[1] = 0    {}
table[2] = 1    {2}
table[3] = 1    {3}
table[4] = 1    {2,2}
table[5] = 2    {2,3} {5}
table[6] = 2    {2,2,2} {3,3}
table[7] = 2    {2,2,3} {2,5}
table[8] = 3    {2,2,2,2} {2,3,3} {3,5}

*/
