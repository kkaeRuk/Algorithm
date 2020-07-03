#include <iostream>

using namespace std;

int main()
{
    string s, ns, stand;
    cin>>s;

    int slen=s.length(), len, cnt;
    int answer=slen;
    for(int i=1; i<=slen/2; i++)
    {
        stand=s.substr(0,i);
        cnt=1, ns="";
        for(int j=i; j<slen; j+=i)
        {
            if(stand==s.substr(j,i))
            {
                cnt++;
            }

            else
            {
                if(cnt!=1) ns+=to_string(cnt);
               
                ns+=stand;
                cnt=1;
                
                stand=s.substr(j,i);
            }
        }

        if(cnt!=1) ns+=to_string(cnt);
        ns+=stand;

        if(answer>ns.length())
        {
            answer=ns.length();
        }
    }

    cout<<answer<<endl;
    
    return 0;
}