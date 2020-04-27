#include <iostream>
using namespace std;

int main()
{
  int n,m,j,apple,l,r,move=0;

  scanf("%d%d%d",&n,&m,&j);

  l=1,r=m;
  while(j--){
    scanf("%d",&apple);
    while(l>apple||r<apple){
      if(l>apple){l--; r--;}
      else{l++; r++;}
      move++;
    }
  }
  printf("%d",move);
  return 0;
}
