#include <iostream>
using namespace std;

int main()
{
	int cup[4]={0,1,0,0},m,x,y,tmp;
	
	cin>>m;
	while(m--){
		cin>>x>>y;
		tmp=cup[x];
		cup[x]=cup[y];
		cup[y]=tmp;
	}

	for(int i=1; i<=3; i++)
		if(cup[i]==1){
			cout<<i; break;
		}
	
	return 0;
}
