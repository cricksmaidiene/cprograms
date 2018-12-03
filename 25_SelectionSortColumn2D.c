#include<stdio.h>
void main()
{
	int r,col,key,i,j,chk=0,c,index,temp,min;
	printf(" enter the no: of rows and columns of the array\n");
	scanf("%d %d", &r,&col);
	int arr[r][col];
	printf(" Enter the elements into the array\n");
	for(i=0;i<r;i++)
	for(j=0;j<col;j++)
	scanf("%d", &arr[i][j]);
	printf("\n\n The Array Entered is \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<col;j++)
		printf("%d\t", arr[i][j]);
		printf("\n");
	}
	for(j=0;j<col;j++)
	{
		c=0;
		while(c<r)
		{
			min=arr[c][j];
			chk=0;
			for(i=c; i<r; i++)
			{
				if(arr[i][j]<min)
				{
					min=arr[i][j];
					index=i;
					chk=1;
				}
				else
				continue;
			}
			if(chk==1)
			{
				temp=arr[c][j];
				arr[c][j]=min;
				arr[index][j]=temp;
			}
			++c;
		}
	}
	printf(" The Array Is As Follows: \n\n");
	for(i=0;i<r;i++)
	{	
		for(j=0;j<col;j++)
		printf("%d\t", arr[i][j]);
		printf("\n");
	}
}
			
