#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> progresses, speeds;
    int input,n;
    cin>>n;  
    for(int i=0; i<n; i++)
    {
        cin>>input;
        progresses.push_back(input);
    }
    for(int i=0; i<n; i++)
    {
        cin>>input;
        speeds.push_back(input);
    }

    ////main
    vector<int> answer, ends;
    for(int i=0; i<progresses.size(); i++)
    {
        int remain = (100 - progresses[i]);
        remain = ((remain%speeds[i]==0)?0:1) + remain/speeds[i];
        ends.push_back(remain);
    }

    int task=1, max=ends[0];
    for(int i=1; i<ends.size(); i++)
    {
        if(max>=ends[i])
        {
            task++;
        }
        else
        {
            answer.push_back(task);
            task=1;
            max=ends[i];
        }
    }
    answer.push_back(task);

    for(int i=0; i<answer.size(); i++)
        cout<<answer[i]<<' ';
    return 0;
}