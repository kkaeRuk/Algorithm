#include <stdio.h>
#include <vector>
using namespace std;
int box[1000][1000];
int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0};
int day, anto;
void tomato(int m, int n, vector<pair<int, int> >& ik)
{
    if(ik.empty() || !anto) return;
    vector<pair<int, int> > newik;
    while(!ik.empty())
    {
        for(int i=0; i<4; i++)
        {
            int xi = ik.back().first + dx[i];
            int yi = ik.back().second + dy[i];

            if(xi<0 || yi<0 || xi>m-1 || yi>n-1 || box[yi][xi]!=0) continue;

            else if(!box[yi][xi]) //안익었으면
            {
                box[yi][xi]=1; anto--;
                newik.push_back(make_pair(xi,yi));
            }
        }
        ik.pop_back();
    }
    tomato(m,n,newik);

    day++;
}

int main()
{
    int m,n;
    vector<pair<int,int> > ikto; //익은토마토

    scanf("%d%d",&m,&n);

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++){
            scanf("%d",&box[i][j]);
            if(box[i][j]==1)
                ikto.push_back(make_pair(j,i));
            else if(box[i][j]==0)
                anto++;
        }
    
    tomato(m,n,ikto);

    printf("%d",anto?-1:day);
    
	return 0;
}
