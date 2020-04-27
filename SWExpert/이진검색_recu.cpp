#include <stdio.h>
#include <algorithm>
bool binarySearch(int* arr, int low, int high, int key){
	int mid=(low+high)/2;
	if(key==arr[mid]) return true;
	else if(low>=high) return false;
	else if(key>arr[mid]) return binarySearch(arr,mid+1,high,key);
	else return binarySearch(arr,low,mid-1,key);
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

	rs = binarySearch(arr,0,n-1,key);

	if(rs) printf("success!");
	else printf("fail");

	return 0;
}
