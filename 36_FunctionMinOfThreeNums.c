#include<stdio.h>
void main()
{
	printf(" Enter Three Numbers \n");
	int a,b,c,res;
	scanf("%d%d%d",&a,&b,&c);
	res=minimum(a,b,c);
	printf(" The Minimum Of %d %d and %d is %d\n", a,b,c,res);
}
int minimum(int a,int b,int c)
{	
	int min;
	if((a<b)&&(a<c))
	min=a;
	else if((b<a)&&(b<c))
	min=b;
	else
	min=c;
	return min;
}

	



