#include <iostream>
using namespace std;
int main()
{
	int a,b;
    string op;
    cin>>a>>b;
	if(a==b){
        op="==";
    }
    else if(a<b){
        op='<';
    }
    else{
        op='>';
    }
    cout<<op;
	return 0;
}
