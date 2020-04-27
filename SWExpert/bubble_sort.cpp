#include <stdio.h>

int* BubbleSort(int* a, int n){
	int tmp;
	for(int i=n-1; i>=0; i--){
		for(int j=0; j<i; j++){
			if(a[j]>a[j+1]){
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}

	return a;
}

int main()
{
	int A[1000],n;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&A[i]);
	}

	BubbleSort(A,n);

	for(int i=0; i<n; i++){
		printf("%2d ",A[i]);
		if((i+1)%10==0) printf("\n");
	}

	return 0;
}
