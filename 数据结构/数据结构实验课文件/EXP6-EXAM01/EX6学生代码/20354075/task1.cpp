#include <stdio.h>
#include <stdlib.h>
#define MAXQSIZE 20
typdef struct{
  QElemType *base;
  int front;
  int rear;
}SqQueue;
 
Status InitQueue(SqQueue&Q)
{
   Q.base=(QElemType*)malloc(MAXQSIZE*size of(QElemType));
   if(!Q.base)exit(OVERFLOW);
   Q.front=Q.rear=0;
}

Status EnQueue(SqQueue&Q.QElemType&x)
{
	if(Q.rear+1)%MAXQSIZE==Q.front) return 0;
	Q.base[Q.rear]=x;
	Q.rear=(Q.rear+1)%MAXQSIZE;
}
Status DeQueue(SqQueue&Q.QElemType&x)
{
	x=Q.base[Q.front];
	Q.front=(Q.front+1)%MAXQSIZE;
}

int main()
{
	int m,n;
	scanf("%d%d",&m&n);
    EnQueue(m);
    Dequeue(m);
printf("1%d",m);
printf("2%d",m);
return 0;
}
