#include <iostream>
//여기서 실행시간을 줄이려면 동적할당말고 h[1000]으로 선언, 대신 메모리는 근소하게 증가(약 20kb)
int main()
{
	int T;

	for(int i=1; i<=10; i++){
		scanf("%d",&T);
		int* h = new int[T];
		for(int j=0; j<T; j++){
			scanf("%d",&h[j]);
		}

		int max,height=0;
		for(int k=0; k<T-2; k++){
			if(h[k]==0) continue;
			max = h[k-1]>h[k+1]?h[k-1]:h[k+1];

			if(max>h[k]) continue;
			else{
				max = h[k-2]>h[k+2]?(max>h[k-2]?max:h[k-2]):(max>h[k+2]?max:h[k+2]);
				if(max>h[k]) continue;
				else{
					height+=h[k]-max;
					k+=2;
				}
			}
		}
		printf("#%d %d\n",i,height);
	}



	return 0;
}
