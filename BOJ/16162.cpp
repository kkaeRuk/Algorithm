//가희와 3단 고음
//1112 Kb, 4ms
#include <stdio.h>

int main()
{
	int n;
    long long a,d,um,cnt=0;
    scanf("%d%lld%lld",&n,&a,&d);

    for(int i=0; i<n; i++)
    {
        scanf("%lld",&um);
        if(um==a)
        {
            cnt++;
            a+=d;
        }
    }
    printf("%lld",cnt);
	
	return 0;
}
