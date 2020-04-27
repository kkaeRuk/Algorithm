#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
  string str;
  getline(cin,str);
  stringstream ss(str);

  int cnt=0;
  for(string st; ss>>st;){
    cnt++;
  }
  printf("%d",cnt);
  return 0;
}
