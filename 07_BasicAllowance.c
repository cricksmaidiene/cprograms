#include<stdio.h>
void main()
{
	printf("HELLO, Please Enter the basic and allowance");
	float basic,allowance,tot;
	scanf("%f %f", &basic, &allowance);
	tot=(0.4*basic)+basic+allowance;
	printf("The Total Salary Is\n");
	printf("     %f     " , tot);
}

