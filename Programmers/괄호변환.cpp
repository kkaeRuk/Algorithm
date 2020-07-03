#include <string>
#include <stack>

using namespace std;

bool iscorrect(string s)
{
    stack<char> stk;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='(')
        {
            stk.push('(');
        }
        else
        {
            if(stk.empty()) return false;

            if(stk.top()=='(') stk.pop();
          
            else return false;
        }
    }

    if(!stk.empty()) return false;

    return true;
}


string solution(string p) {
    string answer, u,v;
    if (p=="") return "";

    int a=0;
    for(int i=0; i<p.size(); i++)
    {
        if(p[i]=='(') a++;
        else a--;

        if(a==0)
        {
            u = p.substr(0,i+1);
            v = p.substr(i+1);
            break;
        }
    }

    if(iscorrect(u)) return u+solution(v);

    else
    { 
        answer="(";
        answer+=solution(v);
        answer+=")";
        for(int i=1; i<u.size()-1; i++)
        {
            if(u[i]=='(') answer+=")";
            else answer+="(";
        }
        return answer;
    }
    return answer;
}