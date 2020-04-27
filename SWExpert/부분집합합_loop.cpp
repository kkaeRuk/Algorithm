#include <stdio.h>
//4개의 원소로 이루어진 집합의 부분집합 구하기
void printArr(int* bit, int*a, int n)
{
	printf("{");
	for(int i=0; i<n; i++){
		if(bit[i]==1) printf("%d, ",a[i]);
	}
	printf("}\n");

}

int main()
{
	int a[4],bit[4];
	int n=4;

	for(int i=0; i<n; i++)
		scanf("%d",&a[i]);

	for(int i=0; i<=1; i++){
		bit[0]= (i%2==0)?0:1;
		for(int j=0; j<=1; j++){
			bit[1]= (j%2==0)?0:1;
			for(int l=0; l<=1; l++){
				bit[2]=l%2==0?0:1;
				for(int m=0; m<=1; m++){
					bit[3]=(m%2==0)?0:1;

					printArr(bit,a,n);
				}
			}
		}
	}
	return 0;
}
