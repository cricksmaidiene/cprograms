#include <stdio.h>
void main()
{
	printf(" ***Hello Welcome To C Programming***\n ");
	printf(" Enter Two Integers and Two Floating Point Numbers\n ");

	int a,b,ans1;
	/*Initializing the variables*/
	
	float c,d,ans2;
	/*Now Accepting the Floating Point Numbers And Integers*/
	
	scanf("%d%d%f%f", &a, &b, &c, &d);
	
	/*Now Computing the Two Outputs*/
	ans1= a+b;
	ans2= c-d;
	
	/*Printing Out The Outputs*/
	printf("Sum of two numbers is = %d, and the Difference of two numbers is = %f.\n", ans1, ans2);

}/*End Of Main()*/



