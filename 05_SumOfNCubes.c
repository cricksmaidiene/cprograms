#include<stdio.h>
void main()
{
	printf("Enter a number N\n");
	int n;
	scanf("%d", &n);
	int sum=0, i;
	for(i=1; i<=n; i++)
	sum=sum+(i*i*i);
	printf("sum of cubes of first %d natural numbers is %d",n,sum);
}

