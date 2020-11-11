#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(std::vector<int> a) {
    int answer=0, max=0, cnt[500000] = {0,};
    const int size = a.size();

    if (size==1) return 0;

    vector<pair<int,int> > order;
    for(int i=0; i<size; i++)
    {
        if(cnt[a[i]]==0)
        {
            order.push_back(make_pair(i, a[i]));
        }
        cnt[a[i]]++;

        if(max<cnt[a[i]]) max=cnt[a[i]];
    }

    int dx[2]={-1,1};
    for(int j=0; j<order.size(); j++)
    {
        int start = order[j].first, key = order[j].second;
        int visited[500000]= {0,}, su=0;
        for(int i=start; i<size; i++)
        {
            if(a[i]==key)
            {
                for(int x=0; x<2; x++)
                {
                    if(i+dx[x]<0 || i+dx[x]>size-1 || visited[i+dx[x]]==1)
                        continue;
                    else
                    {
                        if(a[i+dx[x]]==a[i]) continue;

                        visited[i+dx[x]]=1;
                        visited[i]=1;
                        su++;
                        break;
                    }
                }

            }
        }
        if(su>answer) answer=su;
        if(answer==max) break;
    }

    answer *=2;
    return answer;
}
/*
스타 부분수열

*/