#include <iostream>
#include <string>
using namespace std;

int dgr(int n)
{
	int num=1;
	for(int i=0; i<n; i++)
		num*=16;
	return num;
}

int main()
{
	string str;
	int n,rst=0;

	cin>>str;
	int len=str.length();
	for(int i=0; i<len; i++){
		n=str.at(i);
		if(n>=65) n=n-'A'+10;
		else n-=48;
		rst+=dgr(len-i-1)*n;
	}

	cout<<rst;
	
	return 0;
}
