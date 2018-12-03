#include<stdio.h>
void main()
{
	char c;
	int a;
	printf("Enter A Character\n");
	scanf("%c" ,&c);
	a=c; /*Implicit conversion of character to ascii value*/
	printf(" Value is %d", a);
}

