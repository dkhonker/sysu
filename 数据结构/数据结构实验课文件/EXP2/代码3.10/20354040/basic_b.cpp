#include <stdio.h>
#include <stdlib.h>

int m;  //命令数 

struct node{
	int data;
	struct node *next;
};
node *head; // head指向头节点 

void insert(int i, int x){//插入x到a[i] 
int loc=1;
node *p=head->next;
node *q=p->next;
node *nodei;
nodei->data=x;
while(q!=NULL&&loc<i)
{
	p=q;
	q=p->next;
	loc++;	
}
nodei->next=q;
p->next=nodei;
free(q);
} 

void deleteByIndex(int i){ //删除a[i] 
int loc=1;
node *p=head->next;
node *q=p->next;
while(q!=NULL&&loc<i)
{
	p=q;
	q=p->next;
	loc++;	
}
q->next=q->next->next;
} 

void find(int x){//查找第一个x 
int loc=1;
int flag=0;
node *p=head->next;
node *q=p->next;
while(q!=NULL)
{
	if(p->data==x)
	{
	flag=loc;
	break;	
	}
	else
	{
		p=q;
		q=p->next;
		loc++;
	}
}
printf("%d",flag);
}

void eliminateRepeat(){ //去除重复元素
node *check=head->next;
node *p=check,node *q=p->next
for(check=head->next;check!=NULL;check=check->next)
{
	
	for(node *p=check,node *q=p->next;q!=NULL;)
	if(q->data==check->data)
		q->next=q->next->next;
	else
	{
		p=q;
		q=p->next;
	}
} 
}

void count(int x, int y){//统计[x,y]中元素个数	
	int k = 0;
	node *p = head->next; 
	while (p != NULL){
		if (p->data >= x && p->data <= y) k++;
		p = p->next;
	}
	printf("%d\n", k);
}

void deleteByRange(int x, int y){ //去除[x,y]范围内的元素 
	node *p = head;
	node *q = head-> next;
	while (q != NULL){
		if (q->data >= x && q->data <= y){
			p->next = q->next; free(q); q = p->next;
		}
		else{
			p = q; q = p->next;
		}
	}
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
			case 2: scanf("%d", &i); deleteByIndex(i); break;
			case 3: scanf("%d", &x); find(x); break;
			case 4: scanf("%d%d", &x, &y); count(x, y); break;
			case 5: eliminateRepeat(); break;
			case 6: scanf("%d%d", &x, &y); deleteByRange(x, y); break;
		}
	}
	return 0;
}

