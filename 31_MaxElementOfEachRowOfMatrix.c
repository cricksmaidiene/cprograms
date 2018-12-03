#include<stdio.h>
void main()
{
	int i,j,r,c,max;
	printf(" Enter The Dimensions Of The 2D Matrix: Rows And Columns\n");
	scanf("%d %d", &r,&c);
	int arr1[r][c];
	printf(" Enter The Elements Of The Array\n");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	scanf("%d",&arr1[i][j]);
	printf(" Array is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%d\t",arr1[i][j]);
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		max=arr1[i][0];
		for(j=0;j<c;j++)
		if(arr1[i][j]>max)
		max=arr1[i][j];
		printf("max(row %d)= %d\n", (i+1),max);
	}	
}
			
		
	

	
