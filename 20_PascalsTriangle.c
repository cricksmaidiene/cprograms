#include<stdio.h>
void main()
{
	long rows,n,r,i;
	printf(" Enter the number of rows of the triangle\n");
	scanf("%ld",&rows);
	for(n=0;n<rows;n++)
	{
		for(i=0;i<=(rows-n-2);i++)
		printf(" ");
		for(r=0;r<=n;r++)
		printf("%ld ", factorial(n)/(factorial(r)*factorial(n-r)));
		printf("\n");
	}
}
int factorial(long num) 
{
	long i;
	long result=1;
	for(i=1;i<=num;i++)
	result=result*i;
	return result;
}

