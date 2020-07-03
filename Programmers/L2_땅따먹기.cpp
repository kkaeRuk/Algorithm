#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int> > land;
    vector<int> v;

    int arr[4];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
            cin>>arr[j];
        
        v.assign(arr,arr+4);
        land.push_back(v);
    }
    
    int answer = 0;
    vector<int>::iterator maxIt;
    vector<int> ans;


    for(int j=0; j<4; j++)
    {
        vector<int> line = land[0];
        int add=line[j], pred=j;
        for(int i=1; i<land.size(); i++)
        {
            vector<int> line = land[i];
            maxIt = max_element(line.begin(), line.end());

            if(pred==maxIt-line.begin())
            {
                line.erase(line.begin()+pred);
                maxIt = max_element(line.begin(),line.end());
            }

            add+=*maxIt;
            pred= maxIt-line.begin();

        }
        ans.push_back(add);
    }

    answer= *max_element(ans.begin(), ans.end());

    cout<<answer;

    return 0;
}