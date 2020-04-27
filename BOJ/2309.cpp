#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int h[9],all=0;

	for(int i=0; i<9; i++){
		scanf("%d",&h[i]);
		all+=h[i];	//all of dwarf's kidney
	}

	for(int i=0; i<9; i++)
		for(int j=i+1; j<9; j++){
			if(all-(h[i]+h[j])==100){
				h[i]=h[j]=0;
				goto BREAK;
			}
		}

BREAK:
	sort(h,h+9);
	for(int i=2;i<9;i++)
		printf("%d\n",h[i]);

	return 0;
}
