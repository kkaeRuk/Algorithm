#include <string.h>
#include <vector>
#include <iostream>
using namespace std;
int dx[3] = {0,1,-1};
int dy[3] = {1,0,-1};

vector<int> solution(int n) {
    vector<int> answer;
    int pyramid[n][n];
    char visited[n][n];
    memset(visited,0,sizeof(visited));
    
    pyramid[0][0]=1;
    visited[0][0]=1;
    int x=0,y=0,gx,gy,num=2;
    int max = n*(n+1)/2;
    while(num<=max)
    {
        for(int j=0; j<3; j++)
        {
            while(1)
            {
                gx=x+dx[j];
                gy=y+dy[j];
                
                if( gx<0 || gy<0 || gx>gy || gy>n-1 || visited[gy][gx]==1) break;
                x=gx; y=gy;
                pyramid[y][x] = num++;
                visited[y][x] = 1;
            }
        }
    }
    
    for(int i=0; i<n; i++)
        for(int j=0; j<=i; j++)
        {
            answer.push_back(pyramid[i][j]);
        }
    
    return answer;
}

/*
int main()
{
    int n;
    cin>>n;
    vector<int> ans = solution(n);

    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<' ';
    }
 
    return 0;
}
*/