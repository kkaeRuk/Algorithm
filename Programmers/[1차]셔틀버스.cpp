#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> timeset(int n, int t)
{
    vector<string> time;
    int h=9,m=0;
    string strh="09", strm;
    time.push_back("09:00");

    for(int i=1; i<n; i++)
    {
        m+=t;
        if(m>=60)
        {
            h++;
            strh=to_string(h);
            m%=60;
        }
        strm = m<=9? "0"+to_string(m):to_string(m);
        time.push_back(strh+":"+strm);
    }

    return time;
}

int main()
{
    int n, t, m;
    string []arr ={"09:10", "09:09", "08:00"};
    vector<string> timetable;
    timetable.assign(arr, arr+3);
    string answer="";
    cin>>n>>t>>m;

    
    sort(timetable.begin(), timetable.end());
    vector<string> ts = timeset(n,t);

    for(int i=0; i<ts.size(); i++)
    {
        

    }
    
    cout<<answer<<endl;

    return 0;
}