#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int i,m,n,x;
	char y;
	scanf("%d %d",&m,&n);
	typedef struct queue{
	ElemType Queue_array[m];
	int front=0;
	int rear=0;
	}array;
	for(i=0;i<=n;i++)
	{
	   scanf("%d %c",&x,&y);
	   if(x==1)
	   {
	     array[rear]=y;
	     rear=(rear+1)%m;
	   }
	   else if(x==2)
	   {
	   	 y=array[front];
	   	 front=(front+1)%m;
	   }
	   printf("%d %d",front,rear);
	}

}
