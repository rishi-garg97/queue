#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<conio.h>
#include<stdlib.h>

typedef struct node
{
	char ch;
	struct node *p;
 }NODE;
 
 NODE*header;
 
void rev_str();
void entr_strng();
void main()
{
    entr_strng();
}

void entr_strng()
{
    int l,i=0;
 	char str[100];
 	
 	printf("\nenter string\t");
 	scanf("%s",str);
	
	l=strlen(str);
	
	while(i<=l)
	{
	
	     NODE*cpt;
 	     cpt=(NODE*)malloc(sizeof(NODE));
 	     cpt->ch=str[i];
 	     cpt->p=header;
 	     header=cpt;
 	     i++;
   }

rev_str();
}

void rev_str()
{
	NODE*ptr;
	ptr=header;
	
	if(ptr==NULL)
	{
		printf("\n no string entered");
		return;
	}
	else 
	{
		printf("\nreverse of string is\n\n");
	    while(ptr!=NULL)
	   {  
	      printf("%c",ptr->ch);
		  ptr=ptr->p;	
     	}
     	
     	printf("\n\n");
    }
    
}
