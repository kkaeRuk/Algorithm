#include <stdio.h>
#define N 8
//292kb, 6ms, 846byte
//내코드랑 완전 유사한데 가장안쪽for문이 가독성이 좋게 되어있음!
int size, totalCnt, flag;
char map[N][N];
 
int main(void)
{
    for (int i = 0; i < 10; i++)
    {
        scanf("%d ", &size);
        totalCnt = 0;
        for (int j = 0; j < N; j++)
            scanf("%s", &map[j]);
        

        for (int k = 0; k < N; k++)
        {
            for (int l = 0; l <= N-size; l++)
            {
                flag = 0;
                for (int m = 0; m < size / 2; m++)
                {
                    if (map[k][l + m] != map[k][l + size - 1 - m])
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)
                    totalCnt++;
            }
        }

        for (int k = 0; k <= N - size; k++)
        {
            for (int l = 0; l < N; l++)
            {
                flag = 0;
                for (int m = 0; m < size / 2; m++)
                {
                    if (map[k + m][l] != map[k + size - 1 - m][l])
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)
                    totalCnt++;
            }
        }
        printf("#%d %d\n", i + 1, totalCnt);
    }
    return 0;
}