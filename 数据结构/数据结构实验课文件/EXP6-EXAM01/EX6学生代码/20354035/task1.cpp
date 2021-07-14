#include<stdio.h>
int main()
     { int m,n,i;
	   scanf("%d%d",&m,&n);
	   getchar();
	   char sq[m];
	   int front=0;
	   int rear=0;
	   for(i=1;i<=n;i++)
	   {   char a[5];
	       gets(a);
	      if(a[0]=='1')
	        {
	        sq[rear]=a[1];
            rear=(rear+1)%m;
             }
		 else
		     { front=(front+1)%m;
            }
            printf("%d %d\n",front,rear);
	   }
	    while(front!=rear)
		{ printf("%c",sq[front]);
		  front=(front+1)%m;
		}
		return 0;
		} 
