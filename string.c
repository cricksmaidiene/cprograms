#include<stdio.h>
void main()
{
	char a[20]="BPDC",*b="BITS";
	printf("%s\n",b);
	strcpy(a+3,b);
	printf("%s\n",a);
	int x= strcmp(a+5,b);
	printf("%d\n",x);
}

