#include<stdio.h>
void main()
{
	struct student          	//User Define Composite Data Type
	{
		char idno[13];
		char name[100];
		float age;
		char gender;
		double cgpa;
		int res_status;
	};				//Note Semicolon
	struct student arr[3];
	int i;

	/*Taking User Input For Student Data*/

	for(i=0;i<3;++i)
	{
		printf(" Entering data for student no. %d...\n",i+1);
		printf(" Enter the bits id no:  ");
		scanf("%s", arr[i].idno);
		printf("Enter the residence status: ");
		scanf("%d", &arr[i].res_status);
	}

	/*Printing out the student data to the user...*/

	for(i=0;i<3;i++)
	{
		printf("Student #%d is: %s",i+1,arr[i].idno);
		printf(" Residence Status Is : ");
		if(arr[i].res_status==1)
		printf("Day Scholar\n");
		else 
		printf("Hostel Resident\n");

	}	
}

