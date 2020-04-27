#include <iostream>
#include <time.h>
using namespace std;
clock_t before;
before=clock();
int main()
{

  cout<<"실행시간: "<<(double)(clock() - before)<<endl;
  return 0;
}
