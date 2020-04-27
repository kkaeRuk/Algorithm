#include <stdio.h>
//4개의 원소로 이루어진 집합의 부분집합 구하

int main()
{
	int a[4],bit;
	int n=sizeof(a)/sizeof(int);

	for(int i=0; i<n; i++)
		scanf("%d",&a[i]);

	for(int i=0; i<(1<<n); i++){		//1<<n : 부분집합수 (4이면 16)
		printf("{");
		for(int j=0; j<4; j++){
			if(i&(1<<j)) printf("%d, ",a[j]);		//i&(1<<j) : 각자리수가 1인지아닌지 확인
		}
		printf("}\n");
	}
	return 0;
}
