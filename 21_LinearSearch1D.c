#include<stdio.h>
void main()
{
	int n,key,i,chk=0;
	printf(" enter the size of the 1D array\n");
	scanf("%d", &n);
	int arr[n];
	printf(" Enter the elements into the array\n");
	for(i=0;i<n;i++)
	scanf("%d", &arr[i]);
	printf("\n\n The Array Entered is \n");
	for(i=0;i<n;i++)
	printf("%d ", arr[i]);
	printf("\n Enter the number to be searched\n");
	scanf("%d", &key);
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			printf(" %d found at %dth position ", key,(i+1));
			chk=chk+1;
		}
		else
		continue;
	}
	if(chk==0)
	printf(" %d could not be found in the array\n",key);
}

