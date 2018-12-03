#include<stdio.h>
void main()
{
	int n,i,j;
	printf(" Enter n \n");
	scanf("%d", &n);
	int arr[n];
	int arr1[n];
	printf(" Enter The Elements Into The Arrayy\n");
	for(i=0; i<n; i++)
	scanf("%d", &arr[i]);
	for(i=0; i<n; i++)
	printf("%d ", arr[i]);
	printf("\n");
	for(i=(n-1),j=0;i>=0,j<n;i--,j++)
	arr1[j]=arr[i];
	for(i=0;i<n;i++)
	printf("%d ",arr1[i]);
}


