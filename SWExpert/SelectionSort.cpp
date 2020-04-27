#include <stdio.h>

int main()
{
	int a[10],tmp,min;
	int n=sizeof(a)/sizeof(int);

	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}

	for(int i=0; i<n-1; i++){
		min=i;
		for(int j=i+1; j<n; j++){
			if(a[j]<a[min]) min=j;
		}
		tmp=a[i];
		a[i]=a[min];
		a[min]=tmp;
	}

	for(int i=0; i<n; i++)
		printf("%d ",a[i]);

	return 0;
}
