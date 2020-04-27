#include <iostream>
using namespace std;
int dp0[1001];
int cnt0=0, cnt1=0;

void fibonacci(int n){
    if(n==0) {
        cnt0++;
    } else if(n==1){
        cnt1++;
    } else {
        dp[n] = dp[n-1]+dp[n-2];
    }
}

int main()
{
  int T,n,k;
  scanf("%d",&T);
  dp[0]=0, dp[1]=1;
  while(T--){
    cnt0=0,cnt1=0;  //0이 출력되는 횟수, 1이 출력되는 횟수
    scanf("%d",&n);
    fibonacci(n);
    printf("%d %d\n",cnt0,cnt1);
  }
  return 0;
}
