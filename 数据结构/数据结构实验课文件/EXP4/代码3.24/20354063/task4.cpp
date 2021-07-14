#include<stdio.h>
#define Max=20001;
#define OK=1;
typedef struct
{
	int data[max];
	int front;
	int rear;
}Squeue;
typedef Squeue *Queue;
int creat_queue(Queue Q)
{
	Q.front=0;
	Q.rear=0;
	return OK;
}

