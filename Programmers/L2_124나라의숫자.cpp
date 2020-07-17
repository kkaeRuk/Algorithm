#include <iostream>
#include <string>
using namespace std;

string solution(int n) {
    string answer = "";
    
    // x:자릿수, arg:각자릿수별최대숫자, digit:각자릿수
    int x, arg=0, multi=1, digit;
    
    //log(MAX)/log(3) == 18.2322
    for(x=1; x<=19; x++)    //1
    {
        multi*=3;
        arg+=multi;
        if(arg>=n) break;
    }
    
    arg-=multi-1;
    while(x--)              //2
    {
        multi/=3;
        for(digit=-1; arg<=n; digit++)
        {
            arg+=multi;
        }
        
        answer+="124"[digit];
        arg-=multi;
    }
        
    return answer;
}

int main()
{
    int n;
    cin>>n;
    cout<<solution(n)<<endl;
    
    return 0;
}

/*
1. 10진수 n을 124변환할때, 자릿수(x)를 구함.
ex) 4   :1자릿수
    11  :2자릿수
    114 :3자릿수

2. 각자릿수에 대해 *경우의수 를 해가며 실제숫자(digit)를 구함

the noun : "3진법으로 생각해서 풀면 훨씬 쉬움!"
*/