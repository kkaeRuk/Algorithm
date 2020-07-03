#include <iostream>

using namespace std;

int toBinary(int n)
{
    int cnt1=0;
    while(n!=0)
    {
        if(n%2==1) cnt1++;
        n/=2;
    }

    return cnt1;
}

int main()
{
    int n;
    cin>>n;

    //main
    int answer, ones=toBinary(n);

    for(answer=n+2; answer<=1000000; answer++)
    {
        if(toBinary(answer)==ones) break;

    }
    cout<<answer;
    return 0;
}