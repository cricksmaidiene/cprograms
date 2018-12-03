#include<stdio.h>
void main()
{
	int n,i,j,temp;
	printf(" Enter n \n");
	scanf("%d", &n);
	int arr[n];
	printf(" Enter The Elements Into The Array\n");
	for(i=0; i<n; i++)
	scanf("%d", &arr[i]);
	for(i=0; i<n; i++)
	printf("%d ", arr[i]);
	printf("\n");
	for(i=(n-1),j=0;i>(n/2),j<(n/2);i--,j++)
	{
		temp=arr[j];
		arr[j]=arr[i];
		arr[i]=temp;
	}	
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
}


