#include <iostream>
using namespace std;

int main()
{
	int n,cnt=0;
	cin>>n;

	int a,b,rlt=n; //a:주어진수오른쪽수, b:합의 오른쪽수
	while(++cnt)
	{
		a= rlt%10;
		b= (a + rlt/10)%10;
		rlt=a*10+b;
		if(rlt==n) break;
	}

	cout<<cnt;
	return 0;
}
