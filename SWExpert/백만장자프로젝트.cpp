//16,448 kb, 582ms, 549byte
#include <stdio.h>
int num[1000000];

int main()
{
    int tc, n;
    long long ans, max;
    scanf("%d",&tc);

    for(int t=1; t<=tc; t++)
    {
        ans=0;

        scanf("%d",&n);

        for(int i=0; i<n; i++)
        {
            scanf("%d", &num[i]);
        }

        max=num[n-1];
        for(int i=n-2; i>=0; i--)
        {
            if(max<num[i])
            {
                max=num[i];
                continue;
            }

            ans+=max-num[i];
        }

        printf("#%d %lld\n",t,ans);
    }

    return 0;
}