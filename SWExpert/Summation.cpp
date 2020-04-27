#include <iostream>
#include <string.h>
#define MAX 1000000
//12,488kb, 13ms, 528B
using namespace std;
int main()
{	
	int T, sum=0, min=MAX, max=0, i;
    string num;
    
    cin>>T;
    for(int x=1; x<=T; x++){
        min=MAX, max=0;
        for(int i=0; i<10; i++){
            cin>>num;
            for(int n=0; n<num.size(); n++){
                sum+=num[n] - '0';
            }
            if(sum>max) max=sum;
            if(sum<min) min=sum;
            sum=0;
        }

        cout<<'#'<<x<<' '<<max<<' '<<min<<endl;
    }
	return 0;
}
