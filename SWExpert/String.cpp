#include <stdio.h>
#include <string.h>
//skip배열을 이용한 보이어무어 알고리즘!
//다만 영문스트링에만 적용가능, 유니코드는 인식불가!
int main()
{	
	char str[1001],p[11];
	int n,m,cnt,i,j,tc;
	int skip[257];
	for(int t=1; t<=10; t++)
	{
		scanf("%d",&tc);

		scanf("%s",p);
		scanf("%s",str);

		n=strlen(str);
		m=strlen(p);

		for(int idx=0; idx<257; idx++)
			skip[idx]=m;

		for(int idx=m-1; idx>=0; idx--)
			if(skip[p[idx]]==m)
				skip[p[idx]]=m-idx-1;

		cnt=0;
		i=m-1,j=m-1;
		while(i<n)
		{
			if(str[i]!=p[j]){
				i+=skip[str[i]];
				j=m-1;
			}

			else{
				while(j>=0){
					if(str[i]!=p[j]) break;
					i--;j--;
				}
				if(j==-1){
					cnt++;
					i+=2*m;
				}
				else{
					i+=m-j;
				}
				j=m-1;
			}
		}

		printf("#%d %d\n",tc,cnt);
	}
	return 0;
}
