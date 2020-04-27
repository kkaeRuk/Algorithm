#include <iostream>
using namespace std;

int main()
{
	int m,n=1,x,y;
	scanf("%d",&m);
	while(m--){
		scanf("%d%d",&x,&y);
		x==n?n=y:y==n?n=x:0;
	}
	printf("%d",n);
	return 0;
}
