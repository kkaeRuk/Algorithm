#include <iostream>
#include <math.h>
using namespace std;

int gcdu(int a, int b)
{
    int t;
    while(b)
    {
        t = b;
        b = a%b;
        a = t;
    }
    return a;
}

long long solution(int w,int h) {
    long long answer=(long long)w*h;
    answer -= w+h - gcdu(w,h);
    return answer;
}

int main()
{
    int w,h;
    cin>>w>>h;

    cout<<solution(w,h);
    
    return 0;
}

/*

(대각선이 지나가는 종이의 수) = (가로) + (세로) - (가로, 세로의 최대공약수)

*/