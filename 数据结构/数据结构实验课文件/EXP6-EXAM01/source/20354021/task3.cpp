#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};
node *head; // head指向头节点 
int m;
int nums=0;

void insert(int i, int x){//插入x到a[i] 
	nums++;
	node *p = head;
	node *p1;
	int count=0;
	while(count!=i)
	{
		p1=p;
		p=p->next;
		count++;
	}
	node *q = (node*) malloc(sizeof(node));
	q->data=x;
	p1->next=q;
	q->next=p;
	if(i==nums-1)
	{
		q->next=NULL;
	}
	//add something here
}  

void find(int x)
{//查找第一个x 
	node *p = head; 
	int count=0;
	while(p->data!=x&&p!=NULL)
	{
		p=p->next;
		count++;
	}
	if(p!=NULL)printf("%d\n",count);
	else{
		printf("0\n");
	}
}

void deleteByRange(int x, int y){ //去除[x,y]范围内的元素 
	node *p = head;
	node *q = head-> next;
	int count=0;
	while(count!=x-1)
	{
		p=p->next;
		q=q->next;
		count++;
	}
	while(count!=y)
	{
		q=q->next;
		count++;
	}
	p->next=q->next;
} 

int main() {
	scanf("%d", &m);
	head = (node*) malloc(sizeof(node));
	head->next = NULL;
	for (int k = 0; k < m; k++){
		int c, i, x, y;
		scanf("%d", &c);
		switch (c){
			case 1: scanf("%d%d", &i, &x); insert(i, x); break;
			case 2: scanf("%d", &x); find(x); break;
			case 3: scanf("%d%d", &x, &y); deleteByRange(x, y); break;
		}
	}
	return 0;
}
