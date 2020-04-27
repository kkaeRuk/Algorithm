#include <stdio.h>
#include <math.h>

float gob(float a, float b)
{


    return a*b;
}

int main()
{
	int n, today;
    float feel[4], good=0, bad=0;
    scanf("%d%d",&n,&today);

    for(int i=0; i<4; i++)
        scanf("%f",&feel[i]);


    int idx = today==0?0:2;
    for(int i=0; i<2; i++)
    {
        float g=1,b=1;
        
        for(int j=0; j<n-1; j++)
        {
            g*=feel[idx+i];
            b*=feel[idx+i];
        }
        good+=g;
        bad+=b;
    }

    printf("%0f\n%0f",good*1000, bad*1000);

	
	return 0;
}
