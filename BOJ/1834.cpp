#include <iostream>
using namespace std;

int main()
{
	int n;
	long rst=0;
	cin>>n;

	for(long i=1; i<n; i++)
		rst+=i*n+i;

	cout<<rst;
	
	return 0;
}
