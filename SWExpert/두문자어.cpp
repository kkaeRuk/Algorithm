#include <iostream>
#include <string>
//12,628kb, 23ms, 344B
using namespace std;
int main()
{	
	int T,leng=3;
    string word,elp ="";
    cin>>T;
    for(int x=1; x<=T; x++){
        leng=3;
        elp="";
        while(leng--){
            cin>>word;
            elp+= word[0] -'a' + 'A';
        }
        
        cout<<'#'<<x<<' '<< elp <<endl;
    }
	return 0;
}