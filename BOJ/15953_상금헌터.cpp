#include <stdio.h>
#include <math.h>
int main()
{
    int T;
    int a,b;
    int con1[6][2]={{1,500},{3,300},{6,200},{10,50},
                    {15,30},{21,10}};
    int con2[5]={1,3,7,15,31};

    scanf("%d",&T);
    int price;
    while(T--){
        price=0;
        scanf("%d%d",&a,&b);
        if(a==0){
            goto ONEX;
        }
        
        for(int i=0;  i<6; i++){
            if(con1[i][0]>=a){
                price+=con1[i][1]*10000;
                break;
            }
        }
        ONEX:
        if (b==0){
            goto TWOX;
        }
        for(int j=0; j<5; j++){
            if(con2[j]>=b){
                price+=pow(2,9-j)*10000;
                break;
            }
        }
        TWOX:
        printf("%d\n",price);
    }

    return 0;
}