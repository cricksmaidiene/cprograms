#include<stdio.h>
void main()
{
	int i,j,r,c;
	printf(" Enter The Dimensions Of The 2D Matrix: Rows And Columns\n");
	scanf("%d %d", &r,&c);
	int arr1[r][c];
	int arr2[r][c];
	printf(" Enter The Elements Of The Array\n");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	scanf("%d",&arr1[i][j]);
	printf(" The Array is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%d\t",arr1[i][j]);
		printf("\n");
	}
	printf("\n The Transpose Is: \n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			arr2[i][j]=arr1[j][i];
			printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	}	
}	
	

	
