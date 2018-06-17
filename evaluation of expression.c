#include<stdio.h>
#include<string.h>
#include<conio.h>

char postfix[30];
char stack[20];
int top=-1;
void push(int);
int pop();
void main()
{
	int t1,i,l,q;
	int x,y;
	char symbol;
	printf("\nenter expression");
	gets(postfix);
	
	l=strlen(postfix);

	for(i=0;i<l;i++)
	{
		symbol=postfix[i];
		
		switch(symbol)
		{
			case '+':
			        
					 x=pop();
			         y=pop();
			         x=x+y;
			         push(x);
			         break;
			       
		    case '-':     
				     x=pop();
			         y=pop();
			         x=x-y;
			         push(x);
			         break;
			         
			case '*':    
			         x=pop();
			         y=pop();
			         x=x*y;
			         push(x);
			         break;
			         
			case '/':
			         x=pop();
			         y=pop();
			         x=x/y;
			         push(x);
			         break;
			         
			case '%':
	            	 x=pop();
			         y=pop();
			         x=x%y;
			         push(x);
			         break;
			default :
			
			if(symbol>=48&&symbol<=57)
			q=symbol-48;
			push(q);
			     
		}
		
	}
	t1=pop();
	printf("\nthe result is %d",t1);
}

void push(int a)
{
	if(top==29)
	{
		printf("\nstack overflow");
		return;
	}
	else
	
	{
		top=top+1;
		stack[top]=a;
		
	}
}

int pop()
{
	int t;
	if(top==29)
	{
		printf("\n stack overflow");
		return;
	}
	
	else
	{
		t=stack[top];
		stack[top]=0;
		top=top-1;
		
	}
	
	return t;
}
