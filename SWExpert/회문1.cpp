#include <stdio.h>
//12492kb,5ms,973byte
//효율은 괜찮으나 코드 가독성이 떨어짐!
int main()
{	
	char str[8][8];
	int len,cnt,i,j,flag,end;	//end:각 세부조각의 끝인덱스
	for(int tc=1; tc<=10; tc++)
	{
		scanf("%d",&len);

		for(i=0; i<8; i++)
			scanf("%s",str[i]);

		
		cnt=0;
		for(i=0; i<8; i++){			//가로열확인
            for(j=0; j<9-len; j++){
                flag=1;
                end=j+len-1;
                for(int idx=j; idx<j+(len/2); idx++){
                    if(str[i][idx]!=str[i][end--]){	//회문아니면 flag=0
                        flag=0; break;
                    }
                }
                if(flag) cnt++;
            }
        }
        
        for(j=0; j<8; j++){		//세로열확인
            for(i=0; i<9-len; i++){
                flag=1;
                end=i+len-1;
                for(int idx=i; idx<i+(len/2); idx++){
                    if(str[idx][j]!=str[end--][j]){
                        flag=0; break;
                    }
                }
                
                if(flag) cnt++;
            }
        }
        printf("#%d %d\n",tc,cnt);
    }
	return 0;
}
