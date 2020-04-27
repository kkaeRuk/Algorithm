//별찍기23
#include <stdio.h>
int main()
{
	int n;
    scanf("%d",&n);
    
    for(int i=0; i<n-1; i++)
    {
        if(i==0)
        {
            for(int j=0; j<n; j++) printf("*");
            for(int j=0; j<2*n-3; j++) printf(" ");
            for(int j=0; j<n; j++) printf("*");
            printf("\n");
            continue;
        }

        for(int j=0; j<i; j++) printf(" ");
        printf("*");

        for(int j=0; j<n-2; j++) printf(" ");
        printf("*");

        for(int j=2*(n-i-1)-1; j>0; j--) printf(" ");
        printf("*");

        for(int j=0; j<n-2; j++) printf(" ");
        printf("*");

        printf("\n");
    }

    for(int i=0; i<n-1; i++) printf(" ");
    for(int i=0; i<2; i++)
    {
        printf("*");
        for(int j=0; j<n-2; j++) printf(" ");
    }
    printf("*\n");

    for(int i=0; i<n-1; i++)
    {
        if(i==n-2)
        {
            for(int j=0; j<n; j++) printf("*");
            for(int j=0; j<2*n-3; j++) printf(" ");
            for(int j=0; j<n; j++) printf("*");
            printf("\n");
            continue;
        }
        for(int j=n-i-2; j>0; j--) printf(" ");
        printf("*");

        for(int j=0; j<n-2; j++) printf(" ");
        printf("*");

        for(int j=0; j<2*i+1; j++) printf(" ");
        printf("*");

        for(int j=0; j<n-2; j++) printf(" ");
        printf("*");

        printf("\n");
    }
	
	return 0;
}

/*
%*c : 할당하지 않고 입력된 값을 버림
int main() {
    int N; scanf("%d", &N);
    int x = 0, y = (N - 1), z = (N + N);

    for(int i = 1; i < N * 2; i++){
        if(i <= N){x++; z -= 2;}
        else{x--; z += 2;}
        
        if(i == 1 || i == (N * 2 - 1)){int l = N;
            while(l--){printf("*");} l = z - 1;
            while(l--){printf(" ");} l = N;
            while(l--){printf("*");} 
        }
        else if(i == N){printf("%*c%*c%*c", x, 42, y, 42, y, 42);}
        else{
            printf("%*c%*c%*c%*c", x, 42, y, 42, z, 42, y, 42);
        }
        printf("\n");
    }
}
*/