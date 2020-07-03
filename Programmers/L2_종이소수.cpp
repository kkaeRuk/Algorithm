#include <iostream>
#include <string>
using namespace std;

int main()
{
    string numbers;
    cin>>numbers;
    //
    int answer=0;
    int arr[10] = {0,};
    for(int i=0; i<numbers.length(); i++)
    {
        arr[numbers[i]]++;
    }

    for(int len=1; len<=numbers.length(); len++)
    {

    }

    cout<<stoi("011")<<endl;
    cout<<answer;
    return 0;
}