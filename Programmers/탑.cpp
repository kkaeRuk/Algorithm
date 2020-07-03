#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    vector<int> heights = {3,9,9,3,5,7,2};
    
    //
    vector<int> answer, get;

    for(int i=heights.size()-1; i>=0; i--)
    {
        int s = heights[i], j;
        for(j=i-1; j>=0; j--)
        {
            if(s<heights[j])
            {
                break;
            }
        }
        
        answer.push_back(j+1);
    }
    answer.assign(get.rbegin(), get.rend());

    for(int i=0; i<answer.size(); i++)
        cout<<answer[i]<<' ';
    return 0;
}