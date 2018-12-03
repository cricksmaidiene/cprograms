#include<stdio.h>
void call_me(int arr[], int,int new_arr[]);
int main(void)
{
	int i;
	int arr[10]={0},new_arr[10];
	call_me(arr,10,new_arr);
	for(i=0;i<10;i++)
	printf("%d %d\n",arr[i],new_arr[i]);
}
void call_me(int*arr ,int size,int*new_arr)
{
	int i;
	for(i=0;i<size;i++)
	*(new_arr+i)= *(arr+i)+5;
}



