#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int T;
  int a,b,c;
  scanf("%d",&T);
  while(T--)
  {
    scanf("%d%d",&a,&b);
    c=1;
    for(int i=0; i<b; i++) c=(c*a)%100;
    if(c%10!=0) printf("%d\n",c%10);
    else printf("10\n");
  }
  return 0;
}
