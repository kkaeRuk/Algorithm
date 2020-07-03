#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    int answer=1;
    
    while(1)
    {   
        if(abs(b-a)==1)
        {
            if(a>b)
            {
                if(b%2==1) break;
            }
            
            else
            {
                if(a%2==1) break;
            }
        }
        
        if(a%2==0) a/=2;
        else a=(a+1)/2;

        if(b%2==0) b/=2;
        else b=(b+1)/2;

        answer++;
    }

    return answer;
}