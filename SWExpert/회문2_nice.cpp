#include <stdio.h>
//12488kb, 8ms, 1614byte
//실행시간단축됨, 해석어렵넹 그리좋은 코드는 아닌듯! 해석은 다음번에~
int main(void) {
    int k; char map[101][100]; int num; int max[10] = { 0 };
    for (k = 0; k < 10; k++) {
        scanf("%d", &num);
        for (int i = 0; i < 100; i++) {
            scanf("%s", &map[i]);
        }
        int size; 
        for (int i = 0; i < 100; i++) {
            for (int j = 0; j <= 100 - 3; j++) {
                if (map[i][j] == map[i][j + 2]) {
                    int m = 1; size = 3;
                    while ((j - m >= 0 && j + 2 + m < 100) && (map[i][j - m] == map[i][j + 2 + m])) {
                        size += 2;
                        m++;
                    }
                    if (size > max[k]) {
                        max[k] = size;
                    }
                }
            }
        }
        for (int i = 0; i < 100; i++) {
            for (int j = 0; j <= 100 - 3; j++) {
                if (map[j][i] == map[j+2][i]) {
                    int m = 1; size = 3;
                    while ((j - m >= 0 && j + 2 + m < 100) && (map[j-m][i] == map[j+2+m][i])) {
                        size += 2;
                        m++;
                    }
                    if (size > max[k]) {
                        max[k] = size;
                    }
                }
            }
        }
        for (int i = 0; i < 100; i++) {
            for (int j = 0; j <= 100 - 2; j++) {
                if (map[i][j] == map[i][j + 1]) {
                    int m = 1; size = 2;
                    while ((j - m >= 0 && j + 1 + m < 100) && (map[i][j - m] == map[i][j + 1 + m])) {
                        size += 2;
                        m++;
                    }
                    if (size > max[k]) {
                        max[k] = size;
                    }
                }
            }
        }
        for (int i = 0; i < 100; i++) {
            for (int j = 0; j <= 100 - 2; j++) {
                if (map[j][i] == map[j + 1][i]) {
                    int m = 1; size = 2;
                    while ((j - m >= 0 && j + 1 + m < 100) && (map[j - m][i] == map[j + 1 + m][i])) {
                        size += 2;
                        m++;
                    }
                    if (size > max[k]) {
                        max[k] = size;
                    }
                }
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("#%d %d\n", i + 1, max[i]);
    }
    return 0;
}