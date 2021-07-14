
#include <stdio.h>
#include <stdlib.h>

typedef struct student * PNode;
typedef struct linkqueue * Pqueue;

typedef struct student
{
    int data;
    PNode next;
}Node;


typedef struct linkqueue
{
    PNode first;
    PNode rear;
}queue;


Pqueue insert(Pqueue link,int num)
{
    PNode p;
    Pqueue q=link;
        p=(PNode)malloc(sizeof(Node));
        p->data=num;
    if(link==NULL)
    {
        printf("��ӵ�һ�����\n");
        q=(Pqueue)malloc(sizeof(queue));
        q->first=p;
        q->rear=p;
        q->rear->next=NULL;
        return q;
    }
    q->rear->next=p;
    q->rear=p;    
    q->rear->next=NULL;
    return q;
}

Pqueue del(Pqueue queue)
{
    if(queue==NULL)
    {
        printf("����Ϊ��");
        return NULL;
    }
    Pqueue q=queue;
    PNode temp;
    temp=q->first;
    if(q->first->next!=NULL)
        q->first=q->first->next;
    else
    {
        printf("����ֻ��һ����㣬ɾ�����\n");
        return NULL;
    }
    free(temp);
    return q;
}

void print(Pqueue link)
{
    PNode q=link->first;
    while(q!=NULL)
    {
        printf("%d ",q->data);
        q=q->next;
    }
    printf("\n");
}

int main(void)
{
    Pqueue linkqueue=NULL;
    int flag=0,num;
    while(1)
    {
        printf("ѡ����ӻ��߳��ӣ�1Ϊ��ӣ�2Ϊ����,0Ϊ�˳�\n");
        scanf("%d",&flag);
        if(flag==1)
        {
            printf("��ѡ��Ҫ��ӵ�ֵ��\n");
            scanf("%d",&num);
            linkqueue=insert(linkqueue,num);
            printf("��ӡ��Ӻ�Ķ��У�\n");
            print(linkqueue);
        }
        else if(flag==2)
        {
            linkqueue=del(linkqueue);
            printf("��ӡ���Ӻ�Ķ��У�\n");
            print(linkqueue);
        }
        else
            break;
    }
    printf("��ӡ���Ķ��У�\n");
    print(linkqueue);
    return 0;
}
