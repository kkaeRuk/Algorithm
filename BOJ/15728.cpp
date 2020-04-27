#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int n,k, sh[100],tm[100];

  scanf("%d%d", &n, &k);
  for(int i=0; i<n; i++)
    scanf("%d", &sh[i]);

  for(int i=0; i<n; i++)
    scanf("%d", &tm[i]);

  sort(sh, sh+n);
  sort(tm, tm+n);

  int l=0,r=n-1;
  for(int i=0; i<k; i++){
    int a=sh[0]*tm[l], b=sh[0]*tm[r], c=sh[n-1]*tm[l], d=sh[n-1]*tm[r];
//    sh[0]*tm[l]>sh[n-1]*tm[r]?sh[0]*tm[l]>sh[0]*tm[r]?sh[0]*tm[l]>sh[n-1]*tm[l]?l++:r--;
    a>b?a>c?l++:
    else r--;
  }

  printf("%d",sh[0]*tm[l]>sh[n-1]*tm[r]?sh[0]*tm[l]:sh[n-1]*tm[r]);

  return 0;
}
