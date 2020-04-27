#include <stdio.h>
#include <algorithm>
//12496kb, 6ms, 875byte
int main()
{
	int dump,arr[100],difM,difm;	//difM:큰숫자의 맨끝두자리수차이+1,
	int idx,tmp,j;					//difm:작은숫자의 맨끝두자리수차이+1
	for(int t=1; t<=10; t++){
		scanf("%d",&dump);

		for(int i=0; i<100; i++){
			scanf("%d",&arr[i]);
		}
		std::sort(arr,arr+100);				//건물들 오름차순 정렬
		
		j=0;
		while(j<dump){					//이동횟수가 만족할때까지
			difM=arr[99]-arr[98]+1;		//맨끝 두자리수 차 구하기
			if(j+difM>dump){		//총이동수가 초과한다면
				arr[99]-=dump-j;	//제일큰높이+남은이동수 하고,
				goto FRONT;			//작은숫자처리단계로 건너뜀
			}
			arr[99]-=difM;				//제일큰건물을 그다음건물보다 1작게 만들기
			idx=97;
			while(arr[98]==arr[idx]){	//arr[99]에 있는 수가 오름차순으로 제자리에 돌아가게
				idx--;					//code:24~31
				if(idx==-1) break;	
			}
			idx++;
			tmp=arr[idx];
			arr[idx]=arr[99];
			arr[99]=tmp;

		FRONT:								//작은쪽 수 처리부분
			j+=difM;					//총이동횟수 더해주기
			while(difM>0){					//현재루틴에서 이동가능횟수가 0이될때까지
				difm=arr[1]-arr[0]+1;		//맨앞 두자리수 차 구하기
				if(difm>difM){		//현재루틴이동횟수보다 차가 크다면?
					arr[0]+=difM;	//제일낮은건물에 남은이동횟수더해주기
					break;			//큰건물처리로 바로 건너뜀
				}
				difM-=difm;					//현재루틴이동횟수에서 차 빼주기
				arr[0]+=difm;				//제일낮은건물을 그다음건물보다 1크게 만들기
				idx=2;
				while(arr[1]==arr[idx]){	//arr[0]값을 오름차순위치에 알맞게 배치
					idx++;					//code:44~51
					if(idx==100) break;
				}
				idx--;
				tmp=arr[idx];
				arr[idx]=arr[0];
				arr[0]=tmp;
			}
		}

		printf("#%d %d\n",t,arr[99]-arr[0]);
	}
	return 0;
}
