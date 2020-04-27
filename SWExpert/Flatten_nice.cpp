#include <stdio.h>
//일단 sort내장함수를 사용안하고 selection소트 직접 만든듯
//나는 제일크고 작은것들을 한꺼번에 처리했다고 하면, 한칸씩옮김
//한칸씩 옮겼는데 되려 나보다 메모리도 겁나적게들고 실행시간도 2ms단축시킴!
//4kb, 4ms, 765byte
int box[100];
 
int main(void) {
    int D, i, j, k, tmp, dist;
    for (i = 0; i < 10; i++) {
        scanf("%d", &D);
        for (j = 0; j < 100; j++) {
            scanf("%d", &box[j]);
        }
        for (j = 0; j < 99; j++) {
            for (k = 0; k < 99 - j; k++) {
                if (box[k] > box[k + 1]) {
                    tmp = box[k];
                    box[k] = box[k + 1];
                    box[k + 1] = tmp;
                }
            }
        }

        for(int i=0; i<99; i++){
        	printf("%d ",box[i]);
        	if((i+1)%10==0) printf("\n");
        }
        for (j = 0; j < D; j++) {
            box[99]--;
            box[0]++;
            for (k = 99; box[k] < box[k - 1]; k--) {
                tmp = box[k];
                box[k] = box[k - 1];
                box[k - 1] = tmp;
            }
            for (k = 0; box[k] > box[k + 1]; k++) {
                tmp = box[k];
                box[k] = box[k + 1];
                box[k + 1] = tmp;
            }
            dist = box[99] - box[0];
            if (dist == 0 || dist == 1) {
                break;
            }
        }
        printf("#%d %d\n", i + 1, dist);
    }
}