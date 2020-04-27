#include <stdio.h>
#include <string.h>
//12512kb, 6ms, 696byte
//실행속도 준수!
int main()
{	
	char str[1001],p[11];
	int n,m,cnt,i,j,tc,idx;

	for(int t=1; t<=10; t++)
	{
		scanf("%d",&tc);

		scanf("%s",p);
		scanf("%s",str);

		n=strlen(str);
		m=strlen(p);

		cnt=0;
		i=m-1,j=m-1;		//i:str_index, j:p_index
		while(i<n)
		{
			if(str[i]!=p[j]){	//맨끝문자가 일치하지 않을때 
				idx=-1;
				for(; j>=0; j--){	
				//패턴에 있는 문자인지 확인 
					if(str[i]==p[j]){
						idx=j; break;
					}
				}
				if(idx==-1) i+=m;	//없으면 m만큼 이동
				else i+=m-idx-1;	//있으면 skip만큼 이동
			}

			else{				//맨끝 문자가 일치할때 
				while(j>=0){
					if(str[i]!=p[j]) break;
					i--;j--;
				}
				if(j==-1){	//patern correct
					cnt++;
					i+=2*m;
				}
				else{		//not correct
					i+=m-j;
				}
			}

			j=m-1;

		}

		printf("#%d %d\n",tc,cnt);
	}
	return 0;
}
