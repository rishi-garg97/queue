#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
      int a[10];
	  int k,r=0;
	int ch=0,i=0;
	
	 while(ch!=3)
	 
	   {
	   
	      printf("enter choice\n");
	      printf("1.insertion\n2.deletion\n3.exit");
	      scanf("%3d",&ch);
	      switch(ch)
 	         
 	         {
			  
			  
        	   case 1:
	   	                if(i>9)
	   	                {printf("queue overflow\n\n");continue;}
	   	        
	   	                else 
	   	                {
						   
	   	                printf("enter no\t");
	   	                scanf("%3d",&a[i]);
	   	                i++;
	   	                printf("queue elements are\n");
	   	                for(k=r;k<i;k++)
	   	                printf("%3d\n",a[k]);
	   	                break;    
                        }
				   
				case 2:     
                        r=r+1;
                         if(a[r]==0)
                         {printf("queue is empty\n");}
                        
						else
						{
                         printf("queue elements are\n");
	   	                 for(k=r;k<i;k++)
	   	                 printf("%3d\n",a[k]);
	   	                break;    
	                   }
               case 3: exit(0);break; 			 
			 }
  
        }
                        
	  if(ch==3)
                         {
                         	if(a[r]==0)
                         	printf("queue is empty");
                         	
	                        printf("queue elemements are\n"); 
                            for(k=r;k<i;k++)
                            printf("%3d\n",a[k]);
                         }
  
        return 0;
   }
   
