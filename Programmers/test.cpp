#include <iostream>
#include <math.h>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> str;

    string arr[100];
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    str.assign(arr,arr+n);

    sort(str.begin(), str.end());

    for(int i=0; i<str.size(); i++)
        cout<<str[i]<<endl;
    return 0;
}