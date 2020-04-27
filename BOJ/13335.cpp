#include <iostream>
#include <queue>

using namespace std;

int main()
{
  int n,w,L,truck[1000],t=0,i;  //w:다리길이,L:최대하중,t:걸린시간
  queue<int> bg;

  scanf("%d%d%d", &n,&w,&L);
  for(i=0;i<n;i++)
    scanf("%d",&truck[i]);

  i=0;
  int Al=0; //Al:총하중
  while(i!=n){
    while(!bg.empty() && bg.front()==0) bg.pop();
    if(bg.size()+1<=w){ //길이가 충분?
      if(Al+truck[i]<=L){ //하중이 충분?
        Al+=truck[i];
        bg.push(truck[i++]);
      }
      else
        bg.push(0);
      t++;
    }
    else{
      Al-=bg.front();
      bg.pop();
    }
  }

  printf("%d", t+w);
  return 0;
}
