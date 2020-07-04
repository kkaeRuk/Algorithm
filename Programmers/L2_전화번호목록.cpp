#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool compare(string a, string b)
{
    return a.size() < b.size();
}

bool solution(vector<string> phone_book) {
    bool answer = true;

    sort(phone_book.begin(), phone_book.end(), compare);

    for(int i=0; i<phone_book.size(); i++)
    {
        for(int j=i+1; j<phone_book.size(); j++)
        {
            if(phone_book[j].find(phone_book[i])==0)
            {
                answer = false;
                goto EXIT;
            }
        }
    }
    EXIT:


    return answer;
}

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

    cout<<solution(str)<<endl;
    
    return 0;
}