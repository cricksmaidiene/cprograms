#include<stdio.h>
#include<string.h>
void main()
{
	char arr1[100], arr2[100];
	printf(" enter the first string : ");
	scanf("%s", arr1);
	printf(" enter the second string: ");
	scanf("%s", arr2);
	if(strcmp(arr1,arr2)==0)
	printf("The Strings are equal\n");
	else
	printf("The Strings Are Not Equal\n");
}


