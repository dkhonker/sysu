#include<stdio.h>
int qwe;
using namespace std;
//ѭ�����еĻ�������
typedef struct {
   int front;  //��ͷָ��
   int rear;   //��βָ��
   int data[20];  //����˳�����Ϊһά����
}SequenQueue;   //ѭ�����еĽṹ����ΪSequenQueue
//��ʼ��
int Enter_SequenQueue(SequenQueue *q,int x)
{
   q -> data[q -> rear] = x;//�ڶ�β����x
   q -> rear = (q -> rear + 1)%20; //����βָ���һ
   return 1;
}
//��ͷԪ�س��ӣ���ͨ��x������ֵ
int Delete_SequenQueue(SequenQueue *q)
{
   if(q ->front == q->rear)
       return 0;
   int x = q -> data[q -> front];
   q -> front = (q -> front + 1)%20; //�޸�ͷָ��
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


