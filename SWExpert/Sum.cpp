#include <stdio.h>
//따로따로계산, 20ms
int main()
{
	int tc,a[100][100];
	int max=0,sum,sum2;

	for(int t=1; t<=10; t++){
		scanf("%d",&tc);
		
		for(int i=0; i<100; i++)
			for(int j=0; j<100; j++)
				scanf("%d",&a[i][j]);

		for(int i=0; i<100; i++){	//행들합
			sum=0;
			for(int j=0; j<100; j++){
				sum+=a[i][j];
			}
			if(max<sum) max=sum;
		}

		for(int j=0; j<100; j++){	//열들합
			sum=0;
			for(int i=0; i<100; i++)
				sum+=a[i][j];
			if(max<sum) max=sum;
		}
		
		sum=0;sum2=0;
		for(int i=0; i<100; i++){
			sum+=a[i][i];
			sum2+=a[i][99-i];
		}
		if(max<sum) max=sum;
		else if(max<sum2) max=sum2;


		printf("#%d %d\n",tc,max);
		max=0;
	}	
	return 0;
}
