#include <stdio.h>
#define MAX 100
//12492kb, 14ms, 1184byte
//짝수,홀수회문을 나눠서 최대값을 구함!
int main()
{	
	char str[MAX][MAX];
	int tc,len,l,r,max,flag,idx,l1,l2,r1,r2,i;

	for(int t=1; t<=10; t++)
	{
		scanf("%d",&tc);
		for(i=0; i<MAX; i++)
			scanf("%s",str[i]);	

		max=1,len=2;
		for(i=2; i<=3; i++){		//i=2:eve, i=3:odd
			
			for(r=0; r<MAX; r++){	//가로줄회문구하기
				for(l=0; l<=MAX-len; l++){
					flag=1;
					for(idx=0; idx<len/2; idx++){
						if(str[r][l+idx]!=str[r][l+len-1-idx]){
							flag=0; break;
						}
					}
		
					if(flag){
						l1=l,l2=l+len-1;
						while(l1>0 && l2<MAX-1){	//구한회문양쪽에문자확인하여 최대길이늘리기
							if(str[r][--l1]!=str[r][++l2])
								break;
							else {
								len+=2;
								l=-1;
							}
						}
					}
				}
				if(max<len) max=len;
			}

			for(l=0; l<MAX; l++){	//세로줄회문구하기
				for(r=0; r<=MAX-len; r++){
					flag=1;
					for(idx=0; idx<len/2; idx++){
						if(str[r+idx][l]!=str[r+len-1-idx][l]){
							flag=0; break;
						}
					}
		
					if(flag){
						r1=r,r2=r+len-1;
						while(r1>0 && r2<MAX-1){	//구한회문양쪽문자가 같으면 최대길이늘리
							if(str[--r1][l]!=str[++r2][l])
								break;
							else {
								len+=2;
								r=-1;
							}
						}
					}
				}
				if(max<len) max=len;
			}

			if(max==MAX) break;
			len--;
		}
		printf("#%d %d\n",tc,max);
	}



	return 0;
}
