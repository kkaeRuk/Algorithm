#include <stdio.h>
#include <math.h>
int main()
{
	int n,k;
    int doll[500];
    scanf("%d%d",&n,&k);
    
    for(int i=0; i<n; i++){
        scanf("%d",&doll[i]);
    }
    double m;
    double a;
    double rst=250000000000;
    while(k<=n){
        int T = n - k;
        
        for(int i=0; i<=T; i++){
            m=0;
            a=0.0;
            for(int j=i; j<i+k; j++){
                m+=doll[j];
            }
            m/=k;
            for(int j=i; j<i+k; j++){
                a+=pow(doll[j]-m,2);    //제곱수 더하기
            }
            a/=k;
            if(rst>a){
                rst=a;
            }
        }
        k++;
    }
    printf("%.11lf",sqrt(rst));
	return 0;
}
