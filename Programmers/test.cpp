#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<char> stk;
    stk.push('c');
    stk.pop();
    if(stk.top()=='c') cout<<"yes";
    cout<<stk.empty()<<endl;
    return 0;
}