#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int st1[15],st2[15],count=0,top1=-1,top2=-1;

void enqueue();
void dequeue();
void traverse();
void push1();
void push2();

int main()
{
	int ch=1,cho;
	
	while(ch==1)
	{
		printf("enter choice \n");
		printf("1.enqueue\n2.dequeue\n3.show\t");
		scanf("%d",&cho);
		
		switch(cho)
		{
			case 1: enqueue();break;
			case 2:dequeue();break;
			case 3: traverse();break;
			default :exit(0);
		}
		printf("do you want to continue\t");
		scanf("%d",&ch);
		
	}
}

void enqueue()
{
	count++;
	printf("enter data\t");
	scanf("%d",&st1[++top1]);
}

void push2()
{
	int i;
	for(i=0;i<count;i++)
	{
		st2[++top2]=st1[top1];
	 top1--;
    }
}

void dequeue()
{
	if(top1==-1)
	{
		printf("queue is empty\n");
		return;
	}
	push2();
	top2--;
	count--;
	push1();

}

void push1()
{
	int i;
	for(i=0;i<count;i++)
	{
		st1[++top1]=st2[top2];
	   top2--;
	}
}
void traverse()
{    
	int i;
	if(top1==-1)
	{
		printf("queue is empty\n");
	return;
     }
	printf("enter elements are\n");
	for(i=0;i<count;i++)
	{
		printf("%d\t",st1[i]);
	}
}
