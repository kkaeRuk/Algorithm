#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);

	for(int i=1; i<=2*n-1; i++){
		if(i<=n){
			for(int j=n-i; j>=1; j--) printf(" ");
			for(int k=1; k<=2*i-1; k++) printf("*");
		}
		else{
			for(int j=1; j<=i-n; j++) printf(" ");
			for(int k=1; k<=2*(2*n-i)-1; k++)printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
