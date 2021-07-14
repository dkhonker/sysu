#include<stdio.h>
#define M 20
typedef struct
{ QElemType *base;
   int head;
   int rear;
}SqQ;

Status InitQueue(SqQ &Q)
{Q.base =(QElermType*)malloc(M*sizeof(QElermType));
if(!Q.base)exit(OVERFLOW);
Q.head=Q.rear=0;
return OK;
}

Status enqueue(SqQ &Q,QElemType x)
{ if((Q.rear +1)%M==Q.head return ERROR;
Q.base[Q.rear]=e;
Q.rear=(Q.rear+1)%M;
return OK;
}

main()
{int m;int n;char Q;int x;
printf("1\t");
enqueue(Q,x);
}

