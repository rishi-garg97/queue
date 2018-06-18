#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct rg
{
  int stack[30];
  int top;
}stack_big[6];

int st_no=1;
void show_all_stack_element();
void show();
void push();
void pop();
void rg_stack();

void main()
{
int i;
   for(i=1;i<6;i++)
	stack_big[i].top=-1;
	
	while(st_no!=7)
	{
	
	    printf("1. stack a\n2. stack b\n3. stack c\n4. stack d\n5. stack e\n6. show all stack elememt\n7. exit ");
	    printf("\nenter stack no\n");
	    scanf("%d",&st_no);
	
        	switch(st_no)
	          {
	          	case 1: 
	            case 2: 
        		case 3: 
		        case 4: 
        		case 5: rg_stack();break;
                case 6: show_all_stack_element();break;
				case 7: exit(0);
	            default :printf("\nwrong choice");
           	  }
           
	}
}
	
	
void rg_stack()
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
	        case 4: return ;	
			default :printf("\nwrong choice");	
    	}
    }
}

void push()
{
	
	if(stack_big[st_no].top>29)
	{
		printf("\nstack overflow");
		return;
	}
	
	else
	{
		stack_big[st_no].top=stack_big[st_no].top+1;
		printf("\nenter element\t");
		scanf("%d",&stack_big[st_no].stack[stack_big[st_no].top]);
	}
}

void pop()
{
	int t;
	if(stack_big[st_no].top==-1)
	{
		printf("\nstack is empty");
		return;
	}
	
	else
	{
		t=stack_big[st_no].stack[stack_big[st_no].top];
		stack_big[st_no].stack[stack_big[st_no].top]=0;
        stack_big[st_no].top=stack_big[st_no].top-1;
	}
	
	printf("\n popped element is = %d",t);
	printf("\nnow stack is\n");
	show();
}

void show()
{
	int i;
	
	printf("\n stack elements are\n");	
	for(i=stack_big[st_no].top;i>=0;i--)
	{
		printf("%d\n",stack_big[st_no].stack[i]);
	}
}

void show_all_stack_element()
{
	int i,j,t;
	for(i=1,j=1;i<6;i++,j++)
	{
		
	  printf("\nstack [%d] elements are\n\n",j);
      t=stack_big[i].top;	 
	 while(t>=0)
	 {
	    printf("%d\t",stack_big[i].stack[t]);
	    t--;
	 }
	 printf("\n");
   }
}
