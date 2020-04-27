#include <stdio.h>
//왼쪽두개랑 자신중 두번째로 큰거를 temp, 오른쪽두개도 포함하여 두번째로 큰거를 temp로 둬서
//계산을 한번에 해결 'view = arr[i]-temp'
int arr[1000];
 
int main(void)
{
    int num, temp, view = 0, total = 0;
 
 
    for (int j = 1; j <= 10; j++)
    {
        scanf("%d", &num);
 
        for (int i = 0; i < num; i++)
        {
            scanf("%d", &arr[i]);
        }
 
        for (int i = 2; i < num - 2; i++)
        {
            temp = arr[i];
 
            if (arr[i - 1] < arr[i])
            {
                if (arr[i - 2] < arr[i])
                {
                    if (arr[i - 1] > arr[i - 2]) temp = arr[i - 1];
                    else                            temp = arr[i - 2];
                }
                else
                    temp = arr[i];
 
            }
            else
                temp = arr[i];
 
            if (arr[i + 1] < arr[i])
            {
                if (arr[i + 2] < arr[i])
                {
                    if (arr[i + 1] > arr[i + 2]) temp = (temp > arr[i + 1]) ? temp : arr[i + 1];
                    else                            temp = (temp > arr[i + 2]) ? temp : arr[i + 2];
                }
                else
                    temp = arr[i];
 
            }
            else
                temp = arr[i];
 
            view = arr[i] - temp;
            total += view;
        }
 
        printf("#%d %d\n", j, total);
 
        temp = 0;
        total = 0;
    }
 
    return 0;
}