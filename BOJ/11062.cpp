#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;  //minimax_algorithm
int dp[1001][1001]; //전역변수는 알아서 초기화

int BC(int *arr, int l, int r)
{
  if(dp[l][r]!=0) return dp[l][r];

  int score=0;
  if(l==r) return arr[l];
  else {
    for(int i=l; i<=r; i++) score+=arr[i];
    dp[l][r]=max(score-BC(arr,l+1,r),score-BC(arr,l,r-1));
    return dp[l][r];
  }
}

int main()
{
    int T,n,arr[1000];
    scanf("%d", &T);

    while(T--){
      memset(dp,0,sizeof(dp));
      scanf("%d",&n);
      for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
      printf("%d\n",BC(arr,0,n-1));
    }

    return 0;
}
