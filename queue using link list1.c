#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct
{
	int a;
	struct queue *p;
}QUEUE;
QUEUE *front,*rear;
void enqueue();
void dequeue();
void show();

void main()
{
	int ch=1;
	
	while(ch!=4)
 {
	
	switch(ch)
	{
		case 1: enqueue();break;
		case 2: dequeue();break;
		case 3: show();break;
		case 4: exit(0);
		default : printf("\nwrong choice");
	}
 }
 
}

void enqueue()
{
	QUEUE*temp;
	temp=(QUEUE*)malloc(sizeof(QUEUE));
	
	printf("\nenter no\t");
	scanf("%d",temp->a);
	
	
	if(front==NULL)
	{
		front=rear=temp;
		temp->p=NULL;
	}
	else
	{
		rear->p=temp;
		rear=rear->p;
		temp->p=NULL;
	}
}

void dequeue()
{
	if(front==NULL)
	{
		printf("\nqueue is empty");
		return;
	}
   else if(front==rear)
   {
   	front =rear=NULL;
   	return;
   }
   else
   {
   	front=front->p;
   }
}

void show()
{
	QUEUE*t;
	t=front;
	printf("\nqueue elements are")
	while(t!=NULL)
	{
		printf("\t%d",t->a);
		t=t->p;
	}
}

