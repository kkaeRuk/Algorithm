//ZOAC2
#include <iostream>
using namespace std;
int main()
{
	string str;
    int cnt=0, s=26, l,r;

    cin>>str;
    str= 'A'+str;

    for(int i=1; i<str.length(); i++)
    {
        if(str[i-1]<str[i])
        {
            l=(s-str[i])+str[i-1];
            r=str[i]-str[i-1];
        }

        else
        {
            l=str[i-1]-str[i];
            r=(s-str[i-1])+str[i];
        }
        cnt+=l>r?r:l;
    }

    printf("%d",cnt);
	
	return 0;
}
