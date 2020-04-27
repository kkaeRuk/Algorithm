#include <iostream>
using namespace std;

int chapterChain(int *arr, int i, int j){
  if(i==j) return 0;
  int m[501][501];
  for(int i=1; i<=n; i++) m[i][i]=0;
  for(int r=1; r<n; r++)
    for(int i=1; i<=n-r; i++){
      j=i+r;
      for(int k=i; k<j; k++){
        int v=m[i][k]+m[k+1][j]+arr[i-1]+arr[k]+arr[j];
        m[i][j]=(m[i][j]<v?m[i][j]:v);
      }
    }
    return m[1][n];
}

int main()
{
  int T,k,arr[500];
  scanf("%d", &T);

  while(T--){
    scanf("%d",&k);
    for(int i=0; i<k; i++)
      scanf("%d", &arr[i]);
    printf("%d",chapterChain(arr,0,k-1));
  }

  return 0;
}
