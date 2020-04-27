#include <stdio.h>
#include <algorithm>
//void SequensialSearch()
//보통 원하는 키값을 찾으면 인덱스를 반환, 여기서는 success를 출력

int main()
{
	int arr[5],key,sort,i=0;
	int n=sizeof(arr)/sizeof(int);

	scanf("%d%d",&key,&sort);

	for(int i=0; i<n; i++)
		scanf("%d",&arr[i]);

	if(sort){	//정렬된상태
		std::sort(arr,arr+n);
		while(key>arr[i]){
			i++;
		}
		if(key==arr[i]) i=1;
		else i=-1;
	}

	else{		//정렬안된상태		
		while(i<n){
			if(key==arr[i]) break;
			i++;
		}

		if(key==arr[i]) i=1;
		else i=-1;
	}

	if(i==1) printf("success!");
	else printf("fail");

	return 0;
}
