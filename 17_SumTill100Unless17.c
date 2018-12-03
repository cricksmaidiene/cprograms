#include<stdio.h>
void main()
{
	int sum,i;
	while(sum<=100)
	{
		printf("enter A Number\n");
		scanf("%d", &i);
		if(i!=17)
		sum=sum+i;
		else
		break;
	}
	printf(" Sum is %d\n", sum);
}

