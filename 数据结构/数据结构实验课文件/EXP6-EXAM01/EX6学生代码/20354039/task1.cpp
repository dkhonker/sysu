#include<stdio.h>
#include<stdlib.h>
int m; 
typedef struct{
	char *base;
	int front ;
	int rear;
}sqq;

int enq(sqq &Q,char e)
 {
 	if((Q.rear+1)%m==Q.front) 
	    {return 0;
		}
 	Q.base[Q.rear]=e;
 	Q.rear=(Q.rear+1)%m;
 }
 
int deq(sqq &Q)
 {
 	if(Q.front==Q.rear) return 0;
 	Q.front=(Q.front+1)%m;
 }
 
 int main()
 {  sqq Q;
 	int n;
 	int k;
 	char x;
	int i; 
 	Q.base=(char *)malloc(m*sizeof(char));
 	if(!Q.base) return 0;
 	Q.front=Q.rear=0;
 	scanf("%d %d",&m,&n);
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&k);
 		if(k==1)
 		{	scanf("%c",&x);
 			scanf("%c",&x);
 			enq(Q,x);
 			printf("%d %d\n",Q.front,Q.rear);
		 }
		else if(k==2)
		{
			deq(Q);
			printf("%d %d\n",Q.front,Q.rear);
		}
		else return 0;
	 }
	 for(i=Q.front;i!=Q.rear;i++)
	 {
	 	printf("%c",Q.base[i]);
	 }
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
