#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,m;
    int arr[10000];
    int sum[500][500]={0,};
    int result=0;

    scanf("%d%d",&n,&m);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        sum[i][i]=arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(sum[i][j+1]!=0){
                sum[i][j+1]=sum[i][j]+arr[j+1];
            }
            if(sum[i][j+1]==m){
                result++;
            }
        }
    }

    printf("%d",result);

    return 0;
}