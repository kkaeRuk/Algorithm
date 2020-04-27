#include <iostream>
using namespace std;

int main()
{
	int A[256]= {0,},cnt=0;
	char c, C[5]={'a','e','i','o','u'};

	for(int i=0; i<5; i++)
		A[C[i]]= A[C[i]-'a'+'A'] =1;

	while(1){
		scanf("%c", &c);
		if(A[c]==1) cnt++;

		else if(c=='\n') {cout<<cnt<<endl; cnt=0;}

		else if(c=='#') break;

		//cout<<c<<endl;
	}

	return 0;
}
