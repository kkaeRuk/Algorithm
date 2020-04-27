#include <stdio.h>

int main()
{
	int a[5][5];
	int n=5,tmp;

	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			scanf("%d",&a[i][j]);

	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			if(i<j){
				tmp = a[i][j];
				a[i][j]=a[j][i];
				a[j][i]=tmp;
			}

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;
}
