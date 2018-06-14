#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int front =-1,rear=-1;
int queue[10];

void enqueue();
void dequeue();
void show();

void main()
{
 int ch=1;

 while(ch!=4)
  {
	  printf("\n1. enqueue\n2. dequeue\n3.show\n4.exit");
	  printf("\nenter choice\t");
	  scanf("%d",&ch);

	 switch(ch)
      {
	case 1: enqueue();break;
	    case 2: dequeue();break;
	    case 3: show();break;
	case 4: exit(0);break;
	default :printf("\nwrong choice");
      }
  }

}

void enqueue()
{

	if((front==0&&rear==9)||front==rear+1)
	{
		printf("\nqueue is full");
		return;
	}

	else
	{
		if(front==-1)
		front=rear=0;

		else if(rear==9)
		rear=0;

		else
		rear++;
	}

	 printf("\nenter element\t");
	 scanf("%d",&queue[rear]);

}
void dequeue()
{

	if(front==NULL)
	{
		printf("\nqueue is empty");
		return;
	}

		    else
			{
				   queue[front]=0;

					 if(front==9)
					 front=0;

					 else front++;
			}
}


void show()
{
	int i;

	printf("\nqueue elements are\n");

	if(front==-1)
	{
	     printf("\nqueue is empty");
	     return;
	}
	else if(front<=rear)

	{
	     for(i=front;i<=rear;i++)
	     printf("%d\t",queue[i]);
	}

	else
	{
		for(i=front;i<=9;i++)
		printf("%d\t",queue[i]);

		for(i=0;i<=rear;i++)
		printf("%d\t",queue[i]);
	}

}
