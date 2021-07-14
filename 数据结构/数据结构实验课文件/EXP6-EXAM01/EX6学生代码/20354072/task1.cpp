#include<stdio.h>
#include<stdlib.h>
#define qsize 4
int m,n,i;
int qdata[200];
struct cell
{

int data;
};
struct queue
{
	struct cell*base;
	int front;
	int rear;
	
};
int Enqueue(struct queue*q,struct cell e)
{
	if((q->rear+1)%qsize==q->front)
	{
		printf("Quene is full!\n");
		return 0;
	}
	else
	{
		q->base[q->rear]=e;
		q->rear=(q->rear+1)%qsize;
		return 1;
		
	}
}
int Dequeue(struct queue *q,struct cell *e)
{
	if(q->front==q->rear)
	{
		printf("Queue is empty!\n");
		return 0;
	}
	else
	{
		*e =q->base[q->front];
		q->front=(q->front+1)%qsize;
		return 1;
	}
}
  int main()
  {
  
 int x[100],i,j;
 struct queue *q;
 struct cell*e;
 printf("请输入定长和命令数：");
 scanf("%d%d",&m,&n);
 q=(struct queue *)malloc(sizeof(struct queue));
 for(i=0;i<m;i++)
 scanf("%d%d",&x[i],&qdata[i]);
 while(x=!=-1)
 {
 	int i;
 	if((x-0)<1e-4)
 	{
 		q->base=struct cell *)malloc(qsize*sizeof(struct cell));
 		q->front=q->rear =0;
 		
	 }
	 else if((x-1)<1e-4)
	 {e.data=x[i];
	 j=Enqueue(q,e);
	 if((j-1)<1e-4)
	 {
	 	printf("输入：%d",e.data);
	 	
	 	
	 }
	 }
	 else if((x-2)<1e-4))
	 {j=Dequeue(q,&e);
	 if(j==1)
	 {printf("输出：%d,e.data");
	 }
	 }
 }
}
 

