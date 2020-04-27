#include <stdio.h>
int dp[46];
void fibo(int n)
{
    for(int i=2; i<=n; i++)
        dp[i] = dp[i-1]+dp[i-2];
}
int main()
{
	int n;
    dp[0]=0,dp[1]=1;
    scanf("%d",&n);
    fibo(n);
	printf("%d",dp[n]);
	return 0;
}
