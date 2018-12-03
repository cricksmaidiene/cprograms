#include<stdio.h>
void main()
{
	printf("ENTER N\n\n");
	int a, n,i;
	float sum=0, tp=1.0;  // where tp= Two's Power 
	scanf("%d",&n);
	for(a=0; a<=n; a++)
	{
		if(a!=0)
		{
			for(i=1; i<=a;i++)
			tp=tp*2;
		}
		else
		tp=1.0;
		sum=sum+(1/tp);
		tp=1.0;
	}
	printf("The Sum Of Series is %f", sum);
}

	

