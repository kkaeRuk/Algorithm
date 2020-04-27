#include <iostream>
#include <queue>
using namespace std;
int map[10][10] = {0}; //map[x][y] = 1 : nodeX <-> nodeY 연결된 선이 존재 
int visit[10] = {0}; // 방문여부 확인 배열
queue<int> que; //무한루프 방지하는 큐
int num;

void bfs(int v){
	cout<<v<<" ";
	que.push(v); //nodeV 방문할것임
	while(!que.empty()){
		int node = que.front();
		que.pop();
		for(int i=0; i<num; i++){
			if(map[node][i]==1 && visit[i]==0){ //현재노드에 연결된 노드이고, 방문하지 않았다면
				visit[node]=1; //방문
				cout<<i<<" ";
				que.push(i); //모든 노드를 방문하게 되면 if문안에 들어오지않으므로, que가 비게됌
			}
		}
	}
}

int main()
{
	cin>>num;
    while(1){
        int v1,v2;
        cin>>v1>>v2;
        if(v1==-1 && v2==-1) //-1 -1이 입력되기 전까지 모든 노드 입력받기
            break;
        map[v1][v2]=map[v2][v1]=1;
    }
    bfs(1); //rootNode인 node1 부터 시작
	
	return 0;
}
