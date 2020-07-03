#include <iostream>
using namespace std;

//구현과정 분석해보기
int solution(int n, int a, int b)
{
    a--;
    b--;
    int answer=0;
    while(a!=b){
        a=a/2;
        b=b/2;
        answer++;
    }
    return answer;
}