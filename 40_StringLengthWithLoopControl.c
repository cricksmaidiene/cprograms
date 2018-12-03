#include<stdio.h>
#include<string.h>
void main()
{
	int i=0,len=0;
	char arr1[100];
	printf(" enter a string : ");
	scanf("%s", arr1);
	while(arr1[i]!='\0')
	{
		len++;
		i++;
	}
	printf("String Length is %d", len);
}

