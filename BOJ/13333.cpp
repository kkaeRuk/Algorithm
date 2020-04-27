#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int n, q=1, arr[1000], i, j=0;

  scanf("%d",&n);
  for(i=0; i<n; i++)
    scanf("%d",&arr[i]);

  sort(arr,arr+n);
  i=n-1;
  for(int k=n; k>=0; k--){
    while(k<=arr[i] && i>=0){
      j++; i--;
    }
    if(j>=k){
      q=k; break;
    }
  }

  printf("%d",q);
  return 0;
}
