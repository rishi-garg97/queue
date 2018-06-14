#include<stdio.h>
#include<stdlib.h>

int top1=-1,s1[50],s2[50],top2=-1;
void enqueue();
void dequeue();
void traverse();
int main()
{
	int ch=1,op;

	while(ch==1)
	{
		printf("enter choice \n");
		printf("1.enqueue\n2.dequeue\n3.traverse\t");
		scanf("%d",&op);

		switch(op)
		{
			case 1: enqueue();break;
			case 2: dequeue();break;
			case 3:traverse();break;
			default : exit(0);
		}
		printf("To continue press 1\t");
		scanf("%d",&ch);

	}
return 0;
}

void enqueue()
{
	while(top1!=-1)
	{
		s2[++top2]=s1[top1];
		top1--;
	}
	printf("enter element\t");
	scanf("%d",&s1[++top1]);
	
	while(top2!=-1)
	{
		s1[++top1]=s2[top2];
		top2--;
	}
}

void dequeue()
{
	if(top1==-1)
	{
		printf("queue is empty\n");
		return;
	}
	top1--;
}
void traverse()
{
	int t=top1;
	if(top1==-1)
	{
		printf("queue is  empty\n");
		return;
	}
	printf("enter elements are\n");
	while(t!=-1)
	{
		printf("%d\n",s1[t]);
		t--;
	}
}

