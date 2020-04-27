#include <stdio.h>
#include <string.h>
int main()
{	
	int t,n,m,len;
	int i,row_end,row_start;
	char arr[500];
	char pass[500];


	scanf("%d",&t);
	for(int tc=1; tc<=t; tc++){

		scanf("%d%d",&n,&m);

		memset(pass,'0',sizeof(pass));

		for(int line=0; line<n; line++){

			scanf("%s",arr);

			if(strncmp(arr,pass,m)==0) continue;

			//printf("%d\n",line);

			for(row_end=m-1; row_end>=0; row_end--){
				if(arr[row_end]!='0') break;
			}


			for(row_start=row_end-13; row_start>=0; row_start--){	//최소14
				if(arr[row_start]=='0') break;
			}

			//printf("%d %d\n",row_start,row_end);

			len= (row_end - row_start) * 4;




		}



		printf("#%d %d\n",tc,0);
	}

	return 0;
}
