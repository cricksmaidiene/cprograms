#include<stdio.h>
void main()
{
	int n,i,j;
	printf(" Please Enter n\n" );
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for(j=i; j>=1; j--)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
}

