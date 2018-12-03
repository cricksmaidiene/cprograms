#include<stdio.h>
void main()
{
	int i,j,r,c;
	printf(" Enter The Dimensions Of The 2D Matrices: Rows And Columns\n");
	scanf("%d %d", &r,&c);
	int arr1[r][c];
	int arr2[r][c];
	int arr3[r][c];
	printf(" Enter The Elements Of Array1\n");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	scanf("%d",&arr1[i][j]);
	printf(" Enter The Elements Of Array2\n");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	scanf("%d",&arr2[i][j]);
	printf(" Array 1 is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%d\t",arr1[i][j]);
		printf("\n");
	}
	printf("\n Array 2 Is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%d\t", arr2[i][j]);
		printf("\n");
	}
	printf("\n The Sum Of Both Is: \n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			arr3[i][j]=arr1[i][j]+arr2[i][j];
			printf("%d\t",arr3[i][j]);
		}
		printf("\n");
	}	
}	
	

	
