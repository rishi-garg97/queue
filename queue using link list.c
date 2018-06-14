#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct node
{
	 int a;
	 struct node *p;
}NODE;

NODE*rear,*front;
void creation();
void insertion();
void deletion();
void traverse();
int main()
{
	  int op=0;
	 while(op!=6)

	  {

	 printf("1.create queue\n2.insertion\n3.deletion\n4.traverse\n5.exit\n\n");
	 printf("enetr choice");
		scanf("%d",&op);
	    switch(op)
	     { 
	     case 1: creation();break;
		   case 2 : insertion();break;
		case 3  : deletion();break;
		case 4 : traverse();break;
		case 5 : exit(0);
				 {
				      exit(0);
				      op=4;
				  break;
				 }
	     }
      }
   return 0;
}

void creation()
	 {

	  int ch=1;
		  NODE *cpt,*ptr;
        ptr=(NODE*)malloc(sizeof(NODE));
        front=ptr;
        printf("enter value");
        scanf("%d",&ptr->a);
        

	  while(ch==1)
	  {


			  cpt=(NODE*)malloc(sizeof(NODE));
			  ptr->p=cpt;
			   printf("enter value");
			   scanf("%d",&cpt->a);
			   ptr=rear=cpt;

			 printf("press 1 to continue");
		   scanf("%d",&ch);
	 }
	 cpt->p=NULL;

   }

void deletion()
{
	if(front==NULL)
	{
	printf("\nstack is empty\n");
	return ;}
	front=front->p;
	traverse();

}


void traverse()
{
NODE *newheader;
 newheader=front;
     if(front==NULL)
     {
	printf("stack is empty\n");
	return;
	 }
	printf("enter values are\n");
	while(newheader!=NULL)
	{
		printf("\t%d",newheader->a);
	newheader=newheader->p;
	}
	printf("\tNULL\n");

}

void insertion()
{
	NODE *cpt1;
	cpt1=(NODE*)malloc(sizeof(NODE));
	printf("enter value");
	scanf("%d",&cpt1->a);
	rear->p=cpt1;
	rear=cpt1;
	cpt1->p=NULL;
}
