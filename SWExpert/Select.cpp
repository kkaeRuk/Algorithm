#include <stdio.h>

int main()
{
	int a[10],k,tmp;
	int n=sizeof(a)/sizeof(int);

	scanf("%d",&k);
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	int minIdx,minVal;
	for(int i=0; i<k; i++){
		minIdx=i;
		minVal=a[i];
		for(int j=i+1; j<n; j++){
			if(a[j]<minVal){
				minIdx=j;
				minVal=a[j];
			}
		}
		tmp=a[i];
		a[i]=a[minIdx];
		a[minIdx]=tmp;
	}

	printf("%d번째 원소 : %d\n",k,a[k-1]);

	return 0;
}
