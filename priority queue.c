#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>

typedef struct node
{
	int a;
	int pri;
	struct node*p;
}NODE;


void show();
void get_high_pri();
void dequeue();
void pri_que();
void show();

NODE*front,*rear;

void main()
{
	int ch=1;
	
	while(ch!=5)
	{
		printf("\n1. enqueue\n2. dequeue\n3. get highest priority element\n4. show\n5. exit\n");
		printf("\nenter choice\t");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: pri_que();break;
			case 2: dequeue();break;
			case 3: get_high_pri();break;
			case 4: show();break;
			case 5: exit(0);
			default :printf("\nwrong choice");
		}
	}
}

void pri_que()
{
	NODE*temp,*header1;
	
	temp=(NODE*)malloc(sizeof(NODE));
	printf("\nenter element and its priority\t");
	scanf("%d%d",&temp->a,&temp->pri);
	
	if(front==NULL)
	{
	   rear=front=temp;
		temp->p=NULL;
	}
	
	else
	{
	
		if(front->pri<temp->pri)
		{
		 temp->p=front;
		 front=temp;
	    }
	    
	    else if(rear->pri>temp->pri)
	    {
	    	rear->p=temp;
	    	rear=rear->p;
	    	rear->p=NULL;
		}
		else
		{
			header1=front;
			
			while(header1!=NULL)
			{
				if((header1->pri)>=(temp->pri)&&header1->p->pri<temp->pri)
				{
					temp->p=header1->p;
					header1->p=temp;
					break;
				}
				
				else header1=header1->p;
			}
		}
    }
	
}

void dequeue()
{
	if(front==NULL)
	{
		printf("queue is empty\n");
		return;
	}
	printf("\n dequeued element is = %d",front->a);
	front=front->p;
}

void get_high_pri()
{
	if(front==NULL)
	{
		printf("\nqueue is empty");
		return;
	}
	printf("\nhighest priority element is = %d",front->a);
}

void show()
{
   NODE*show1;
   show1=front;
   
   if(show1==NULL)
   {
   	printf("\nqueue is empty");
   	return;
   }
   printf("\nelements are\n\n");
   while(show1!=NULL)
   {
      printf("%d\t",show1->a);
	  show1=show1->p; 	
   }	
}
