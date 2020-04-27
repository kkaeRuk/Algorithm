#include <cstdio>
#include <string.h>
//5ms
//도착지점부터 탐색함
struct Pos {
    int x, y;
} start;
char map[100][102];
int tc = 10, t, i, j, max, sum;
int main()
{
    //freopen("input.txt", "r", stdin);
    for (t = 1; t <= tc; t++)
    {
        memset(map, '0', sizeof(map));
        scanf("%d\n", &t);
        for (i = 0; i < 100; i++)
        {
            for (j = 1; j <= 100; j++)
            {
                scanf("%1c ", &map[i][j]);
                if (map[i][j] == '2')
                {
                    start.x = j; start.y = i;
                }
            }
        }
        while (true)
        {
            if (map[start.y][start.x - 1] == '1')
            {
                for (; map[start.y][start.x - 1] != '0'; start.x--);
                start.y--;
            }
            else if (map[start.y][start.x + 1] == '1')
            {
                for (; map[start.y][start.x + 1] != '0'; start.x++);
                start.y--;
            }
            else
            {
                start.y--;
            }
            if (start.y == 0)
                break;
        }
        printf("#%d %d\n", t, start.x-1);
    }
    return 0;
}