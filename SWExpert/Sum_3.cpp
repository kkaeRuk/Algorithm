#include <stdio.h>
#include <string.h>
#include <algorithm>
//12496kb, 19ms, 759byte
//입력과 동시에 계산
int main()
{
	int sumW[100],sumH[100],sumX[2],tc,input;
	int max=0;

	for(int t=1; t<=10; t++){
		scanf("%d",&tc);
		memset(sumW,0,sizeof(sumW));
		memset(sumH,0,sizeof(sumH));
		memset(sumX,0,sizeof(sumX));

		for(int i=0; i<100; i++){
			for(int j=0; j<100; j++){
				scanf("%d",&input);
				sumW[i]+=input;
				sumH[j]+=input;
				if(i==j) sumX[0]+=input;
				if(i+j==99) sumX[1]+=input;
			}
		}

		std::sort(sumW,sumW+100);
		std::sort(sumH,sumH+100);
		std::sort(sumX,sumX+2);

		if(sumW[99]>sumH[99]){
			if(sumW[99]>sumX[1]) max=sumW[99];
			else max=sumX[1];
		}
		else{
			if(sumH[99]>sumX[1]) max=sumH[99];
			else max=sumX[1];
		}

		printf("#%d %d\n",tc,max);
		max=0;
	}	
	return 0;
}
