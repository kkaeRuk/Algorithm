#include <stdio.h>
#include <string.h>
//292kb, 1ms, 2375byte
//실행시간과 메모리효율이 너무 좋음ㅠㅠ 내코드에 비해ㅠ 근데 해석은 어렵;;
int main(){
    char code[50][101];
    int decode_table[32];
    int decoded_num[10]={211,221,122,411,132,231,114,312,213,112};
    int decoded_code[8];
    int testcase;
    int check_num, check_end,check_result;
    int get_result;
    int result;
    int idx;
 
 
    scanf("%d",&testcase);
    for(int i = 1; i<=testcase; i++){
 
 
        int vertical, horizontal;
        scanf("%d %d",&vertical , &horizontal);
        for(int i = 0 ;i<vertical ; i++){
            result = 0;
            idx = 31;
            get_result = 0;//암호가 하나일때 사용
            check_end = 49;//아스키코드 '1'=49
            check_num = -1;
            check_result = 0;
            for(int i = 0 ; i<32 ; i++){
                decode_table[i]=0;
            }
            scanf("%s",code[i]);
            if(get_result!=1){
                for (int j = horizontal-1;j>=0;j--){
                    if(code[i][j]==check_end&&check_end!=1){ //finded code
                        check_num=code[i][j];
                        check_end=1;
                    }
                    if(check_end ==1){
                        if(code[i][j]==check_num){
                            if(idx%4 !=0){
                                decode_table[idx]++;
                            }
                        } else{
                            idx --;
                            check_num=code[i][j];
                            if(idx%4 ==0){
                                int temp = 0;
                                for(int i = idx+1 ; i<idx+4;i++){
                                    temp = temp*10 + decode_table[i];
                                }
                                for(int i = 0 ; i<10 ;i++){
                                    if(decoded_num[i]==temp){
                                        decoded_code[idx/4]=i;
                                        if(idx==0){
                                            get_result=1;
                                        }
                                    }
                                }
                            }
                            else{
                                decode_table[idx]++;
 
                            }
                        }
                    }
                }
            }
            for(int i = 0; i<8;i++){
                result += decoded_code[i];
                (i%2==0)?(check_result+=3*decoded_code[i]): (check_result+=decoded_code[i]);
            }
            if(check_result%10 !=0){
                result = 0;
            }
        }
 
    printf("#%d %d\n",i,result);
    }
 
}