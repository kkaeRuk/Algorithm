#include <iostream>
#include <string>
#include <vector>
using namespace std;


bool compare(string a, string b)
{
    return a+b > b+a;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> strnum;

    for(int i=0; i<numbers.size(); i++)
    {
        strnum.push_back(to_string(numbers[i]));
    }

    sort(strnum.begin(), strnum.end(), compare);

    if(strnum[0]=="0")
        return "0";

    for(int i=0; i<strnum.size(); i++)
        answer+=strnum[i];

    return answer;
}

int main()
{
    int n;
    int arr[100000];
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>arr[i];

    vector<int> vec;
    vec.assign(arr,arr+n);

    cout<<solution(vec)<<endl;

    return 0;
}