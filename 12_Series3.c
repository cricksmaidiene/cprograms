#include<stdio.h>
void main()
{
	printf("ENTER N\n\n");
	int n, i ,a;
	scanf("%d", &n);
	float sum=0.0, tp=1.0;
	for(a=0; a<=n; a++)
	{
		if(a!=0)
		{
			for(i=1;i<=a;i++)
			tp=tp*2;
		}
		else
		tp=1.0;
		if(a%2!=0)
		{
			sum=sum+(-1.0*((3.0+(2*a))/tp));
		}
		else
		sum=sum+((3.0+(2*a))/tp);
		tp=1.0;
	}
	printf("The Sum Of The Series Is %f\n", sum);
}


