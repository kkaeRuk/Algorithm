#include <iostream>
using namespace std;

int main()
{
  int n=5, arr[1000];
  n = n/2 + n%2;
//  printf("%d",n);
  n=4;
  for(int i=0; i<n; i++)
    scanf("%d", &arr[i]);
  int l=0, r=1;
  printf("%d\n",arr[l++]);
  printf("%d\n", arr[l++]);
  printf("%d\n",arr[r--]);
  printf("%d\n",arr[r--]); r--; r--;
  printf("%d\n",arr[r--]);
  return 0;
}
