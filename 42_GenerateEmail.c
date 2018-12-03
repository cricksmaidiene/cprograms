#include<stdio.h>
#include<string.h>
#include<ctype.h>

/*STRUCTURE*/

typedef struct	{
	char idno[13];
	char name[50];
	char gender;
	char res_status;
	float cgpa;
	char emailaddress[33];
	} STUDENT;
STUDENT arr[6];

/*PROTOTYPES*/

void populate_records(STUDENT arr[]);
void generate_email_address(char id[],char email[]);
void print_records(STUDENT arr[]);
void sort_strings(char *idnos[], int n);
float cal_avg_cgpa(STUDENT arr[]);


/*MAIN()*/

void main()
{	
	populate_records(arr); /*STUDENT Is a Datatype*/
	print_records(arr);
	printf("\n The Average CGPA Of all Students Is: %f ", cal_avg_cgpa(arr));

}

/*GENERATE EMAIL()*/

void generate_email_addr(char idno[], char email[])
{
	
	int i=0,j,count=0;
	for(i=1,j=0;j<4;i++,j++)
	email[i]=idno[j];
	for(i=8,j=5;i<11;i++,j++)
	email[j]=idno[i];
	email[j+1]='\0';
	email[0]='f';
	email=strcat(email,"@dubai.bits-pilani.ac.in");
	printf("\n Th Email Address Is: %s",email);
}

/*POPULATE()*/

void populate_records(STUDENT arr[])
{
	int i=0;
	for(i=0; i<6; i++)
	{
		scanf("%[^,]s",arr[i].idno);
		getchar();
		scanf("%[^,]s",arr[i].name);
		getchar();
		scanf("%[^,]c",arr[i].gender);
		getchar();
		scanf("%[^,]c",arr[i].res_status);
		getchar();
		scanf("%f",arr[i].cgpa);
		getchar(); //There is a \n at the end of each record
	}
}


/*PRINTING()*/

void print_records(STUDENT arr[])
{
	int i=0;
	for(i=0; i<6; i++)
	{
		

		printf("%s %s",arr[i].idno,arr[i].name);
		getchar();
		printf("\n Gender: %c",arr[i].gender);
		printf("\n Residence Status: %c",arr[i].res_status);
		printf("\n CGPA: %f",arr[i].cgpa);
		generate_email_addr(arr[i].idno, arr[i].emailaddress);
	}
}		

/*AVERAGE CGPA OF 6 STUDENTS*/

float cal_avg_cgpa(STUDENT arr[])
{
	float sum=0,avg;
	int i;

	for(i=0; i<6; i++)
	sum=sum+arr[i].cgpa;
	avg=sum/6;
	return avg;
}

