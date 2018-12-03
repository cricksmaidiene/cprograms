#include<stdio.h>
#include<stdlib.h>
	typedef struct node{
		int data;
		struct node*next;       
	}NODE;
	
	typedef struct manager{
		NODE* head;
		struct node* tail;
		int num;
	}LIST;

LIST createList(LIST);
LIST insertElement(int, LIST);
LIST deleteElement(int, LIST);
void printList(LIST);
void freeList(LIST);

void main()
{
	LIST aList;			//Member of Structure LIST
	aList=createList(aList);
	aList=insertElement(100,aList);
	aList=insertElement(250,aList);
	aList=insertElement(-20,aList);
	printList(aList);
}

LIST createList(LIST l)			//This Function Creates the Manager Node, initializes the head and the tail 
					//pointers to NULL, as well as the number of nodes to 0, and then,
					//returns the manager node
{
	l.head=NULL;
	l.tail=NULL;
	l.num=0;
	return l;
}

LIST insertElements(int elem, LIST l)
{

	/*This function allocates dynamic memory for a node, assigns the data to the corresponding field of the node, updates the list manager and returns the list manager*/
	
	NODE *newnode;
	newnode=malloc(sizeof(NODE));
	newnode->data=elem;
	newnode->next=NULL;
	printf("Node address is: %p, value stored is : %d\n");
	if(l.tail!=NULL)			/*THE LIST IS NOT EMPTY*/
	{
		(l.tail)->next=newnode;
		l.tail=newnode;
		l.num++;
	}
	else					/*ADDING THE FIRST NODE*/
	{
		l.tail=l.head=newnode;
		l.num++;
	}
	return l;
}

void printLIST(LIST l)
{
	NODE *temp;
	temp=l.head;
	while(temp!=NULL)			/*END OF LIST NOT REACHED*/
	{
		printf("The data is: %d\n", temp->data);
		temp=temp->next;
	}
	return;
}

	
