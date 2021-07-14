
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
        printf("添加第一个结点\n");
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
        printf("队列为空");
        return NULL;
    }
    Pqueue q=queue;
    PNode temp;
    temp=q->first;
    if(q->first->next!=NULL)
        q->first=q->first->next;
    else
    {
        printf("队列只有一个结点，删除完毕\n");
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
        printf("选择入队或者出队：1为入队，2为出队,0为退出\n");
        scanf("%d",&flag);
        if(flag==1)
        {
            printf("请选择要入队的值：\n");
            scanf("%d",&num);
            linkqueue=insert(linkqueue,num);
            printf("打印入队后的队列：\n");
            print(linkqueue);
        }
        else if(flag==2)
        {
            linkqueue=del(linkqueue);
            printf("打印出队后的队列：\n");
            print(linkqueue);
        }
        else
            break;
    }
    printf("打印最后的队列：\n");
    print(linkqueue);
    return 0;
}
