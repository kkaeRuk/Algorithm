#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
  int n,arr[500000],score[500000],r[500000]; //arr:현재,score:원래등
  scanf("%d",&n);
  for(int i=1; i<=n; i++)
    scanf("%d",&arr[i]);
  memcpy(score,arr,sizeof(int)*n+1);
  sort(score+1,score+n+1,greater<int>());
//  printf("sorting된 스코어 : ");
//  for(int i=1; i<=n; i++)
//    printf("%d ",score[i]);
  printf("1\n");
  for(int i=1; i<=n; i++)
  {
    int s=0;
    for(int j=1; j<=n; j++){
      if(score[i]==arr[j]){
        //if(i<j) r[j]=i+s;
        r[j]=j+s;
      //  printf("r[%d]의 s는 %d\n",j,s);
        break;
      }
      else if(score[i]>arr[j]) s--;
    }
  }
  for(int i=2; i<=n; i++)
    printf("%d\n",r[i]);

  return 0;
}
