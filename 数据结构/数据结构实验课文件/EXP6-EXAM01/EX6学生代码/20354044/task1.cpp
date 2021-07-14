#include<stdio.h> 


int main()
{
    int m,n;
    int front=0,rear=0;
    char str[5],x;

   
    scanf("%d%d",&m,&n);
   
    char Queue[m];getchar();
    
    for(int i=0;i<n;i++)
    {
        
      getchar();
      gets(str);
  
        if(str[0]==32){Queue[rear]=str[1];rear=(rear+1)%m;printf("%d %d\n",front,rear);}
        else{front=(front+1)%m;printf("%d %d\n",front,rear);
		}
        
 

        }   
		 while(rear!=front)
        {
            printf("%c",Queue[front]);
            front=(front+1)%m;
        }
    }

