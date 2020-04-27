#include <iostream>
using namespace std;

int main()
{
	long long a,b,rst;
	long long tmp;
	
	scanf("%lld%lld",&a,&b);
	if(a>b){
		tmp=a;a=b;b=tmp;
	}
	
	//맨끝의 두수를 더한값이 각각같다는 성질을 이용 
	rst=(a+b)*(b-a+1)/2; 
	printf("%lld",rst);
	return 0;
}
