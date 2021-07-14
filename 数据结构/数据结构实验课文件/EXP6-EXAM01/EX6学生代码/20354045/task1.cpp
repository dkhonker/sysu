#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define Maxn = 100
#define Maxm = 20

int m,n;

typedef struct _queue
{
    int *buffer;
    unsigned int front;
    unsigned int rear;
    unsigned int size;
}queue;

int initQueue(queue *Q, unsigned int size)
{
    Q->buffer = (int*)malloc(size * sizeof (int));
    if(!Q->buffer)
       return 0;
    Q->size = size;
    Q->front = 0;
    Q->rear = 0;
    return 1;
}

int pop_front(queue *Q, int *x)
{
    if(Q->front == Q->rear)
        return 0;
 
    *x = Q->buffer[Q->front];
    Q->front = (Q->front + 1) % Q->size;
    return 1;
}

int push_back(queue *Q, int n)
{
    if((Q->rear + 1) % Q->size == Q->front)
        return 0;
 
    Q->buffer[Q->rear] = n;
    Q->rear = (Q->rear + 1) % Q->size;
    return 1;
}

void demand(queue *Q)
{
	int k;
	char x;
	for(int i=0;i<n;i++)
	{
		scanf("%d %c\n",&k,x);
		
		if(k == 1)
		{
		pop_front(*Q,*n);
		}
		else if(k == 2)
		{
    	push_back(*Q,*n);
		}
		printf("%d %d",*queue.front,*Q.rear);
	}
}
int main()
{
	
	
	printf("please input m and n:\n");
	scanf("%d %d\n",&m,&n);
	
	demand(queue);
	
	queue *p;
	p = *queue->front;
	while(*queue->front){
		printf("%d  ", queue->front->data);
		queue->front = (queue->front +1);
	}
	printf("\n");
	
	return 0;
 } 
 

