#include <stdio.h>
//12492kb, 17ms, 571byte
//한for문에 계산
int main()
{
	int tc,a[100][100];
	int max=0,sum,sum2,sum3,sum4;

	for(int t=1; t<=10; t++){
		scanf("%d",&tc);
		
		for(int i=0; i<100; i++)
			for(int j=0; j<100; j++)
				scanf("%d",&a[i][j]);

		for(int i=0; i<100; i++){
			sum=0,sum2=0;sum3=0,sum4=0;
			for(int j=0; j<100; j++){
				sum+=a[i][j];
				sum2+=a[j][i];
				if(i==j) sum3+=a[i][i];
				if(i+j==99) sum4+=a[i][99-i];
			}
			if(max<sum) max=sum;
			if(max<sum2) max=sum2;
			if(max<sum3) max=sum3;
			if(max<sum4) max=sum4;
		}

		printf("#%d %d\n",tc,max);
		max=0;
	}	
	return 0;
}
