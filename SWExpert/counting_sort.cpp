#include <stdio.h>

int* CountingSort(int* a, int n, int k){
	int C[1000]={0,};
	int B[1000];

	for(int i=0; i<n; i++){
		C[a[i]]++;
	}

	for(int i=1; i<=k; i++){
		C[i]+=C[i-1];
	}

	for(int j=n-1; j>=0; j--){
		B[C[a[j]]]=a[j];
		C[a[j]]--;
	}

	for(int i=0; i<n; i++){
		a[i]=B[i+1];
	}

	return a;
}

int main()
{
	int A[1000],n,k;
	scanf("%d %d",&n,&k);

	for(int i=0; i<n; i++){
		scanf("%d",&A[i]);
	}

	CountingSort(A,n,k);

	for(int i=0; i<n; i++){
		printf("%3d",A[i]);
		if((i+1)%10==0) printf("\n");
	}

	return 0;
}
