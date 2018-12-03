#include<stdio.h>
void main()
{
	printf(" Enter a number\n");
	int i,n,chk=0;
	scanf("%d", &n);
	if(n==0||n==1)
	{
		chk=1;
		printf("Number Is Not A Prime Number");
	}
	for(i=2; i<n; i++)
	{
		if(n!=2)
		{
			if(n%i==0)
			{
				chk=1;
				printf("Number Is Not A Prime Number");
		       	 	break;
			}
		}
	}
	if(chk==0)
	{
		printf(" The Number Is a Prime Number");
	}
}

