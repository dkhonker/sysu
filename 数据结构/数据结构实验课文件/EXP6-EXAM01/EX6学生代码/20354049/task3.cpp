#include <stdio.h>
#include <stdlib.h>

int m;  //命令数 

struct node{
	int data;
	struct node *next;
};
node *head; // head指向头节点 

void insert(int i, int x)//插入x到a[i]
{ 
	int j;
	node *p = head;
	node *q = (node*) malloc(sizeof(node));
	if(head->next==NULL)
	{
		q->data = x;
		p->next = q;
		q->next = NULL;
	}
	else
	{
		for(j = 0;j < i-1;j++) {p = p->next;}
		q->data = x;
		q->next = p->next;
		p->next = q;
	}
} 

void find(int x)//查找第一个x 
{
	node *p = head->next; 
	int j = 1;	
	for(;p!=NULL;)
	{
		if(p->data==x) break;
		p = p->next;
		j++;
	}
	if(p!=NULL) printf("%d,\n",j);
	else printf("0\n");
}

void deleteByRange(int x, int y)//去除[x,y]范围内的元素
{  
	node *p = head;
	node *q = head-> next;
	while (q!=NULL)
	{
		if(q->data >= x && q->data <= y)//add something here
		{
			p->next = q->next;
			q = p->next;
		}
		else//add something here
		{
			p = q;
			q = p->next;
		}
	}
} 

int main() 
{
	scanf("%d", &m);
	head = (node*) malloc(sizeof(node));
	head->next = NULL;
	for (int k = 0; k < m; k++)
	{
		int c, i, x, y;
		scanf("%d", &c);
		switch (c)
		{
			case 1: scanf("%d%d", &i, &x); insert(i, x); break;
			case 2: scanf("%d", &x); find(x); break;
			case 3: scanf("%d%d", &x, &y); deleteByRange(x, y); break;
		}
	}
	return 0;
}

