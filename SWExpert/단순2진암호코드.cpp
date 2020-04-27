#include <stdio.h>
//12492kb, 6ms, 919byte
//실행시간 양호 
int main()
{	
	int t,n,m,sum;
	char arr[50][101];
	char crypto[10][8]={"0001101","0011001","0010011","0111101","0100011","0110001","0101111","0111011","0110111","0001011"};
	int code[8]; 
	int i,j,row,lin,num,veri;

	scanf("%d",&t);

	for(int tc=1; tc<=t; tc++){
		sum=0;
		scanf("%d%d",&n,&m);

		for(i=0; i<n; i++)
			scanf("%s",arr[i]);


		for(i=0; i<n; i++){
			for(j=m-1; j>=0; j--){
				if(arr[i][j]=='1')	//맨끝에 1을 찾으면 빠져나옴
					goto EXIT;		//왜냐면 암호코드부분은 항상 1로 끝나기 때문!
				
			}
		}

	EXIT:
		j-=55;	//시작점찾기
		row=j, lin=i;	

		for(i=0; i<8; i++){
			for(num=0; num<=9; num++){
				for(j=0; j<7; j++){
					if(arr[lin][row+j]!=crypto[num][j]) break;	//중간에 한글자라도 틀리면 num이 아니기 때문
				}
				if(j==7) break;		//crypto[num]과 같으면 해당글자는 num이다
			}
			code[i]=num;
			row+=7;		//다음코드탐색
		}

		veri=0;		//검증코드
		for(i=0; i<=7; i++){
			if(i%2==0){
				veri+=3*code[i];
			}
			else
				veri+=code[i];
		}

		if(veri%10==0){			//암호코드가 검증되면
			for(i=0; i<8; i++)
				sum+=code[i];	//합구하기, 근데 위에 검증코드계산for문에 넣어도 되는부분
		}

		else
			sum=0;
		

		printf("#%d %d\n",tc,sum);
	}

	return 0;
}
