//비밀번호 찾기
#include <iostream>
using namespace std;

int main()
{
	ios_base :: sync_with_stdio(false); 
	cin.tie(NULL); cout.tie(NULL);

    int n,m;
    scanf("%d%d",&n,&m);
    string addr[n+1], pwd[n+1], search;

    for(int i=0; i<n; i++)
    {
        cin>>addr[i];
        cin>>pwd[i];
    }

    for(int i=0; i<m; i++)
    {
        cin>>search;
        for(int j=0; j<n; j++)
        {
            if(addr[j]==search)
            {
                cout<<pwd[j]<<'\n';
                break;
            }
        }
    }
	
	return 0;
}

