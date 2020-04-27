//300 kb, 5 ms
#include <stdio.h>
#include <string.h>

int main()
{
    int tc, ans, n, i, j;
    int qe[4], num[10]={0,}, cs;
    char tag[4];
    scanf("%d",&tc);

    for(int t=1; t<=tc; t++)
    {
        memset(num,0,sizeof(num));
        
        cs=0;

        scanf("%d",&n);

        for(i=0; i<n; i++)
        {
            for(j=0; j<4; j++)
                scanf("%d",&qe[j]);

            scanf("%s",tag);

            if(tag[0]=='Y')
            {
                cs++;
                for(j=0; j<4; j++)
                {
                    if(num[qe[j]]==-1) continue;
                    num[qe[j]]++;
                }
            }

            else
            {
                for(j=0; j<4; j++)
                    num[qe[j]]=-1;
            }
        }

        for(int i=0; i<10; i++)
        {
            if(num[i]==cs) {ans=i; break;}
        }

        printf("#%d %d\n",t,ans);
    }

    return 0;
}

/*
10
3
3 2 1 0 YES
0 1 7 9 NO
2 0 9 1 NO
4
4 7 3 0 NO
6 5 9 2 YES
2 5 4 8 YES
2 6 4 3 NO
4
5 3 7 8 NO
1 9 6 0 YES
0 1 5 2 YES
0 9 4 8 YES
3
3 5 4 7 YES
3 4 0 1 NO
5 2 4 1 NO
3
4 8 7 2 YES
2 4 0 6 YES
2 1 9 7 NO
3
0 5 8 6 YES
0 5 9 3 YES
0 9 6 1 NO
3
2 3 1 9 YES
1 2 7 6 YES
1 6 0 7 NO
4
7 5 3 8 NO
1 9 4 6 YES
1 4 3 0 YES
1 7 0 3 YES
3
7 3 5 2 YES
2 3 0 9 YES
2 0 5 8 YES
4
0 6 2 5 NO
3 4 8 1 YES
1 3 2 5 YES
1 9 6 4 YES

*/