#include <stdio.h>

int main()
{
    int n,m;
    int arr[10000];
    int result=0;

    scanf("%d%d",&n,&m);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);

    int sum=0;
    int i,j;
    bool ok=true;
    for(int leng=1; leng<=n; leng++){
        for(i=0; i<n; i++){
            sum=0;
            ok=true;
            for(j=i; j<(i+leng)%n + 1; j++){
                
                sum+=arr[j];
                if(sum>m){
                    ok=false;
                    break;
                }
            }
            if(ok && sum==m){
                result++;
            }
        }
    }
    printf("%d",result);

    return 0;
}