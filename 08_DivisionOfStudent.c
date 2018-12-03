#include<stdio.h>
void main()
{
	printf("HELLO, Welcome to The place where you can find out if you failed or not\n");
	int therm, bio, cse, mow, es;
	float n;
	printf("Please Enter Score In Thermodynamics\n\n");
	scanf("%d", &therm);
	printf("Please Enter Score In General Biology\n\n");
	scanf("%d", &bio);
	printf("Please Enter Score In Computer Science\n\n");
	scanf("%d", &cse);
	printf("Please Enter Score In Mechanics, Oscillations And Waves\n\n");
	scanf("%d", &mow);
	printf("Please Enter Score In Electrical Sciences\n\n\n\n");
	scanf("%d", &es);
	n=(therm+bio+cse+mow+es)/5;
	if(n>80)
	printf("DISTINCTION");
	else if(n>=60)
	printf("FIRST DIVISION");
	else if(n>=45)
	printf("SECOND DIVISION");
	else 
	printf("FAIIIIL");
	printf("\n");
}

