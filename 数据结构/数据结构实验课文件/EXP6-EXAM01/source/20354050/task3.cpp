#include <stdio.h>
#include <stdlib.h>

int m;  //命令数 

struct node
{
	int data;
	struct node *next;
};
node *head; // head指向头节点 
void dayin()
{
	node *p = head;
	while(p !=NULL)
	{
		printf("%d  ",p->data);
		p=p->next;
	}
}
void insert(int i, int x)
{//插入x到a[i] 
	node *p = head;//head ->date 没有变。。。改p->date 
	
	while (i > 1)
	{
		p = p->next; i--;
	} 
	node *q = (node*) malloc(sizeof(node));
    if(head->data==-123456)
         head->data=x; 
	else
	{
	q->data=p->data;
	p->data =x;
	q->next = p->next;
	p->next = q; 
	}
	//add something here
} 
void find(int x){//查找第一个x 
	node *p = head->next; 
	int j = 1;
	while (p->data != x)
	{
		p = p->next; 
		j++;
	}
	//add something here  ok？ 
	if (p == NULL) 
	   j = 0;
	printf("%d\n", j);
}

void deleteByRange(int x, int y)
{ //去除[x,y]范围内的元素 
	node *p = head;
	node *q = head-> next;
	//头指针？ 
	while (q != NULL)
	{
		if(head->data>=x && head->data<=y)
        {
        	head = head->next;
		}
		if (q->data >= x && q->data <= y)
		{
			p->next = q->next;
			q = q->next; 	//add something here
		}
		else
		{
			p = p->next;
			q = q->next;//add something here
		}
	}
} 
int main() 
{
	scanf("%d", &m);
	head = (node*) malloc(sizeof(node));
	head->next = NULL;  //建头表 
	head->data =-123456;
	for (int k = 0; k < m; k++)
	{
		int c, i, x, y;  	scanf("%d", &c);
		switch (c)
		{
			case 1: scanf("%d%d", &i, &x); insert(i, x); break;
			case 2: scanf("%d", &x); find(x); break;
			case 3: scanf("%d%d", &x, &y); deleteByRange(x, y); break;
		}
	}
	return 0;
}

