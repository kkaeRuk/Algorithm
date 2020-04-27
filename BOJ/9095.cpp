#include <iostream>
using namespace std;
int dp[12];

 void addOTT()
{
  dp[1]=1,dp[2]=2,dp[3]=4;
  for(int i=4; i<12; i++)
    dp[i]=dp[i-3]+dp[i-2]+dp[i-1];
}

int main()
{
  int T,n;
  scanf("%d",&T);
  addOTT();
  while(T--)
  {
    scanf("%d",&n);
    printf("%d\n",dp[n]);
  }

  return 0;
}
