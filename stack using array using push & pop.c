#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int stack[30];
int top=-1;
void show();
void push();
void pop();

void main()
{
	int ch=1;
	while(ch!=4)

    {   
    
	printf("\nenter choice");
	printf("\n1.insert or push\n2.delete or pop\n3.show\n4.exit\t");
	scanf("%d",&ch);
		switch(ch)
    	{
	    	case 1: push();break;
		    case 2: pop();break;
		    case 3: show();break;
	        case 4: exit(0);	
			default :printf("\nwrong choice");	
    	}
    }
}

void push()
{
	
	if(top>29)
	{
		printf("\nstack overflow");
		return;
	}
	
	else
	{
		top=top+1;
		printf("\nenter element\t");
		scanf("%d",&stack[top]);
	}
}

void pop()
{
	int t;
	if(top==-1)
	{
		printf("\nstack is empty");
		return;
	}
	
	else
	{
		t=stack[top];
		stack[top]=0;
		top=top-1;
	}
	
	printf("\n popped element is = %d",t);
	printf("\nnow stack is\n");
	show();
}

void show()
{
	int i;
	
	printf("\n stack elements are\n");	
	for(i=top;i>=0;i--)
	{
		printf("%d\n",stack[i]);
	}
}
