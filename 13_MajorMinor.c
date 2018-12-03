#include<stdio.h>
void main()
{
	printf( "Enter Age\n");
	int n;
	scanf("%d", &n);
	if(n>=18)
		printf(" MAJOR\n ");
	else
		printf(" MINOR\n");
}

