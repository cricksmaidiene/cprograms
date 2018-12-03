#include<stdio.h>
#include<math.h>
int check(int x,int y)
{
	
	if(abs(x)==x&&abs(y)==y)
	return 1;
	else if(abs(x)==x&&abs(y)!=y)
	return 4;
	else if(abs(x)!=x&&abs(y)==y)
	return 2;	
	else
	return 3;
}	
void main()
{
	printf(" Enter the x,y co-ordinates : ");
	int x,y;
	char c;
	scanf("%d%c%d",&x,&c,&y);
	if(check(x,y)==1)
	printf("FIRST QUADRANT\n");
	else if(check(x,y)==2)
	printf("SECOND QUADRANT\n");
	else if(check(x,y)==3)
	printf("THIRD QUADRANT\n");
	else
	printf("FOURTH QUADRANT\n");
}


