#include <iostream>
using namespace std;

int main()
{
  int n,th=0,fv=0,a;
  scanf("%d",&n);

  fv=n/5,a=n%5;
  while(a<=n){
    th+=a/3;
    a%=3;
    if(a==0)break;
    else{fv--; if(fv<0){a+=n;break;} a+=5;}
  }
  if(a>n) printf("-1");
  else printf("%d",fv+th);

  return 0;
}
