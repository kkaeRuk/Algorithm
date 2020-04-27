#include <bits/stdc++.h>

using namespace std;

int n;
long long dp[101][10];
long long func(int pos, int before)
{
	if(before<0 || before>9) return 0;

	if(pos==n) return 1;

	if(dp[pos][before]!=-1) return dp[pos][before];

	return dp[pos][before]=(func(pos+1, before)+ func(pos+1, before+1)+func(pos+1, before+2)+func(pos+1, before+3)+func(pos+1, before+4)+func(pos+1, before+5)+func(pos+1, before+6)+func(pos+1, before+7)+func(pos+1, before+8)+func(pos+1, before+9));
}

int main()
{
	int T;
	cin >> T;

	while(T--){
	memset(dp, -1, sizeof(dp));
	cin >> n;
	long long res =0;

	for(int i=0; i<=9; i++)
	{
		res = (res + func(1,i));
	}

	cout<< res<<endl;
	}

	return 0;
}
