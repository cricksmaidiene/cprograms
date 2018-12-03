#include<stdio.h>
int prime(int n)
{
	int chk,i;
	if(n==0)
	return 0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		chk+=1;
		else 
		continue;
	}
	if(chk==2)
	return 1;
	else if(chk>2)
	return 0;
}
void main()
{
	int n;
	printf(" Enter A Number\n");
	scanf("%d",&n);
	if(prime(n)==0)
	printf("%d Is Not A Prime Number\n",n);
	else
	printf("%d is a prime number\n",n);
}

