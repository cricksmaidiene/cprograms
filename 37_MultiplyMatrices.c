#include<stdio.h>
void main()
{
	int i,j,r1,c1,r2,c2;
	printf(" Enter The Dimensions Of The 1st Matrix: Rows And Columns\n");
	scanf("%d %d", &r1,&c1);
	printf(" Enter The Dimensions Of The 2nd Matrix: Rows And Columns\n");
	scanf("%d %d", &r2,&c2);
	if(c1==r2)
	{
		int arr1[r1][c1];
		int arr2[r2][c2];
		int arr3[r1][c2];
		printf(" Enter The Elements Of Array1\n");
		for(i=0;i<r1;i++)
		for(j=0;j<c1;j++)
		scanf("%d",&arr1[i][j]);
		printf(" Enter The Elements Of Array2\n");
		for(i=0;i<r2;i++)
		for(j=0;j<c2;j++)
		scanf("%d",&arr2[i][j]);
		printf(" Array 1 is:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			printf("%d\t",arr1[i][j]);
			printf("\n");	
		}
		printf("\n Array 2 Is:\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			printf("%d\t", arr2[i][j]);
			printf("\n");
		}
		printf("\n The product of Both Is: \n\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				arr3[i][j]=arr1[i][j]*arr2[j][i];
				printf("%d\t",arr3[i][j]);
			}
			printf("\n");
		}	
	}
	else
	printf(" Multiplication not allowed for %d x %d as order is not satisfied\n",c1,r2);
}

	

	
