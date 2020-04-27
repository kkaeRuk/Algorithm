#include <stdio.h>
#include <algorithm>
bool binarySearch(int* arr, int key, int n){
	int start=0, end=n-1;
	int middle;
	while(start<=end){
		middle=start+(end-start)/2;
		if(key==arr[middle]) return true;
		else if(key > arr[middle])
			start = middle+1;
		else
			end = middle-1;
	}
	return false;
}

int main()
{
	int arr[10],key;
	int n=sizeof(arr)/sizeof(int);
	bool rs;

	scanf("%d",&key);

	for(int i=0; i<n; i++)
		scanf("%d",&arr[i]);

	std::sort(arr,arr+n);

	rs = binarySearch(arr,key,n);

	if(rs) printf("success!");
	else printf("fail");

	return 0;
}
