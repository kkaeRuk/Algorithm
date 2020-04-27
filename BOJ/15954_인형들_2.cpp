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
    long double m, m2;
    long double a, rst=250000000000;
    while(k<=n){
        int T = n - k;
        
        for(int i=0; i<=T; i++){
            m=0,m2=0;
            for(int j=i; j<i+k; j++){
                m+=doll[j];
                m2+=powl(doll[j],2);
            }
            m/=k;
            m2/=k;
            a=m2 - powl(m,2);
            if(rst>a){
                rst=a;
            }
        }
        k++;
    }
    printf("%.11Lf",sqrtl(rst));
	return 0;
}
