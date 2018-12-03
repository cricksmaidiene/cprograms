#include<stdio.h>
void main()
{
	int r,c,key,i,j,chk=0,mid,lb,ub;
	printf(" enter the no: of rows and columns of the array\n");
	scanf("%d %d", &r,&c);
	int arr[r][c];
	printf(" Enter the elements into the array in sorted order\n");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	scanf("%d", &arr[i][j]);
	printf("\n\n The Array Entered is \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%d\t", arr[i][j]);
		printf("\n");
	}
	printf("\n Enter the number to be searched\n");
	scanf("%d", &key);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{	
			if(arr[i][j]==key)
			{
				chk=chk+1;
				break;
			}
			else
			continue;
		}
		if(chk==1)
		break;
	}	
	if(chk==1)
	{
		printf(" Linearly determined that element exists in row %d\n",i+1);
		lb=0;
		ub=c-1;
		mid=(lb+ub)/2;
		while(lb<=ub)
		{
			if(key==arr[i][mid])
			{
				printf("\n %d found at (%d,%d)\n",key,(i+1),(mid+1));
				break;
			}
			else if(key<arr[i][mid])
			ub=mid-1;
			else if(key>arr[i][mid])
			lb=mid+1;
			mid=(lb+ub)/2;
		}
	}
	else 
	printf("%d Not found In array\n",key);
}	
			
