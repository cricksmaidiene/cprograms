#include<stdio.h>
void main()
{
	int y;
	float x=0.0,i;
	for(y=1; y<=6; y++)
	{
		for(x=5.5;x<=12.5;x=x+0.5)
		{
			i=2+(y+0.5*x);
			printf("%f\t %d\t %f\n", i,y,x);
		}
		printf(" \n");
	}
}


