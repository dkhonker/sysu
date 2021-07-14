#include<stdio.h>
int qwe;
using namespace std;
//循环队列的基本操作
typedef struct {
   int front;  //队头指针
   int rear;   //队尾指针
   int data[20];  //定义顺序队列为一维数组
}SequenQueue;   //循环队列的结构类型为SequenQueue
//初始化
int Enter_SequenQueue(SequenQueue *q,int x)
{
   q -> data[q -> rear] = x;//在队尾插入x
   q -> rear = (q -> rear + 1)%20; //将队尾指针加一
   return 1;
}
//队头元素出队，并通过x返回其值
int Delete_SequenQueue(SequenQueue *q)
{
   if(q ->front == q->rear)
       return 0;
   int x = q -> data[q -> front];
   q -> front = (q -> front + 1)%20; //修改头指针
   return 1;
}
int main()
{
	int m,n,qwe,a,b,i,q;
   scanf("%d %d",&m,&n);
   qwe=m;
    for(i=0;i<n;i++)
    {scanf("%d %c",a,b);
        if(a==1)
		 Enter_SequenQueue(SequenQueue() *p,b);
		 else if(a==2)
		 Delete_SequenQueue(SequenQueue *q);
	}
	
   return 0;
}


