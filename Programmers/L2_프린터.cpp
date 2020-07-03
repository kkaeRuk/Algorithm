#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> priorities = {1, 1, 9, 1, 1, 1};
    int location;

    cin>>location;

///
    int answer = 0;
    
    priorities.insert(priorities.begin()+location+1,-1);
    
    while(*priorities.begin()!=-1)
    {
        vector<int>::iterator max = max_element(priorities.begin(),priorities.end());
        if(priorities.begin()!=max)
        {
            priorities.insert(priorities.end(),priorities.begin(),max);
            priorities.erase(priorities.begin(),max);
        }
        
        answer++;
        priorities.erase(priorities.begin());
        
    }
    
    cout<<answer;
    return 0;
}