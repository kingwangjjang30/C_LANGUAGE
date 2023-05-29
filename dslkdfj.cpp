#include <stdio.h>
#include <math.h>
#define PI 3.141592

void sine();

int main(void)
{
    sine();
    return 0;

}

void sine(void)
{
    double temp;
    int i,j;
    double temp1;
    for(i=0;i<=360;i+=15) 
	{
    	temp = cos((i*(PI/180)));
        printf("cos(%3d) = %+.2lf",i,temp);
        for(j=-10;j<temp*10;j++)
        {
			printf(" ");
		}
        printf("*\n");
    }

 

}
