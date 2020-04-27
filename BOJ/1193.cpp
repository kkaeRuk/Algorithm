#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int x,k=1;  //k:탐색중인 값
  scanf("%d",&x);
  int a=1,j=1;  //j:y index (i,j)
  while(k<x){
    if(x==1) break;
    if(j%2) k++;
    else k+=4*(a++);
    j++;
  }
  
  int i=1;  //i:x index
  if(x<=k-j){     //짝수번째
    k-=4*(--a);j--;
  }

  i+=abs(k-x); j-=abs(k-x);

  printf("%d/%d",i,j);
  return 0;
}
