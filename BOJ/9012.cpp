#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

int main()
{
  int T;
  string str;
  bool r;
  scanf("%d",&T);
  while(T--)
  {
    stack<char> stk;
    cin>>str;
    int len = str.length();
    r=true;
    for(int i=0;i<len;i++){
      if(str[i]=='(') stk.push(str[i]);
      else{
        if(!stk.empty()) stk.pop();
        else {r=false; break;}
      }
    }
    if(r&&stk.empty()) printf("YES\n");
    else printf("NO\n");
  }


  return 0;
}
