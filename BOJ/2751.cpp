#include <stdio.h>
#include <algorithm>
#include <time.h>
//수정렬하기2
int main()
{
	int n,a;
    int arr[1000000];
    //clock_t s;
    //s= clock();
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&a);
        arr[i]=a;
	}
	
	std::sort(arr, arr+n);
	
	for(int i=0; i<n; i++)
		printf("%d\n",arr[i]);
	
    //printf("%.6lf",(double)(clock()-s)/CLOCKS_PER_SEC);
	return 0;
}
