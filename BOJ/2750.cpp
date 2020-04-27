#include <stdio.h>
//수 정렬하기
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=n-1; i>0; i--)
        for(int j=0; j<i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    
    for(int i=0; i<n; i++) printf("%d\n",arr[i]);
	
	return 0;
}
