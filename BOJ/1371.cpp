#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
	int A[123]={0,},max=0; //max:자주등장한문자등장수
	char c;
	string maxL;	//maxL:자주등장한문자

	while(~scanf("%c",&c)){
		if(c<'a' || c>'z') continue;
		A[c]++;
		if(A[c]>max) max=A[c];
	}
	
	for(int i=97; i<123; i++)
		if(A[i]==max) maxL+=(char)i;
	
	cout<<maxL;
	return 0;
}
 