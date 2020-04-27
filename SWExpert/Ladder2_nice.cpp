#include <stdio.h>
#define SIZE 100
//10ms
//재귀함수로 품
int data[SIZE][SIZE];
 
int gogo(int x, int y) { // data[x좌표][y좌표]    
 
    if (x == SIZE - 1) return 0;
 
    data[x][y] = 0;
     
    int ret;
    if ((y - 1 >= 0) && data[x][y - 1]) 
        ret = gogo(x, y - 1) + 1;
    else if ((y + 1 < SIZE) && data[x][y + 1]) 
        ret = gogo(x, y + 1) + 1;
    else
        ret = gogo(x + 1, y);
 
    data[x][y] = 1;
    return ret;
}
 
int main(){ 
    int case_num, min, start = 0;
 
    for (int tc = 1; tc <= 10; tc++){
 
        scanf("%d", &case_num);
 
        for (int i = 0; i < 100; i++){
            for (int j = 0; j < 100; j++){
                scanf("%d", &data[i][j]);               
            }
        }
        min = 0xfffff;
        for (int i = 0; i < SIZE; i++)
        {
            if (data[0][i])
            {
                int ret = gogo(0, i);
                if (min > ret) {
                    min = ret, start = i;
                }
            }
        }
        printf("#%d %d\n", tc, start);
    }
}