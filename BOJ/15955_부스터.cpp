#include <stdio.h>
#include <vector>
//#include <utility>
using namespace std;

int main()
{
	int N,Q;
    int i,j;
    int A,B,X,Y;
    vector<pair<int, int> > check make_pair(0,0);

    scanf("%d%d",&N,&Q);

    for(i=1; i<=N; i++){
        scanf("%d%d",&X,&Y);
        check.push_back(make_pair(X,Y));
    }
    

    for(i=0; i<Q; i++){
        scanf("%d%d%d",&A,&B,&X);
    }
    printf("%d %d",check[1].first, check[1].second);

	return 0;
}
